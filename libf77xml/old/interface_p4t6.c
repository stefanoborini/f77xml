#include <assert.h>

private void f77xml__Element__hasAttribute(bool *o_bool1,
											code *i_code1,
											string *i_string,
											error *o_err) { 
	/* {{{ OK */
#if 0
	GdomeElement *elem;
	GdomeException exc;
	gpointer gPtr;
	DomImpl *di;
	Cache *cache;
	GdomeDOMString *domString;

	di = f77xml_DomImpl_instance();
	cache = f77xml_DomImpl_getCache(di);
	domString = gdome_str_mkref (i_string->str);
	
	*o_bool1 = false;
	*o_err = ERR_NEVER_RETURN_THIS;
	
	gPtr = f77xml_Cache_queryPointer(cache, *i_code1);
	
	if (!gPtr) {
		*o_err = ERR_NO_CACHE_HIT;
		return;
	}	

	elem = GDOME_EL(gPtr);

	if (!elem) {
		*o_err = ERR_DATA_NOT_AN_ELEMENT;
		return;
	}

	*o_bool1 = gdome_el_hasAttribute(elem,domString,&exc);
	gdome_str_unref(domString);
	
	if (exc) {
		*o_bool1=false;
		*o_err = ERR_GDOME_BASE + exc;
		return;
	}
	
	*o_err = ERR_NO_ERROR;
	
	/* }}} */
#endif
}

