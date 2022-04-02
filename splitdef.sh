#!/bin/sh
folder="$1"
[ "$folder" = "" ] && echo "No Layout Name passed" && exit 0

for f in subscript/split.d/*
do 
	source "$f" >> .tmpnames
done

for f in subscript/psplit.d/*
do 
	source "$f"
done

linetypes=$(cat .tmpnames)
rm .tmpnames

folder=$(echo "${folder}" | sed 's/layout.//' | sed 's/\.h//')
delimiter="{;}"
inputfile="layout.$folder.h"
mainpath="./$folder"
path="$mainpath"
linetype=""

[ -d "$folder" ] || mkdir -- "$folder"
while read -r line
do
#if [ "$line" = "" ]; then
#	echo "empty skipped" > /dev/null
#else
if [ "$line" != "" ]; then
	if [ "$line" = "};" ]; then
		linetype=""
	else
		for check in $linetypes
		do
			res=$($check "$line") && linetype="$res"
		done
	fi
	if [ -n "$linetype" ]; then
		"$linetype" "$line"
	fi
fi
done < "$inputfile"
echo "Done. see $folder"
