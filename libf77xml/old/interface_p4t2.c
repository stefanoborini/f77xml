#include <assert.h>

private void f77xml__nl_item(code *o_code1,
								code *i_code2,
								unsigned int *o_uint,
								error *o_err) {

	/* {{{ OK */
	DomImpl *di;
	Cache *cache;
	GdomeNodeList *nl;
	GdomeNode *node;
	GdomeException exc;

	di = f77xml_DomImpl_instance();
	cache = f77xml_DomImpl_getCache(di);
	*o_err = ERR_NEVER_RETURN_THIS;

	nl = f77xml_Cache_getNodeList(cache, *i_code2, o_err);
	if (nl == NULL) return;

	*o_err = ERR_NO_ERROR;
	node = gdome_nl_item(nl,*o_uint,&exc);

	if (exc) {
		assert (node == NULL);
		*o_err = ERR_GDOME_BASE + exc;
		return;
	}

	*o_err = ERR_NO_ERROR;

	if (node == NULL) {
		*o_code1 = NullCode;
		return;
	}
	
	*o_code1 = f77xml_Cache_queryCode(cache, (gpointer)node);

	if (*o_code1 != NullCode) {
		gdome_n_unref(node,&exc);
		return;
	}
	
	*o_code1 = f77xml_Cache_addPointer(cache, (gpointer)node, Type_GdomeNode);

	/* }}} */

}



