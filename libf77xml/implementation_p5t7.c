/* Automatically generated by APIGen */
/* Changes will not survive. Modify    */
/* apigen.xml file instead                     */




private void f77xml__doc_importNode(code *o_ret,
				code *i_code1,
				code *i_code2,
				bool *i_bool1,
				error *o_err) {

	/* {{{ OK */
	GdomeDocument *obj1;
	GdomeNode *obj2;
	GdomeNode *ret;
	GdomeException exc;

	Cache *cache = f77xml_Cache_instance();
	*o_err = ERR_NEVER_RETURN_THIS;

	obj1 = f77xml_Cache_getDocument(cache, *i_code1, o_err);
	if (obj1 == NULL) return;

	obj2 = f77xml_Cache_getNode(cache, *i_code2, o_err);
	if (obj2 == NULL) return;

	ret = gdome_doc_importNode(obj1,obj2,*i_bool1,&exc);

	if (exc) {
		assert (ret == NULL);
		*o_err = ERR_GDOME;
		return;
	}

	*o_err = ERR_NO_ERROR;

	if (ret == NULL) {
		*o_ret = NullCode;
		return;
	}

	*o_ret = f77xml_Cache_addNode(cache, (gpointer)ret);

	/* }}} */

}

					