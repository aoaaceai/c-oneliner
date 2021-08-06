AC_INIT([c-oneliner], [0.0.3], [b09902010@csie.ntu.edu.tw])
AM_INIT_AUTOMAKE
AC_CONFIG_FILES([Makefile])
AC_CHECK_PROG([HAS_ZSH], [zsh], [yes])
AS_IF([test "x$HAS_ZSH" = xyes], [], [AC_MSG_ERROR([zsh is a required dependency], 1)])
AC_OUTPUT

