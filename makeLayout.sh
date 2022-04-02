#!/bin/sh
all(){
	for layout in $(ls layout.*.h)
	do
		name=$(echo "$layout" | sed 's/layout\.//' | sed 's/\.h//')
		echo "Layout: $name"
		makelayout "$name" > /dev/null || return 1
	done;
	echo "Done"
}

makelayout(){
	if [ "$1" = "*" ]; then
		all || return 1
		return 0
	fi
	opt=""
	[ "$SUDO_ASKPASS" != "" ] && opt="-A"
	sudo $opt make install LAYOUT="$1" && return 0
	return 1
}

abort(){
	echo "Aborted by Error"
	exit 1
}
name=$(echo "$1" | sed 's/layout\.//' | sed 's/\.h//')
makelayout "$name" || abort
exit 0
