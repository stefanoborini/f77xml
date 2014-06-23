#include <assert.h>

private void f77xml__el_hasChildNodes(bool *o_bool,
									code *i_code,
									error *o_err) {
	/* {{{ OK */
	DomImpl *di;
	Cache *cache;
	GdomeElement *elem;
	GdomeException exc;

	di = f77xml_DomImpl_instance();
	cache = f77xml_DomImpl_getCache(di);
	*o_err = ERR_NEVER_RETURN_THIS;

	elem = f77xml_Cache_getElement(cache, *i_code, o_err);
	if (elem == NULL) return;

	*o_bool = gdome_el_hasChildNodes(elem,&exc);

	if (exc) {
		*o_err = ERR_GDOME_BASE + exc;
		return;
	}

	*o_err = ERR_NO_ERROR;
	
	/* }}} */

}



