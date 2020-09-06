
for x in `find . -name 'ding.h'`
do
	perl -pi -e 's/12.1src/\/usr\/src/g' ${x}
done
