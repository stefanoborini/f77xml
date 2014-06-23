/* Automatically generated by APIGen */
/* Changes will not survive. Modify    */
/* apigen.xml file instead                     */




private void f77xml__c_replaceData(code *o_ret,
				code *i_code1,
				unsigned int *i_uint1,
				unsigned int *i_uint2,
				code *i_code2,
				error *o_err) {

	/* {{{ OK */
	GdomeComment *obj1;
	GdomeDOMString *obj2;
	GdomeException exc;

	Cache *cache = f77xml_Cache_instance();

	*o_err = ERR_NEVER_RETURN_THIS;
	*o_ret = NullCode;

	obj1 = f77xml_Cache_getComment(cache, *i_code1, o_err);
	if (obj1 == NULL) return;

	obj2 = f77xml_Cache_getDOMString(cache, *i_code2, o_err);
	if (obj2 == NULL) return;

	gdome_c_replaceData(obj1,*i_uint1,*i_uint2,obj2,&exc);

	if (exc) {
		*o_err = ERR_GDOME;
		return;
	}

	*o_err = ERR_NO_ERROR;
	*o_ret = NullCode;

	/* }}} */

}

		

private void f77xml__t_replaceData(code *o_ret,
				code *i_code1,
				unsigned int *i_uint1,
				unsigned int *i_uint2,
				code *i_code2,
				error *o_err) {

	/* {{{ OK */
	GdomeText *obj1;
	GdomeDOMString *obj2;
	GdomeException exc;

	Cache *cache = f77xml_Cache_instance();

	*o_err = ERR_NEVER_RETURN_THIS;
	*o_ret = NullCode;

	obj1 = f77xml_Cache_getText(cache, *i_code1, o_err);
	if (obj1 == NULL) return;

	obj2 = f77xml_Cache_getDOMString(cache, *i_code2, o_err);
	if (obj2 == NULL) return;

	gdome_t_replaceData(obj1,*i_uint1,*i_uint2,obj2,&exc);

	if (exc) {
		*o_err = ERR_GDOME;
		return;
	}

	*o_err = ERR_NO_ERROR;
	*o_ret = NullCode;

	/* }}} */

}

		

private void f77xml__cds_replaceData(code *o_ret,
				code *i_code1,
				unsigned int *i_uint1,
				unsigned int *i_uint2,
				code *i_code2,
				error *o_err) {

	/* {{{ OK */
	GdomeCDATASection *obj1;
	GdomeDOMString *obj2;
	GdomeException exc;

	Cache *cache = f77xml_Cache_instance();

	*o_err = ERR_NEVER_RETURN_THIS;
	*o_ret = NullCode;

	obj1 = f77xml_Cache_getCDATASection(cache, *i_code1, o_err);
	if (obj1 == NULL) return;

	obj2 = f77xml_Cache_getDOMString(cache, *i_code2, o_err);
	if (obj2 == NULL) return;

	gdome_cds_replaceData(obj1,*i_uint1,*i_uint2,obj2,&exc);

	if (exc) {
		*o_err = ERR_GDOME;
		return;
	}

	*o_err = ERR_NO_ERROR;
	*o_ret = NullCode;

	/* }}} */

}

		

private void f77xml__cd_replaceData(code *o_ret,
				code *i_code1,
				unsigned int *i_uint1,
				unsigned int *i_uint2,
				code *i_code2,
				error *o_err) {

	/* {{{ OK */
	GdomeCharacterData *obj1;
	GdomeDOMString *obj2;
	GdomeException exc;

	Cache *cache = f77xml_Cache_instance();

	*o_err = ERR_NEVER_RETURN_THIS;
	*o_ret = NullCode;

	obj1 = f77xml_Cache_getCharacterData(cache, *i_code1, o_err);
	if (obj1 == NULL) return;

	obj2 = f77xml_Cache_getDOMString(cache, *i_code2, o_err);
	if (obj2 == NULL) return;

	gdome_cd_replaceData(obj1,*i_uint1,*i_uint2,obj2,&exc);

	if (exc) {
		*o_err = ERR_GDOME;
		return;
	}

	*o_err = ERR_NO_ERROR;
	*o_ret = NullCode;

	/* }}} */

}

		