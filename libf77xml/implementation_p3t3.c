/* Automatically generated by APIGen */
/* Changes will not survive. Modify    */
/* apigen.xml file instead                     */




private void f77xml__str_len( unsigned int *o_ret,
				code *i_code1,
				error *o_err) {
	/* {{{ */
	f77xml__str_length(o_ret,i_code1,o_err);
	/* }}} */
}

					

private void f77xml__str_length(unsigned int *o_ret,
				code *i_code1,
				error *o_err) {

	/* {{{ */
	GdomeDOMString *obj1;
	Cache *cache;

	cache = f77xml_Cache_instance();
	*o_err = ERR_NEVER_RETURN_THIS;

	obj1 = f77xml_Cache_getDOMString(cache, *i_code1, o_err);
	if (obj1 == NULL) return;

	*o_ret = gdome_str_length(obj1);
	*o_err = ERR_NO_ERROR;
	
	/* }}} */

}

					

private void f77xml__nl_length(unsigned int *o_ret,
				code *i_code1,
				error *o_err) {

	/* {{{ */
	GdomeNodeList *obj1;
	GdomeException exc;
	Cache *cache;

	cache = f77xml_Cache_instance();
	*o_err = ERR_NEVER_RETURN_THIS;

	obj1 = f77xml_Cache_getNodeList(cache, *i_code1, o_err);
	if (obj1 == NULL) return;

	*o_ret = gdome_nl_length(obj1, &exc);
	
	if (exc) {
		*o_err = ERR_GDOME;
		return;
	}

	*o_err = ERR_NO_ERROR;
	
	/* }}} */

}

		

private void f77xml__nnm_length(unsigned int *o_ret,
				code *i_code1,
				error *o_err) {

	/* {{{ */
	GdomeNamedNodeMap *obj1;
	GdomeException exc;
	Cache *cache;

	cache = f77xml_Cache_instance();
	*o_err = ERR_NEVER_RETURN_THIS;

	obj1 = f77xml_Cache_getNamedNodeMap(cache, *i_code1, o_err);
	if (obj1 == NULL) return;

	*o_ret = gdome_nnm_length(obj1, &exc);
	
	if (exc) {
		*o_err = ERR_GDOME;
		return;
	}

	*o_err = ERR_NO_ERROR;
	
	/* }}} */

}

		

private void f77xml__n_nodeType(unsigned int *o_ret,
				code *i_code1,
				error *o_err) {

	/* {{{ */
	GdomeNode *obj1;
	GdomeException exc;
	Cache *cache;

	cache = f77xml_Cache_instance();
	*o_err = ERR_NEVER_RETURN_THIS;

	obj1 = f77xml_Cache_getNode(cache, *i_code1, o_err);
	if (obj1 == NULL) return;

	*o_ret = gdome_n_nodeType(obj1, &exc);
	
	if (exc) {
		*o_err = ERR_GDOME;
		return;
	}

	*o_err = ERR_NO_ERROR;
	
	/* }}} */

}

		

private void f77xml__er_nodeType(unsigned int *o_ret,
				code *i_code1,
				error *o_err) {

	/* {{{ */
	GdomeEntityReference *obj1;
	GdomeException exc;
	Cache *cache;

	cache = f77xml_Cache_instance();
	*o_err = ERR_NEVER_RETURN_THIS;

	obj1 = f77xml_Cache_getEntityReference(cache, *i_code1, o_err);
	if (obj1 == NULL) return;

	*o_ret = gdome_er_nodeType(obj1, &exc);
	
	if (exc) {
		*o_err = ERR_GDOME;
		return;
	}

	*o_err = ERR_NO_ERROR;
	
	/* }}} */

}

		

private void f77xml__dt_nodeType(unsigned int *o_ret,
				code *i_code1,
				error *o_err) {

	/* {{{ */
	GdomeDocumentType *obj1;
	GdomeException exc;
	Cache *cache;

	cache = f77xml_Cache_instance();
	*o_err = ERR_NEVER_RETURN_THIS;

	obj1 = f77xml_Cache_getDocumentType(cache, *i_code1, o_err);
	if (obj1 == NULL) return;

	*o_ret = gdome_dt_nodeType(obj1, &exc);
	
	if (exc) {
		*o_err = ERR_GDOME;
		return;
	}

	*o_err = ERR_NO_ERROR;
	
	/* }}} */

}

		

private void f77xml__df_nodeType(unsigned int *o_ret,
				code *i_code1,
				error *o_err) {

	/* {{{ */
	GdomeDocumentFragment *obj1;
	GdomeException exc;
	Cache *cache;

	cache = f77xml_Cache_instance();
	*o_err = ERR_NEVER_RETURN_THIS;

	obj1 = f77xml_Cache_getDocumentFragment(cache, *i_code1, o_err);
	if (obj1 == NULL) return;

	*o_ret = gdome_df_nodeType(obj1, &exc);
	
	if (exc) {
		*o_err = ERR_GDOME;
		return;
	}

	*o_err = ERR_NO_ERROR;
	
	/* }}} */

}

		

