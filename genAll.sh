#!/bin/sh

for folder in $(ls -F | grep '/' | sed 's/\///')
do

	if [ "$folder" != "subscript" ]; then
		echo "folder: $folder"
		./genlayout_definitionClass.sh "$folder" > /dev/null
	fi
done


echo "Done"
