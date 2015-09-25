curdir=$(pwd);
tar -xf .compile.tar
for file in $curdir/rendus/lvl0/*; do
	    [ -f "$file" ] && [ -x "$file" ] && "$file"
done
rm -rf rendus/lvl*/*.sh
tar -xf .tests.tar
tar -xf .temoins.tar
tar -xf .traces.tar
for file in $curdir/rendus/lvl0/aff_a/*; do
        [ -f "$file" ] && [ -x "$file" ] && "$file"
done
rm -f rendus/lvl*/*/*.ref
rm -f rendus/lvl*/*/*.sh
#rm -rf grade_me.sh
