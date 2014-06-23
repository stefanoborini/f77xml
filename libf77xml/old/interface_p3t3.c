#include <assert.h>

private void f77xml__str_len(unsigned int *o_uint,
									code *i_code,
									error *o_err) {
	/* {{{ OK */
	DomImpl *di;
	Cache *cache;
	GdomeDOMString *str;
	GdomeException exc;

	di = f77xml_DomImpl_instance();
	cache = f77xml_DomImpl_getCache(di);
	*o_err = ERR_NEVER_RETURN_THIS;

	str = f77xml_Cache_getDOMString(cache, *i_code, o_err);
	if (str == NULL) return;

	*o_err = ERR_NO_ERROR;
	*o_uint = gdome_str_length(str);
	/* }}} */

}

private void f77xml__nl_length(unsigned int *o_uint,
								code *i_code,
								error *o_err) {

	/* {{{ OK */
	DomImpl *di;
	Cache *cache;
	GdomeNodeList *nl;
	GdomeException exc;

	di = f77xml_DomImpl_instance();
	cache = f77xml_DomImpl_getCache(di);
	*o_err = ERR_NEVER_RETURN_THIS;

	nl = f77xml_Cache_getNodeList(cache, *i_code, o_err);
	if (nl == NULL) return;

	*o_uint = gdome_nl_length(nl, &exc);
	
	if (exc) {
		*o_err = ERR_GDOME_BASE + exc;
		return;
	}

	*o_err = ERR_NO_ERROR;
	
	/* }}} */

}


private void f77xml__n_nodeType(unsigned int *o_uint,
								code *i_code,
								error *o_err) {

	/* {{{ OK */
	DomImpl *di;
	Cache *cache;
	GdomeNode *n;
	GdomeException exc;

	di = f77xml_DomImpl_instance();
	cache = f77xml_DomImpl_getCache(di);
	*o_err = ERR_NEVER_RETURN_THIS;

	n = f77xml_Cache_getNode(cache, *i_code, o_err);
	if (n == NULL) return;

	*o_uint = gdome_n_nodeType(n, &exc);
	
	if (exc) {
		*o_err = ERR_GDOME_BASE + exc;
		return;
	}

	*o_err = ERR_NO_ERROR;
	
	/* }}} */

}


