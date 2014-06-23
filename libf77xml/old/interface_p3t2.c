#include <assert.h>

private void f77xml__str_new(code *o_code,
				string *i_string,
				error *o_err) {
	GdomeDOMString *domString;
	DomImpl *di;
	Cache *cache;

	di = f77xml_DomImpl_instance();
	cache = f77xml_DomImpl_getCache(di);
	*o_code = NullCode;
	*o_err = ERR_NEVER_RETURN_THIS;
	
	domString = gdome_str_mkref_dup(i_string->str);

	*o_code = f77xml_Cache_addPointer(cache, (gpointer)domString, Type_GdomeDOMString);

}



