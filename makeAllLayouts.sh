#!/bin/sh

for layout in $(ls layout.*.h)
do
name=$(echo "$layout" | sed 's/layout\.//' | sed 's/\.h//')
echo "Layout: $name"
./makeLayout.sh "$name" > /dev/null
done;
echo "Done"
