#!/bin/sh
all(){
for folder in $(ls -F | grep '/' | sed 's/\///')
do

	if [ "$folder" != "subscript" ]; then
		echo "folder: $folder"
		gen "$folder" > /dev/null
	fi
done

echo "Done"
}

gen(){
folder=$(echo "$1"| sed 's/\///')

if [ "$1" = "*" ]; then
	all
	exit 0
fi
if [ "$1" = "" ]; then
  test -e /usr/bin/dmenu || echo "es muss ein Ordner als Parameter mitgegeben werden!" || exit 0
  folder=$(ls -F | grep "/$" | grep -v "subscript/" | dmenu -p "Select Layout Folder: " | sed 's/\///')
  [ "$folder" = "" ] && echo "nichts gewählt" && exit 0
fi
[ -d "$folder" ] || (echo "$folder existiert nicht"; exit)

outputfile="../layout.$folder.h"
[ -e "$outputfile" ] && rm "$outputfile"

cd "$folder"
[ -e "_0keys.def" ] && rm _0keys.def

for subscript in $(ls ../subscript/)
do
	printf "%s/" "$subscript"
	ln -s -f "../subscript/$subscript" "$subscript"
done
echo ""

for f in ./gen.d/*
do
	[ -f "$f" ] && source "$f"
done

processfiles
postprocess

./clean.sh
cd ..
}

processfiles(){
	for f in $(ls | grep -v "\.def$")
	do
		if [ $(echo "$f" | grep -c "keys_") -gt 0 ]
		then
			[ -f "$f" ] || _key "$f"
		else
		        [ -L "$f" ] || ([ -e "$f" ] && type "$f" > /dev/null 2>&1 && "$f" "$f")
		fi
	done
}

postprocess(){
	for f in *.def
	do
		x=$(echo "$f" |  sed 's/\./_/')
		"$x" "$f"
	done
}

echo "begin"
gen "$1"
