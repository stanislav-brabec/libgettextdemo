autopoint --force
libtoolize --force --copy
autoheader --force
aclocal -I m4
automake --add-missing --gnu
autoconf
if test "$1" != --no-configure ; then
  exec ./configure --enable-maintainer-mode "$@"
fi
