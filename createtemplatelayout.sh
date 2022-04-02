#!/bin/sh
newname="$1"

if [ "$1" = "" ]; then
	echo "pass a name"
	exit 1
fi

source subscript/util
sep=$(_gendelimiter)
echo "Creating new Folder $newname .."
mkdir "$newname" || return 1
cd "$newname" || return 1
mkdir "_overlay"
touch "_naming"
touch "_buttonmods"

##### example
echo "Creating excample setup $newname .."
mkdir "keys_exmpl"
cd "keys_exmpl"
echo "\"Exmpl Title\"${sep}\"ExmplAltTtl\"${sep}XK_ExmplKey${sep}Scaling" > exmpl_oneLine
echo "\"Exmpl Title2\"${sep}0${sep}XK_ExmplKey${sep}1.5" >> exmpl_oneLine
cd ..

cd "_overlay"
echo "exmplText${sep}0${sep}exmplotherKeyCode" > exmplKeyCode
cd ..

echo "ExmplName${sep}DefinitionFolderName"  > _naming
echo "XK_ExmplModKey${sep}ExmplMouseButton" > _buttonmods

cd ..
echo "Created new excample Setup in Folder: \"$newname\""
echo "To combine the layout into one layout Class File: .."
echo "--> run \"./genlayout_definitionClass.sh $newname\" .."
echo "--> in this Folder $PWD"
