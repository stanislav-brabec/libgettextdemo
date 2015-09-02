#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.63])
AC_INIT([libgettextdemo], [0.1], [Stanislav Brabec <sbrabec@suse.cz>])
AC_CONFIG_SRCDIR([libgettextdemo/libgettextdemo.c])
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_MACRO_DIR([m4])
AM_INIT_AUTOMAKE([-Wall dist-bzip2])
dnl We build a library, we need libtool.
LT_INIT
AM_MAINTAINER_MODE
dnl Define GETTEXT_PACKAGE. This is optional, but useful if you want to have a different gettext domain.
GETTEXT_PACKAGE="$PACKAGE"
AC_SUBST([GETTEXT_PACKAGE])
AC_DEFINE_UNQUOTED([GETTEXT_PACKAGE], ["$GETTEXT_PACKAGE"], [Define the gettext package to be used.])

# Checks for programs.
dnl We need C compiler.
AC_PROG_CC

# Checks for libraries.
dnl Define library version string. See libtool documentation for more.
LIBGETTEXTDEMO_CURRENT=0
LIBGETTEXTDEMO_AGE=0
LIBGETTEXTDEMO_REVISION=0
LIBGETTEXTDEMO_VERSION_INFO="$LIBGETTEXTDEMO_CURRENT:$LIBGETTEXTDEMO_REVISION:$LIBGETTEXTDEMO_AGE"
AC_SUBST([LIBGETTEXTDEMO_VERSION_INFO])

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.
dnl Gettext initial check.
AM_GNU_GETTEXT_VERSION([0.17])
dnl This is required for correct locale processing.
AM_GNU_GETTEXT([external],[need-ngettext],[])
dnl Define LOCALEDIR. It is optional, but you often need it in the code.
dnl It may contain prefix path elements and it is not possible to define in config.h.
dnl Define it here and expand by make.
dnl AC_SUBST([localedir], ['$(datadir)/locale'])
CPPFLAGS="$CPPFLAGS -DLOCALEDIR=\\\"\$(localedir)\\\""

AC_CONFIG_FILES([ po/Makefile.in
		  libgettextdemo/Makefile
		  libgettextdemo.pc
		  Makefile
		])
AC_OUTPUT
