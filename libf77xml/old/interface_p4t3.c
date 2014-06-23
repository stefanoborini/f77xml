#include <assert.h>

private void f77xml__el_hasChildNodes(bool *o_bool,
									code *i_code1,
									code *i_code2,
									error *o_err) {
	/* {{{ OK */
	DomImpl *di;
	Cache *cache;
	GdomeElement *elem;
	GdomeDOMString *str;
	GdomeException exc;

	di = f77xml_DomImpl_instance();
	cache = f77xml_DomImpl_getCache(di);
	*o_err = ERR_NEVER_RETURN_THIS;
	*o_bool = false;

	elem = f77xml_Cache_getElement(cache, *i_code1, o_err);
	if (elem == NULL) return;
	
	str = f77xml_Cache_getDOMString(cache, *i_code2, o_err);
	if (str == NULL) return;

	*o_bool = gdome_el_hasAttribute(elem,str,&exc);

	if (exc) {
		*o_err = ERR_GDOME_BASE + exc;
		return;
	}

	*o_err = ERR_NO_ERROR;
	
	/* }}} */

}



