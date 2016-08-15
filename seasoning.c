#include "php.h"
#include "seasoning.h"
 
// list of custom PHP functions provided by this extension
// set {NULL, NULL, NULL} as the last record to mark the end of list
static function_entry functions[] = {
    PHP_FE(seasoning_salt, NULL)
    PHP_FE(seasoning_pw, NULL)
    PHP_FE(seasoning_weave, NULL)
    {NULL, NULL, NULL}
};
 
// the following code creates an entry for the module and registers it with Zend.
zend_module_entry seasoning_module_entry = {
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

// implementation of a custom my_function()
PHP_FUNCTION(seasoning_pw)
{

    RETURN_STRING("This is my function", 1);
}
 
// implementation of a custom my_function()
PHP_FUNCTION(seasoning_weave)
{

    RETURN_STRING("This is my function", 1);
}