#ifdef HAVE_CONFIG_H
#include "config.h"
#endif
#include "php.h"
 
#define PHP_EXTENSION_VERSION "1.0"
#define PHP_EXTENSION_EXTNAME "seasoning"
 
extern zend_module_entry my_extension_module_entry;
#define phpext_my_extension_ptr &my_extension_module_entry
 
// declaration of a custom my_function()
PHP_FUNCTION(seasoning_salt);
PHP_FUNCTION(seasoning_pw);
PHP_FUNCTION(seasoning_weave);

// list of custom PHP functions provided by this extension
// set {NULL, NULL, NULL} as the last record to mark the end of list
static function_entry functions[] = {
    PHP_FE(seasoning_salt, NULL),
    PHP_FE(seasoning_pw, NULL),
    PHP_FE(seasoning_weave, NULL),
    {NULL, NULL, NULL}
};
 
// the following code creates an entry for the module and registers it with Zend.
zend_module_entry my_extension_module_entry = {
#if ZEND_MODULE_API_NO >= 20010901
    STANDARD_MODULE_HEADER,
#endif
    PHP_EXTENSION_EXTNAME,
    functions,
    NULL, // name of the MINIT function or NULL if not applicable
    NULL, // name of the MSHUTDOWN function or NULL if not applicable
    NULL, // name of the RINIT function or NULL if not applicable
    NULL, // name of the RSHUTDOWN function or NULL if not applicable
    NULL, // name of the MINFO function or NULL if not applicable
#if ZEND_MODULE_API_NO >= 20010901
    PHP_EXTENSION_VERSION,
#endif
    STANDARD_MODULE_PROPERTIES
};
 
ZEND_GET_MODULE(seasoning)
 
// implementation of a custom my_function()
PHP_FUNCTION(seasoning_salt)
{

    RETURN_STRING("This is my function", 1);
}