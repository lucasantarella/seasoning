#define PHP_EXTENSION_VERSION "1.0"
#define PHP_EXTENSION_EXTNAME "seasoning"

PHP_FUNCTION(seasoning_salt);
PHP_FUNCTION(seasoning_pw);
PHP_FUNCTION(seasoning_weave);

extern zend_module_entry seasoning_module_entry;
#define phpext_seasoningn_ptr &seasoningn_module_entry