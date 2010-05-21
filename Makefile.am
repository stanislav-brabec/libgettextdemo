SUBDIRS = m4 po libgettextdemo

AM_CPPFLAGS = -I$(top_srcdir)/libgettextdemo

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = libgettextdemo.pc

noinst_PROGRAMS = libgettextdemo-test
libgettextdemo_test_SOURCES = test.c
libgettextdemo_test_LDADD = $(top_builddir)/libgettextdemo/libgettextdemo.la

EXTRA_DIST = config.rpath m4/ChangeLog

ACLOCAL_AMFLAGS = -I m4
