#!/bin/sh
all(){
for folder in $(ls -F | grep '/' | sed 's/\///')
do

	if [ "$folder" != "subscript" ]; then
		echo "rm: $folder"
		rm -r "$folder" #> /dev/null
	fi
done

}

make clean
all
[ -e svkbd-arrows ] && rm -f svkbd-arrows
[ -e svkbd-ch-android ] && rm -f svkbd-ch-android
[ -e svkbd-ch-text ] && rm -f svkbd-ch-text
[ -e svkbd-mobile-plain ] && rm -f svkbd-mobile-plain
[ -e svkbd-mobile-simple ] && rm -f svkbd-mobile-simple

