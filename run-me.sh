#!/bin/bash

set -o errexit
touch README
touch NEWS
touch AUTHORS
touch ChangeLog
#gettextize --force
./autogen.sh --no-configure
#mv po/Makevars.template po/Makevars
cd m4
touch ChangeLog
echo "EXTRA_DIST =" *.m4 >Makefile.am
cd ..
./autogen.sh --prefix=$PWD/RUNTEST
make
make install
# This updates po files (useful before release).
cd po
make update-po
cd ..
# Tarball QA (useful before release).
make distcheck
# test is not installed, but we need installed locales to test them:
LD_LIBRARY_PATH=$PWD/RUNTEST/lib LANG=cs_CZ.UTF-8 .libs/libgettextdemo-test
cp -a libgettextdemo-0.1.tar.bz2 ..