private void f77xml__pi_nodeType(unsigned int *o_ret,
				code *i_code1,
				error *o_err) {

	/* {{{ */
	GdomeProcessingInstruction *obj1;
	GdomeException exc;
	Cache *cache;

	cache = f77xml_Cache_instance();
	*o_err = ERR_NEVER_RETURN_THIS;

	obj1 = f77xml_Cache_getProcessingInstruction(cache, *i_code1, o_err);
	if (obj1 == NULL) return;

	*o_ret = gdome_pi_nodeType(obj1, &exc);
	
	if (exc) {
		*o_err = ERR_GDOME;
		return;
	}

	*o_err = ERR_NO_ERROR;
	
	/* }}} */

}

		

private void f77xml__cd_nodeType(unsigned int *o_ret,
				code *i_code1,
				error *o_err) {

	/* {{{ */
	GdomeCharacterData *obj1;
	GdomeException exc;
	Cache *cache;

	cache = f77xml_Cache_instance();
	*o_err = ERR_NEVER_RETURN_THIS;

	obj1 = f77xml_Cache_getCharacterData(cache, *i_code1, o_err);
	if (obj1 == NULL) return;

	*o_ret = gdome_cd_nodeType(obj1, &exc);
	
	if (exc) {
		*o_err = ERR_GDOME;
		return;
	}

	*o_err = ERR_NO_ERROR;
	
	/* }}} */

}

		

private void f77xml__not_nodeType(unsigned int *o_ret,
				code *i_code1,
				error *o_err) {

	/* {{{ */
	GdomeNotation *obj1;
	GdomeException exc;
	Cache *cache;

	cache = f77xml_Cache_instance();
	*o_err = ERR_NEVER_RETURN_THIS;

	obj1 = f77xml_Cache_getNotation(cache, *i_code1, o_err);
	if (obj1 == NULL) return;

	*o_ret = gdome_not_nodeType(obj1, &exc);
	
	if (exc) {
		*o_err = ERR_GDOME;
		return;
	}

	*o_err = ERR_NO_ERROR;
	
	/* }}} */

}

		

private void f77xml__cds_nodeType(unsigned int *o_ret,
				code *i_code1,
				error *o_err) {

	/* {{{ */
	GdomeCDATASection *obj1;
	GdomeException exc;
	Cache *cache;

	cache = f77xml_Cache_instance();
	*o_err = ERR_NEVER_RETURN_THIS;

	obj1 = f77xml_Cache_getCDATASection(cache, *i_code1, o_err);
	if (obj1 == NULL) return;

	*o_ret = gdome_cds_nodeType(obj1, &exc);
	
	if (exc) {
		*o_err = ERR_GDOME;
		return;
	}

	*o_err = ERR_NO_ERROR;
	
	/* }}} */

}

		

private void f77xml__a_nodeType(unsigned int *o_ret,
				code *i_code1,
				error *o_err) {

	/* {{{ */
	GdomeAttr *obj1;
	GdomeException exc;
	Cache *cache;

	cache = f77xml_Cache_instance();
	*o_err = ERR_NEVER_RETURN_THIS;

	obj1 = f77xml_Cache_getAttr(cache, *i_code1, o_err);
	if (obj1 == NULL) return;

	*o_ret = gdome_a_nodeType(obj1, &exc);
	
	if (exc) {
		*o_err = ERR_GDOME;
		return;
	}

	*o_err = ERR_NO_ERROR;
	
	/* }}} */

}

		

private void f77xml__t_nodeType(unsigned int *o_ret,
				code *i_code1,
				error *o_err) {

	/* {{{ */
	GdomeText *obj1;
	GdomeException exc;
	Cache *cache;

	cache = f77xml_Cache_instance();
	*o_err = ERR_NEVER_RETURN_THIS;

	obj1 = f77xml_Cache_getText(cache, *i_code1, o_err);
	if (obj1 == NULL) return;

	*o_ret = gdome_t_nodeType(obj1, &exc);
	
	if (exc) {
		*o_err = ERR_GDOME;
		return;
	}

	*o_err = ERR_NO_ERROR;
	
	/* }}} */

}

		

private void f77xml__el_nodeType(unsigned int *o_ret,
				code *i_code1,
				error *o_err) {

	/* {{{ */
	GdomeElement *obj1;
	GdomeException exc;
	Cache *cache;

	cache = f77xml_Cache_instance();
	*o_err = ERR_NEVER_RETURN_THIS;

	obj1 = f77xml_Cache_getElement(cache, *i_code1, o_err);
	if (obj1 == NULL) return;

	*o_ret = gdome_el_nodeType(obj1, &exc);
	
	if (exc) {
		*o_err = ERR_GDOME;
		return;
	}

	*o_err = ERR_NO_ERROR;
	
	/* }}} */

}

		

