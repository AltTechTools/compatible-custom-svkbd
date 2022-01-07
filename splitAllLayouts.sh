#!/bin/sh

for layout in $(ls layout.*.h)
do
name=$(echo "$layout" | sed 's/layout\.//' | sed 's/\.h//')
echo "New Folder: $name"
./splitdef.sh "$name" > /dev/null
done;
echo "Done"
