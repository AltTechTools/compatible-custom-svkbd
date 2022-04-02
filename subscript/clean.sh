#/bin/sh

rm *.sh
rm *.def
rm *.len
[ -L "split.d" ] && rm split.d
[ -L "psplit.d" ] && rm psplit.d
[ -L "gen.d" ] && rm gen.d
[ -L "util" ] && rm util
