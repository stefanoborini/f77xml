/* Automatically generated by APIGen */
/* Changes will not survive. Modify    */
/* apigen.xml file instead                     */




void f77xml__di_saveDocToFile(bool *o_ret,
			code *i_di,
			code *i_doc,
			StringObj *i_uri,
			unsigned int *i_mode,
			error *o_err) {
	/* {{{ */
	GdomeDOMImplementation *di;
	GdomeDocument *doc;
	GdomeException exc;
	Cache *cache;
	
	cache = f77xml_Cache_instance();

	*o_err = ERR_NEVER_RETURN_THIS;
	*o_ret = false;
	
	di = f77xml_Cache_getDOMImplementation(cache, *i_di, o_err);
	if (di == NULL) return;

	doc = f77xml_Cache_getDocument(cache, *i_doc, o_err);
	if (doc == NULL) return;

	*o_ret = gdome_di_saveDocToFile(di,doc,i_uri->str,*i_mode,&exc);

	if (exc) {
		*o_err = ERR_GDOME;
		return;
	}
	
	*o_err = ERR_NO_ERROR;
	/* }}} */
}

					