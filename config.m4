PHP_ARG_ENABLE(seasoning, whether to enable my extension,
[ --enable-seasoning   Enable my extension])
 
if test "$PHP_SEASONING" = "yes"; then
  AC_DEFINE(HAVE_SEASONING, 1, [Whether you have my extension])
  PHP_NEW_EXTENSION(seasoning, seasoning.c, $ext_shared)
fi