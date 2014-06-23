#include <assert.h>

static void f77xml__Element__getAttribute(	string *o_string1, 
											unsigned int *i_offset1, 
											code *i_code,
											string *i_string2, 
											error *o_err) { 
	/* {{{ OK */
	int len,off;
    GdomeElement *elem;
	GdomeDOMString *name,*value;
	GdomeException exc;
	DomImpl *di;
	Cache *cache;
	gpointer gPtr;
	
	di = f77xml_DomImpl_instance();
	cache = f77xml_DomImpl_getCache(di);

	f77xml_String_clear(o_string1);
	*o_err = ERR_NEVER_RETURN_THIS;

	if (*i_code == NullCode) {
		*o_err = ERR_NULL_CODE;
		return;
	}
	
	// get the node from the cache
	
	gPtr = f77xml_Cache_queryPointer(cache, *i_code);
	
	if (gPtr == NULL) {
		*o_err = ERR_NO_CACHE_HIT;
		return;
	}	

	elem = GDOME_EL(gPtr);

	if (elem == NULL) {
		*o_err = ERR_DATA_NOT_AN_ELEMENT;
		return;
	}
	
	name = gdome_str_mkref(i_string2->str);
	value = gdome_el_getAttribute(elem,name,&exc);
	gdome_xml_str_unref(name);
	
	if (exc) {
		assert ( value == NULL );
		*o_err = ERR_GDOME_BASE + exc;
		return;
	}

	len = gdome_str_length(value);
	off = *i_offset1;

	if (off >= len) off = len;
	
	f77xml_String_set(o_string1, value->str+off);

	gdome_xml_str_unref(value);
	
	*o_err = ERR_NO_ERROR;

	/* }}} */

}