private void f77xml__c_nodeType(unsigned int *o_ret,
				code *i_code1,
				error *o_err) {

	/* {{{ */
	GdomeComment *obj1;
	GdomeException exc;
	Cache *cache;

	cache = f77xml_Cache_instance();
	*o_err = ERR_NEVER_RETURN_THIS;

	obj1 = f77xml_Cache_getComment(cache, *i_code1, o_err);
	if (obj1 == NULL) return;

	*o_ret = gdome_c_nodeType(obj1, &exc);
	
	if (exc) {
		*o_err = ERR_GDOME;
		return;
	}

	*o_err = ERR_NO_ERROR;
	
	/* }}} */

}

		

private void f77xml__ent_nodeType(unsigned int *o_ret,
				code *i_code1,
				error *o_err) {

	/* {{{ */
	GdomeEntity *obj1;
	GdomeException exc;
	Cache *cache;

	cache = f77xml_Cache_instance();
	*o_err = ERR_NEVER_RETURN_THIS;

	obj1 = f77xml_Cache_getEntity(cache, *i_code1, o_err);
	if (obj1 == NULL) return;

	*o_ret = gdome_ent_nodeType(obj1, &exc);
	
	if (exc) {
		*o_err = ERR_GDOME;
		return;
	}

	*o_err = ERR_NO_ERROR;
	
	/* }}} */

}

		

private void f77xml__doc_nodeType(unsigned int *o_ret,
				code *i_code1,
				error *o_err) {

	/* {{{ */
	GdomeDocument *obj1;
	GdomeException exc;
	Cache *cache;

	cache = f77xml_Cache_instance();
	*o_err = ERR_NEVER_RETURN_THIS;

	obj1 = f77xml_Cache_getDocument(cache, *i_code1, o_err);
	if (obj1 == NULL) return;

	*o_ret = gdome_doc_nodeType(obj1, &exc);
	
	if (exc) {
		*o_err = ERR_GDOME;
		return;
	}

	*o_err = ERR_NO_ERROR;
	
	/* }}} */

}

		

private void f77xml__c_length(unsigned int *o_ret,
				code *i_code1,
				error *o_err) {

	/* {{{ */
	GdomeComment *obj1;
	GdomeException exc;
	Cache *cache;

	cache = f77xml_Cache_instance();
	*o_err = ERR_NEVER_RETURN_THIS;

	obj1 = f77xml_Cache_getComment(cache, *i_code1, o_err);
	if (obj1 == NULL) return;

	*o_ret = gdome_c_length(obj1, &exc);
	
	if (exc) {
		*o_err = ERR_GDOME;
		return;
	}

	*o_err = ERR_NO_ERROR;
	
	/* }}} */

}

		

private void f77xml__t_length(unsigned int *o_ret,
				code *i_code1,
				error *o_err) {

	/* {{{ */
	GdomeText *obj1;
	GdomeException exc;
	Cache *cache;

	cache = f77xml_Cache_instance();
	*o_err = ERR_NEVER_RETURN_THIS;

	obj1 = f77xml_Cache_getText(cache, *i_code1, o_err);
	if (obj1 == NULL) return;

	*o_ret = gdome_t_length(obj1, &exc);
	
	if (exc) {
		*o_err = ERR_GDOME;
		return;
	}

	*o_err = ERR_NO_ERROR;
	
	/* }}} */

}

		

private void f77xml__cds_length(unsigned int *o_ret,
				code *i_code1,
				error *o_err) {

	/* {{{ */
	GdomeCDATASection *obj1;
	GdomeException exc;
	Cache *cache;

	cache = f77xml_Cache_instance();
	*o_err = ERR_NEVER_RETURN_THIS;

	obj1 = f77xml_Cache_getCDATASection(cache, *i_code1, o_err);
	if (obj1 == NULL) return;

	*o_ret = gdome_cds_length(obj1, &exc);
	
	if (exc) {
		*o_err = ERR_GDOME;
		return;
	}

	*o_err = ERR_NO_ERROR;
	
	/* }}} */

}

		

private void f77xml__cd_length(unsigned int *o_ret,
				code *i_code1,
				error *o_err) {

	/* {{{ */
	GdomeCharacterData *obj1;
	GdomeException exc;
	Cache *cache;

	cache = f77xml_Cache_instance();
	*o_err = ERR_NEVER_RETURN_THIS;

	obj1 = f77xml_Cache_getCharacterData(cache, *i_code1, o_err);
	if (obj1 == NULL) return;

	*o_ret = gdome_cd_length(obj1, &exc);
	
	if (exc) {
		*o_err = ERR_GDOME;
		return;
	}

	*o_err = ERR_NO_ERROR;
	
	/* }}} */

}

		

private void f77xml__xpresult_resultType(unsigned int *o_ret,
				code *i_code1,
				error *o_err) {

	/* {{{ */
	GdomeXPathResult *obj1;
	GdomeException exc;
	Cache *cache;

	cache = f77xml_Cache_instance();
	*o_err = ERR_NEVER_RETURN_THIS;

	obj1 = f77xml_Cache_getXPathResult(cache, *i_code1, o_err);
	if (obj1 == NULL) return;

	*o_ret = gdome_xpresult_resultType(obj1, &exc);
	
	if (exc) {
		*o_err = ERR_GDOME;
		return;
	}

	*o_err = ERR_NO_ERROR;
	
	/* }}} */

}

		