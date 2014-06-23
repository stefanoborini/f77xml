/* Automatically generated by APIGen */
/* Changes will not survive. Modify    */
/* apigen.xml file instead                     */




static void f77xml__nnm_getNamedItemNS(code *o_ret,
			code *i_code1,
			code *i_code2,
			code *i_code3,
			error *o_err) { 
	/* {{{ OK */
	GdomeNode *ret;
	GdomeNamedNodeMap *obj1;
	GdomeDOMString *obj2;
	GdomeDOMString *obj3;
	GdomeException exc;

	Cache *cache = f77xml_Cache_instance();

	*o_err = ERR_NEVER_RETURN_THIS;
	*o_ret = NullCode;
	
	obj1 = f77xml_Cache_getNamedNodeMap(cache, *i_code1, o_err);
	if (obj1 == NULL) return;
	
	obj2 = f77xml_Cache_getDOMString(cache, *i_code2, o_err);
	if (obj2 == NULL) return;

	obj3 = f77xml_Cache_getDOMString(cache, *i_code3, o_err);
	if (obj3 == NULL) return;

	ret = gdome_nnm_getNamedItemNS(obj1,obj2,obj3,&exc);
	
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

		

static void f77xml__nnm_removeNamedItemNS(code *o_ret,
			code *i_code1,
			code *i_code2,
			code *i_code3,
			error *o_err) { 
	/* {{{ OK */
	GdomeNode *ret;
	GdomeNamedNodeMap *obj1;
	GdomeDOMString *obj2;
	GdomeDOMString *obj3;
	GdomeException exc;

	Cache *cache = f77xml_Cache_instance();

	*o_err = ERR_NEVER_RETURN_THIS;
	*o_ret = NullCode;
	
	obj1 = f77xml_Cache_getNamedNodeMap(cache, *i_code1, o_err);
	if (obj1 == NULL) return;
	
	obj2 = f77xml_Cache_getDOMString(cache, *i_code2, o_err);
	if (obj2 == NULL) return;

	obj3 = f77xml_Cache_getDOMString(cache, *i_code3, o_err);
	if (obj3 == NULL) return;

	ret = gdome_nnm_removeNamedItemNS(obj1,obj2,obj3,&exc);
	
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

		

static void f77xml__el_setAttribute(code *o_ret,
				code *i_code1,
				code *i_code2,
				code *i_code3,
				error *o_err) { 
	/* {{{ OK */
	GdomeElement *obj1;
	GdomeDOMString *obj2;
	GdomeDOMString *obj3;
	GdomeException exc;

	Cache *cache = f77xml_Cache_instance();

	*o_err = ERR_NEVER_RETURN_THIS;
	*o_ret = NullCode;
	
	obj1 = f77xml_Cache_getElement(cache, *i_code1, o_err);
	if (obj1 == NULL) return;
	
	obj2 = f77xml_Cache_getDOMString(cache, *i_code2, o_err);
	if (obj2 == NULL) return;

	obj3 = f77xml_Cache_getDOMString(cache, *i_code3, o_err);
	if (obj3 == NULL) return;

	gdome_el_setAttribute(obj1,obj2,obj3,&exc);
	
	if (exc) {
		*o_err = ERR_GDOME;
		return;
	}
	
	*o_err = ERR_NO_ERROR;

	/* }}} */

}

		

static void f77xml__doc_createElementNS(code *o_ret,
			code *i_code1,
			code *i_code2,
			code *i_code3,
			error *o_err) { 
	/* {{{ OK */
	GdomeElement *ret;
	GdomeDocument *obj1;
	GdomeDOMString *obj2;
	GdomeDOMString *obj3;
	GdomeException exc;

	Cache *cache = f77xml_Cache_instance();

	*o_err = ERR_NEVER_RETURN_THIS;
	*o_ret = NullCode;
	
	obj1 = f77xml_Cache_getDocument(cache, *i_code1, o_err);
	if (obj1 == NULL) return;
	
	obj2 = f77xml_Cache_getDOMString(cache, *i_code2, o_err);
	if (obj2 == NULL) return;

	obj3 = f77xml_Cache_getDOMString(cache, *i_code3, o_err);
	if (obj3 == NULL) return;

	ret = gdome_doc_createElementNS(obj1,obj2,obj3,&exc);
	
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

	*o_ret = f77xml_Cache_addElement(cache, (gpointer)ret);

	/* }}} */

}

		

static void f77xml__doc_createAttributeNS(code *o_ret,
			code *i_code1,
			code *i_code2,
			code *i_code3,
			error *o_err) { 
	/* {{{ OK */
	GdomeAttr *ret;
	GdomeDocument *obj1;
	GdomeDOMString *obj2;
	GdomeDOMString *obj3;
	GdomeException exc;

	Cache *cache = f77xml_Cache_instance();

	*o_err = ERR_NEVER_RETURN_THIS;
	*o_ret = NullCode;
	
	obj1 = f77xml_Cache_getDocument(cache, *i_code1, o_err);
	if (obj1 == NULL) return;
	
	obj2 = f77xml_Cache_getDOMString(cache, *i_code2, o_err);
	if (obj2 == NULL) return;

	obj3 = f77xml_Cache_getDOMString(cache, *i_code3, o_err);
	if (obj3 == NULL) return;

	ret = gdome_doc_createAttributeNS(obj1,obj2,obj3,&exc);
	
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

	*o_ret = f77xml_Cache_addAttr(cache, (gpointer)ret);

	/* }}} */

}

		

static void f77xml__doc_getElementsByTagNameNS(code *o_ret,
			code *i_code1,
			code *i_code2,
			code *i_code3,
			error *o_err) { 
	/* {{{ OK */
	GdomeNodeList *ret;
	GdomeDocument *obj1;
	GdomeDOMString *obj2;
	GdomeDOMString *obj3;
	GdomeException exc;

	Cache *cache = f77xml_Cache_instance();

	*o_err = ERR_NEVER_RETURN_THIS;
	*o_ret = NullCode;
	
	obj1 = f77xml_Cache_getDocument(cache, *i_code1, o_err);
	if (obj1 == NULL) return;
	
	obj2 = f77xml_Cache_getDOMString(cache, *i_code2, o_err);
	if (obj2 == NULL) return;

	obj3 = f77xml_Cache_getDOMString(cache, *i_code3, o_err);
	if (obj3 == NULL) return;

	ret = gdome_doc_getElementsByTagNameNS(obj1,obj2,obj3,&exc);
	
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

	*o_ret = f77xml_Cache_addNodeList(cache, (gpointer)ret);

	/* }}} */

}

		

static void f77xml__el_getAttributeNS(code *o_ret,
			code *i_code1,
			code *i_code2,
			code *i_code3,
			error *o_err) { 
	/* {{{ OK */
	GdomeDOMString *ret;
	GdomeElement *obj1;
	GdomeDOMString *obj2;
	GdomeDOMString *obj3;
	GdomeException exc;

	Cache *cache = f77xml_Cache_instance();

	*o_err = ERR_NEVER_RETURN_THIS;
	*o_ret = NullCode;
	
	obj1 = f77xml_Cache_getElement(cache, *i_code1, o_err);
	if (obj1 == NULL) return;
	
	obj2 = f77xml_Cache_getDOMString(cache, *i_code2, o_err);
	if (obj2 == NULL) return;

	obj3 = f77xml_Cache_getDOMString(cache, *i_code3, o_err);
	if (obj3 == NULL) return;

	ret = gdome_el_getAttributeNS(obj1,obj2,obj3,&exc);
	
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

	*o_ret = f77xml_Cache_addDOMString(cache, (gpointer)ret);

	/* }}} */

}

		

static void f77xml__el_getAttributeNodeNS(code *o_ret,
			code *i_code1,
			code *i_code2,
			code *i_code3,
			error *o_err) { 
	/* {{{ OK */
	GdomeAttr *ret;
	GdomeElement *obj1;
	GdomeDOMString *obj2;
	GdomeDOMString *obj3;
	GdomeException exc;

	Cache *cache = f77xml_Cache_instance();

	*o_err = ERR_NEVER_RETURN_THIS;
	*o_ret = NullCode;
	
	obj1 = f77xml_Cache_getElement(cache, *i_code1, o_err);
	if (obj1 == NULL) return;
	
	obj2 = f77xml_Cache_getDOMString(cache, *i_code2, o_err);
	if (obj2 == NULL) return;

	obj3 = f77xml_Cache_getDOMString(cache, *i_code3, o_err);
	if (obj3 == NULL) return;

	ret = gdome_el_getAttributeNodeNS(obj1,obj2,obj3,&exc);
	
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

	*o_ret = f77xml_Cache_addAttr(cache, (gpointer)ret);

	/* }}} */

}

		

static void f77xml__el_getElementsByTagNameNS(code *o_ret,
			code *i_code1,
			code *i_code2,
			code *i_code3,
			error *o_err) { 
	/* {{{ OK */
	GdomeNodeList *ret;
	GdomeElement *obj1;
	GdomeDOMString *obj2;
	GdomeDOMString *obj3;
	GdomeException exc;

	Cache *cache = f77xml_Cache_instance();

	*o_err = ERR_NEVER_RETURN_THIS;
	*o_ret = NullCode;
	
	obj1 = f77xml_Cache_getElement(cache, *i_code1, o_err);
	if (obj1 == NULL) return;
	
	obj2 = f77xml_Cache_getDOMString(cache, *i_code2, o_err);
	if (obj2 == NULL) return;

	obj3 = f77xml_Cache_getDOMString(cache, *i_code3, o_err);
	if (obj3 == NULL) return;

	ret = gdome_el_getElementsByTagNameNS(obj1,obj2,obj3,&exc);
	
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

	*o_ret = f77xml_Cache_addNodeList(cache, (gpointer)ret);

	/* }}} */

}

		

static void f77xml__el_insertBefore(code *o_ret,
			code *i_code1,
			code *i_code2,
			code *i_code3,
			error *o_err) { 
	/* {{{ OK */
	GdomeNode *ret;
	GdomeElement *obj1;
	GdomeNode *obj2;
	GdomeNode *obj3;
	GdomeException exc;

	Cache *cache = f77xml_Cache_instance();

	*o_err = ERR_NEVER_RETURN_THIS;
	*o_ret = NullCode;
	
	obj1 = f77xml_Cache_getElement(cache, *i_code1, o_err);
	if (obj1 == NULL) return;
	
	obj2 = f77xml_Cache_getNode(cache, *i_code2, o_err);
	if (obj2 == NULL) return;

	obj3 = f77xml_Cache_getNode(cache, *i_code3, o_err);
	if (obj3 == NULL) return;

	ret = gdome_el_insertBefore(obj1,obj2,obj3,&exc);
	
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

		

static void f77xml__er_insertBefore(code *o_ret,
			code *i_code1,
			code *i_code2,
			code *i_code3,
			error *o_err) { 
	/* {{{ OK */
	GdomeNode *ret;
	GdomeEntityReference *obj1;
	GdomeNode *obj2;
	GdomeNode *obj3;
	GdomeException exc;

	Cache *cache = f77xml_Cache_instance();

	*o_err = ERR_NEVER_RETURN_THIS;
	*o_ret = NullCode;
	
	obj1 = f77xml_Cache_getEntityReference(cache, *i_code1, o_err);
	if (obj1 == NULL) return;
	
	obj2 = f77xml_Cache_getNode(cache, *i_code2, o_err);
	if (obj2 == NULL) return;

	obj3 = f77xml_Cache_getNode(cache, *i_code3, o_err);
	if (obj3 == NULL) return;

	ret = gdome_er_insertBefore(obj1,obj2,obj3,&exc);
	
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

		

static void f77xml__dt_insertBefore(code *o_ret,
			code *i_code1,
			code *i_code2,
			code *i_code3,
			error *o_err) { 
	/* {{{ OK */
	GdomeNode *ret;
	GdomeDocumentType *obj1;
	GdomeNode *obj2;
	GdomeNode *obj3;
	GdomeException exc;

	Cache *cache = f77xml_Cache_instance();

	*o_err = ERR_NEVER_RETURN_THIS;
	*o_ret = NullCode;
	
	obj1 = f77xml_Cache_getDocumentType(cache, *i_code1, o_err);
	if (obj1 == NULL) return;
	
	obj2 = f77xml_Cache_getNode(cache, *i_code2, o_err);
	if (obj2 == NULL) return;

	obj3 = f77xml_Cache_getNode(cache, *i_code3, o_err);
	if (obj3 == NULL) return;

	ret = gdome_dt_insertBefore(obj1,obj2,obj3,&exc);
	
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

		

static void f77xml__df_insertBefore(code *o_ret,
			code *i_code1,
			code *i_code2,
			code *i_code3,
			error *o_err) { 
	/* {{{ OK */
	GdomeNode *ret;
	GdomeDocumentFragment *obj1;
	GdomeNode *obj2;
	GdomeNode *obj3;
	GdomeException exc;

	Cache *cache = f77xml_Cache_instance();

	*o_err = ERR_NEVER_RETURN_THIS;
	*o_ret = NullCode;
	
	obj1 = f77xml_Cache_getDocumentFragment(cache, *i_code1, o_err);
	if (obj1 == NULL) return;
	
	obj2 = f77xml_Cache_getNode(cache, *i_code2, o_err);
	if (obj2 == NULL) return;

	obj3 = f77xml_Cache_getNode(cache, *i_code3, o_err);
	if (obj3 == NULL) return;

	ret = gdome_df_insertBefore(obj1,obj2,obj3,&exc);
	
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

		

static void f77xml__pi_insertBefore(code *o_ret,
			code *i_code1,
			code *i_code2,
			code *i_code3,
			error *o_err) { 
	/* {{{ OK */
	GdomeNode *ret;
	GdomeProcessingInstruction *obj1;
	GdomeNode *obj2;
	GdomeNode *obj3;
	GdomeException exc;

	Cache *cache = f77xml_Cache_instance();

	*o_err = ERR_NEVER_RETURN_THIS;
	*o_ret = NullCode;
	
	obj1 = f77xml_Cache_getProcessingInstruction(cache, *i_code1, o_err);
	if (obj1 == NULL) return;
	
	obj2 = f77xml_Cache_getNode(cache, *i_code2, o_err);
	if (obj2 == NULL) return;

	obj3 = f77xml_Cache_getNode(cache, *i_code3, o_err);
	if (obj3 == NULL) return;

	ret = gdome_pi_insertBefore(obj1,obj2,obj3,&exc);
	
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

		

static void f77xml__cd_insertBefore(code *o_ret,
			code *i_code1,
			code *i_code2,
			code *i_code3,
			error *o_err) { 
	/* {{{ OK */
	GdomeNode *ret;
	GdomeCharacterData *obj1;
	GdomeNode *obj2;
	GdomeNode *obj3;
	GdomeException exc;

	Cache *cache = f77xml_Cache_instance();

	*o_err = ERR_NEVER_RETURN_THIS;
	*o_ret = NullCode;
	
	obj1 = f77xml_Cache_getCharacterData(cache, *i_code1, o_err);
	if (obj1 == NULL) return;
	
	obj2 = f77xml_Cache_getNode(cache, *i_code2, o_err);
	if (obj2 == NULL) return;

	obj3 = f77xml_Cache_getNode(cache, *i_code3, o_err);
	if (obj3 == NULL) return;

	ret = gdome_cd_insertBefore(obj1,obj2,obj3,&exc);
	
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

		

static void f77xml__not_insertBefore(code *o_ret,
			code *i_code1,
			code *i_code2,
			code *i_code3,
			error *o_err) { 
	/* {{{ OK */
	GdomeNode *ret;
	GdomeNotation *obj1;
	GdomeNode *obj2;
	GdomeNode *obj3;
	GdomeException exc;

	Cache *cache = f77xml_Cache_instance();

	*o_err = ERR_NEVER_RETURN_THIS;
	*o_ret = NullCode;
	
	obj1 = f77xml_Cache_getNotation(cache, *i_code1, o_err);
	if (obj1 == NULL) return;
	
	obj2 = f77xml_Cache_getNode(cache, *i_code2, o_err);
	if (obj2 == NULL) return;

	obj3 = f77xml_Cache_getNode(cache, *i_code3, o_err);
	if (obj3 == NULL) return;

	ret = gdome_not_insertBefore(obj1,obj2,obj3,&exc);
	
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

		

static void f77xml__el_replaceChild(code *o_ret,
			code *i_code1,
			code *i_code2,
			code *i_code3,
			error *o_err) { 
	/* {{{ OK */
	GdomeNode *ret;
	GdomeElement *obj1;
	GdomeNode *obj2;
	GdomeNode *obj3;
	GdomeException exc;

	Cache *cache = f77xml_Cache_instance();

	*o_err = ERR_NEVER_RETURN_THIS;
	*o_ret = NullCode;
	
	obj1 = f77xml_Cache_getElement(cache, *i_code1, o_err);
	if (obj1 == NULL) return;
	
	obj2 = f77xml_Cache_getNode(cache, *i_code2, o_err);
	if (obj2 == NULL) return;

	obj3 = f77xml_Cache_getNode(cache, *i_code3, o_err);
	if (obj3 == NULL) return;

	ret = gdome_el_replaceChild(obj1,obj2,obj3,&exc);
	
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

		

static void f77xml__er_replaceChild(code *o_ret,
			code *i_code1,
			code *i_code2,
			code *i_code3,
			error *o_err) { 
	/* {{{ OK */
	GdomeNode *ret;
	GdomeEntityReference *obj1;
	GdomeNode *obj2;
	GdomeNode *obj3;
	GdomeException exc;

	Cache *cache = f77xml_Cache_instance();

	*o_err = ERR_NEVER_RETURN_THIS;
	*o_ret = NullCode;
	
	obj1 = f77xml_Cache_getEntityReference(cache, *i_code1, o_err);
	if (obj1 == NULL) return;
	
	obj2 = f77xml_Cache_getNode(cache, *i_code2, o_err);
	if (obj2 == NULL) return;

	obj3 = f77xml_Cache_getNode(cache, *i_code3, o_err);
	if (obj3 == NULL) return;

	ret = gdome_er_replaceChild(obj1,obj2,obj3,&exc);
	
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

		

static void f77xml__dt_replaceChild(code *o_ret,
			code *i_code1,
			code *i_code2,
			code *i_code3,
			error *o_err) { 
	/* {{{ OK */
	GdomeNode *ret;
	GdomeDocumentType *obj1;
	GdomeNode *obj2;
	GdomeNode *obj3;
	GdomeException exc;

	Cache *cache = f77xml_Cache_instance();

	*o_err = ERR_NEVER_RETURN_THIS;
	*o_ret = NullCode;
	
	obj1 = f77xml_Cache_getDocumentType(cache, *i_code1, o_err);
	if (obj1 == NULL) return;
	
	obj2 = f77xml_Cache_getNode(cache, *i_code2, o_err);
	if (obj2 == NULL) return;

	obj3 = f77xml_Cache_getNode(cache, *i_code3, o_err);
	if (obj3 == NULL) return;

	ret = gdome_dt_replaceChild(obj1,obj2,obj3,&exc);
	
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

		

static void f77xml__df_replaceChild(code *o_ret,
			code *i_code1,
			code *i_code2,
			code *i_code3,
			error *o_err) { 
	/* {{{ OK */
	GdomeNode *ret;
	GdomeDocumentFragment *obj1;
	GdomeNode *obj2;
	GdomeNode *obj3;
	GdomeException exc;

	Cache *cache = f77xml_Cache_instance();

	*o_err = ERR_NEVER_RETURN_THIS;
	*o_ret = NullCode;
	
	obj1 = f77xml_Cache_getDocumentFragment(cache, *i_code1, o_err);
	if (obj1 == NULL) return;
	
	obj2 = f77xml_Cache_getNode(cache, *i_code2, o_err);
	if (obj2 == NULL) return;

	obj3 = f77xml_Cache_getNode(cache, *i_code3, o_err);
	if (obj3 == NULL) return;

	ret = gdome_df_replaceChild(obj1,obj2,obj3,&exc);
	
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

		

static void f77xml__pi_replaceChild(code *o_ret,
			code *i_code1,
			code *i_code2,
			code *i_code3,
			error *o_err) { 
	/* {{{ OK */
	GdomeNode *ret;
	GdomeProcessingInstruction *obj1;
	GdomeNode *obj2;
	GdomeNode *obj3;
	GdomeException exc;

	Cache *cache = f77xml_Cache_instance();

	*o_err = ERR_NEVER_RETURN_THIS;
	*o_ret = NullCode;
	
	obj1 = f77xml_Cache_getProcessingInstruction(cache, *i_code1, o_err);
	if (obj1 == NULL) return;
	
	obj2 = f77xml_Cache_getNode(cache, *i_code2, o_err);
	if (obj2 == NULL) return;

	obj3 = f77xml_Cache_getNode(cache, *i_code3, o_err);
	if (obj3 == NULL) return;

	ret = gdome_pi_replaceChild(obj1,obj2,obj3,&exc);
	
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

		

static void f77xml__cd_replaceChild(code *o_ret,
			code *i_code1,
			code *i_code2,
			code *i_code3,
			error *o_err) { 
	/* {{{ OK */
	GdomeNode *ret;
	GdomeCharacterData *obj1;
	GdomeNode *obj2;
	GdomeNode *obj3;
	GdomeException exc;

	Cache *cache = f77xml_Cache_instance();

	*o_err = ERR_NEVER_RETURN_THIS;
	*o_ret = NullCode;
	
	obj1 = f77xml_Cache_getCharacterData(cache, *i_code1, o_err);
	if (obj1 == NULL) return;
	
	obj2 = f77xml_Cache_getNode(cache, *i_code2, o_err);
	if (obj2 == NULL) return;

	obj3 = f77xml_Cache_getNode(cache, *i_code3, o_err);
	if (obj3 == NULL) return;

	ret = gdome_cd_replaceChild(obj1,obj2,obj3,&exc);
	
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

		

static void f77xml__not_replaceChild(code *o_ret,
			code *i_code1,
			code *i_code2,
			code *i_code3,
			error *o_err) { 
	/* {{{ OK */
	GdomeNode *ret;
	GdomeNotation *obj1;
	GdomeNode *obj2;
	GdomeNode *obj3;
	GdomeException exc;

	Cache *cache = f77xml_Cache_instance();

	*o_err = ERR_NEVER_RETURN_THIS;
	*o_ret = NullCode;
	
	obj1 = f77xml_Cache_getNotation(cache, *i_code1, o_err);
	if (obj1 == NULL) return;
	
	obj2 = f77xml_Cache_getNode(cache, *i_code2, o_err);
	if (obj2 == NULL) return;

	obj3 = f77xml_Cache_getNode(cache, *i_code3, o_err);
	if (obj3 == NULL) return;

	ret = gdome_not_replaceChild(obj1,obj2,obj3,&exc);
	
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

		

static void f77xml__cds_insertBefore(code *o_ret,
			code *i_code1,
			code *i_code2,
			code *i_code3,
			error *o_err) { 
	/* {{{ OK */
	GdomeNode *ret;
	GdomeCDATASection *obj1;
	GdomeNode *obj2;
	GdomeNode *obj3;
	GdomeException exc;

	Cache *cache = f77xml_Cache_instance();

	*o_err = ERR_NEVER_RETURN_THIS;
	*o_ret = NullCode;
	
	obj1 = f77xml_Cache_getCDATASection(cache, *i_code1, o_err);
	if (obj1 == NULL) return;
	
	obj2 = f77xml_Cache_getNode(cache, *i_code2, o_err);
	if (obj2 == NULL) return;

	obj3 = f77xml_Cache_getNode(cache, *i_code3, o_err);
	if (obj3 == NULL) return;

	ret = gdome_cds_insertBefore(obj1,obj2,obj3,&exc);
	
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

		

static void f77xml__cds_replaceChild(code *o_ret,
			code *i_code1,
			code *i_code2,
			code *i_code3,
			error *o_err) { 
	/* {{{ OK */
	GdomeNode *ret;
	GdomeCDATASection *obj1;
	GdomeNode *obj2;
	GdomeNode *obj3;
	GdomeException exc;

	Cache *cache = f77xml_Cache_instance();

	*o_err = ERR_NEVER_RETURN_THIS;
	*o_ret = NullCode;
	
	obj1 = f77xml_Cache_getCDATASection(cache, *i_code1, o_err);
	if (obj1 == NULL) return;
	
	obj2 = f77xml_Cache_getNode(cache, *i_code2, o_err);
	if (obj2 == NULL) return;

	obj3 = f77xml_Cache_getNode(cache, *i_code3, o_err);
	if (obj3 == NULL) return;

	ret = gdome_cds_replaceChild(obj1,obj2,obj3,&exc);
	
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

		

static void f77xml__t_insertBefore(code *o_ret,
			code *i_code1,
			code *i_code2,
			code *i_code3,
			error *o_err) { 
	/* {{{ OK */
	GdomeNode *ret;
	GdomeText *obj1;
	GdomeNode *obj2;
	GdomeNode *obj3;
	GdomeException exc;

	Cache *cache = f77xml_Cache_instance();

	*o_err = ERR_NEVER_RETURN_THIS;
	*o_ret = NullCode;
	
	obj1 = f77xml_Cache_getText(cache, *i_code1, o_err);
	if (obj1 == NULL) return;
	
	obj2 = f77xml_Cache_getNode(cache, *i_code2, o_err);
	if (obj2 == NULL) return;

	obj3 = f77xml_Cache_getNode(cache, *i_code3, o_err);
	if (obj3 == NULL) return;

	ret = gdome_t_insertBefore(obj1,obj2,obj3,&exc);
	
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

		

static void f77xml__t_replaceChild(code *o_ret,
			code *i_code1,
			code *i_code2,
			code *i_code3,
			error *o_err) { 
	/* {{{ OK */
	GdomeNode *ret;
	GdomeText *obj1;
	GdomeNode *obj2;
	GdomeNode *obj3;
	GdomeException exc;

	Cache *cache = f77xml_Cache_instance();

	*o_err = ERR_NEVER_RETURN_THIS;
	*o_ret = NullCode;
	
	obj1 = f77xml_Cache_getText(cache, *i_code1, o_err);
	if (obj1 == NULL) return;
	
	obj2 = f77xml_Cache_getNode(cache, *i_code2, o_err);
	if (obj2 == NULL) return;

	obj3 = f77xml_Cache_getNode(cache, *i_code3, o_err);
	if (obj3 == NULL) return;

	ret = gdome_t_replaceChild(obj1,obj2,obj3,&exc);
	
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

		

static void f77xml__doc_insertBefore(code *o_ret,
			code *i_code1,
			code *i_code2,
			code *i_code3,
			error *o_err) { 
	/* {{{ OK */
	GdomeNode *ret;
	GdomeDocument *obj1;
	GdomeNode *obj2;
	GdomeNode *obj3;
	GdomeException exc;

	Cache *cache = f77xml_Cache_instance();

	*o_err = ERR_NEVER_RETURN_THIS;
	*o_ret = NullCode;
	
	obj1 = f77xml_Cache_getDocument(cache, *i_code1, o_err);
	if (obj1 == NULL) return;
	
	obj2 = f77xml_Cache_getNode(cache, *i_code2, o_err);
	if (obj2 == NULL) return;

	obj3 = f77xml_Cache_getNode(cache, *i_code3, o_err);
	if (obj3 == NULL) return;

	ret = gdome_doc_insertBefore(obj1,obj2,obj3,&exc);
	
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

		

static void f77xml__doc_replaceChild(code *o_ret,
			code *i_code1,
			code *i_code2,
			code *i_code3,
			error *o_err) { 
	/* {{{ OK */
	GdomeNode *ret;
	GdomeDocument *obj1;
	GdomeNode *obj2;
	GdomeNode *obj3;
	GdomeException exc;

	Cache *cache = f77xml_Cache_instance();

	*o_err = ERR_NEVER_RETURN_THIS;
	*o_ret = NullCode;
	
	obj1 = f77xml_Cache_getDocument(cache, *i_code1, o_err);
	if (obj1 == NULL) return;
	
	obj2 = f77xml_Cache_getNode(cache, *i_code2, o_err);
	if (obj2 == NULL) return;

	obj3 = f77xml_Cache_getNode(cache, *i_code3, o_err);
	if (obj3 == NULL) return;

	ret = gdome_doc_replaceChild(obj1,obj2,obj3,&exc);
	
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

		

static void f77xml__n_insertBefore(code *o_ret,
			code *i_code1,
			code *i_code2,
			code *i_code3,
			error *o_err) { 
	/* {{{ OK */
	GdomeNode *ret;
	GdomeNode *obj1;
	GdomeNode *obj2;
	GdomeNode *obj3;
	GdomeException exc;

	Cache *cache = f77xml_Cache_instance();

	*o_err = ERR_NEVER_RETURN_THIS;
	*o_ret = NullCode;
	
	obj1 = f77xml_Cache_getNode(cache, *i_code1, o_err);
	if (obj1 == NULL) return;
	
	obj2 = f77xml_Cache_getNode(cache, *i_code2, o_err);
	if (obj2 == NULL) return;

	obj3 = f77xml_Cache_getNode(cache, *i_code3, o_err);
	if (obj3 == NULL) return;

	ret = gdome_n_insertBefore(obj1,obj2,obj3,&exc);
	
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

		

static void f77xml__n_replaceChild(code *o_ret,
			code *i_code1,
			code *i_code2,
			code *i_code3,
			error *o_err) { 
	/* {{{ OK */
	GdomeNode *ret;
	GdomeNode *obj1;
	GdomeNode *obj2;
	GdomeNode *obj3;
	GdomeException exc;

	Cache *cache = f77xml_Cache_instance();

	*o_err = ERR_NEVER_RETURN_THIS;
	*o_ret = NullCode;
	
	obj1 = f77xml_Cache_getNode(cache, *i_code1, o_err);
	if (obj1 == NULL) return;
	
	obj2 = f77xml_Cache_getNode(cache, *i_code2, o_err);
	if (obj2 == NULL) return;

	obj3 = f77xml_Cache_getNode(cache, *i_code3, o_err);
	if (obj3 == NULL) return;

	ret = gdome_n_replaceChild(obj1,obj2,obj3,&exc);
	
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

		

static void f77xml__c_insertBefore(code *o_ret,
			code *i_code1,
			code *i_code2,
			code *i_code3,
			error *o_err) { 
	/* {{{ OK */
	GdomeNode *ret;
	GdomeComment *obj1;
	GdomeNode *obj2;
	GdomeNode *obj3;
	GdomeException exc;

	Cache *cache = f77xml_Cache_instance();

	*o_err = ERR_NEVER_RETURN_THIS;
	*o_ret = NullCode;
	
	obj1 = f77xml_Cache_getComment(cache, *i_code1, o_err);
	if (obj1 == NULL) return;
	
	obj2 = f77xml_Cache_getNode(cache, *i_code2, o_err);
	if (obj2 == NULL) return;

	obj3 = f77xml_Cache_getNode(cache, *i_code3, o_err);
	if (obj3 == NULL) return;

	ret = gdome_c_insertBefore(obj1,obj2,obj3,&exc);
	
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

		

static void f77xml__c_replaceChild(code *o_ret,
			code *i_code1,
			code *i_code2,
			code *i_code3,
			error *o_err) { 
	/* {{{ OK */
	GdomeNode *ret;
	GdomeComment *obj1;
	GdomeNode *obj2;
	GdomeNode *obj3;
	GdomeException exc;

	Cache *cache = f77xml_Cache_instance();

	*o_err = ERR_NEVER_RETURN_THIS;
	*o_ret = NullCode;
	
	obj1 = f77xml_Cache_getComment(cache, *i_code1, o_err);
	if (obj1 == NULL) return;
	
	obj2 = f77xml_Cache_getNode(cache, *i_code2, o_err);
	if (obj2 == NULL) return;

	obj3 = f77xml_Cache_getNode(cache, *i_code3, o_err);
	if (obj3 == NULL) return;

	ret = gdome_c_replaceChild(obj1,obj2,obj3,&exc);
	
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

		

static void f77xml__doc_createProcessingInstruction(code *o_ret,
			code *i_code1,
			code *i_code2,
			code *i_code3,
			error *o_err) { 
	/* {{{ OK */
	GdomeProcessingInstruction *ret;
	GdomeDocument *obj1;
	GdomeDOMString *obj2;
	GdomeDOMString *obj3;
	GdomeException exc;

	Cache *cache = f77xml_Cache_instance();

	*o_err = ERR_NEVER_RETURN_THIS;
	*o_ret = NullCode;
	
	obj1 = f77xml_Cache_getDocument(cache, *i_code1, o_err);
	if (obj1 == NULL) return;
	
	obj2 = f77xml_Cache_getDOMString(cache, *i_code2, o_err);
	if (obj2 == NULL) return;

	obj3 = f77xml_Cache_getDOMString(cache, *i_code3, o_err);
	if (obj3 == NULL) return;

	ret = gdome_doc_createProcessingInstruction(obj1,obj2,obj3,&exc);
	
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

	*o_ret = f77xml_Cache_addProcessingInstruction(cache, (gpointer)ret);

	/* }}} */

}

		

static void f77xml__ent_insertBefore(code *o_ret,
			code *i_code1,
			code *i_code2,
			code *i_code3,
			error *o_err) { 
	/* {{{ OK */
	GdomeNode *ret;
	GdomeEntity *obj1;
	GdomeNode *obj2;
	GdomeNode *obj3;
	GdomeException exc;

	Cache *cache = f77xml_Cache_instance();

	*o_err = ERR_NEVER_RETURN_THIS;
	*o_ret = NullCode;
	
	obj1 = f77xml_Cache_getEntity(cache, *i_code1, o_err);
	if (obj1 == NULL) return;
	
	obj2 = f77xml_Cache_getNode(cache, *i_code2, o_err);
	if (obj2 == NULL) return;

	obj3 = f77xml_Cache_getNode(cache, *i_code3, o_err);
	if (obj3 == NULL) return;

	ret = gdome_ent_insertBefore(obj1,obj2,obj3,&exc);
	
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

		

static void f77xml__ent_replaceChild(code *o_ret,
			code *i_code1,
			code *i_code2,
			code *i_code3,
			error *o_err) { 
	/* {{{ OK */
	GdomeNode *ret;
	GdomeEntity *obj1;
	GdomeNode *obj2;
	GdomeNode *obj3;
	GdomeException exc;

	Cache *cache = f77xml_Cache_instance();

	*o_err = ERR_NEVER_RETURN_THIS;
	*o_ret = NullCode;
	
	obj1 = f77xml_Cache_getEntity(cache, *i_code1, o_err);
	if (obj1 == NULL) return;
	
	obj2 = f77xml_Cache_getNode(cache, *i_code2, o_err);
	if (obj2 == NULL) return;

	obj3 = f77xml_Cache_getNode(cache, *i_code3, o_err);
	if (obj3 == NULL) return;

	ret = gdome_ent_replaceChild(obj1,obj2,obj3,&exc);
	
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

		

static void f77xml__a_insertBefore(code *o_ret,
			code *i_code1,
			code *i_code2,
			code *i_code3,
			error *o_err) { 
	/* {{{ OK */
	GdomeNode *ret;
	GdomeAttr *obj1;
	GdomeNode *obj2;
	GdomeNode *obj3;
	GdomeException exc;

	Cache *cache = f77xml_Cache_instance();

	*o_err = ERR_NEVER_RETURN_THIS;
	*o_ret = NullCode;
	
	obj1 = f77xml_Cache_getAttr(cache, *i_code1, o_err);
	if (obj1 == NULL) return;
	
	obj2 = f77xml_Cache_getNode(cache, *i_code2, o_err);
	if (obj2 == NULL) return;

	obj3 = f77xml_Cache_getNode(cache, *i_code3, o_err);
	if (obj3 == NULL) return;

	ret = gdome_a_insertBefore(obj1,obj2,obj3,&exc);
	
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

		

static void f77xml__a_replaceChild(code *o_ret,
			code *i_code1,
			code *i_code2,
			code *i_code3,
			error *o_err) { 
	/* {{{ OK */
	GdomeNode *ret;
	GdomeAttr *obj1;
	GdomeNode *obj2;
	GdomeNode *obj3;
	GdomeException exc;

	Cache *cache = f77xml_Cache_instance();

	*o_err = ERR_NEVER_RETURN_THIS;
	*o_ret = NullCode;
	
	obj1 = f77xml_Cache_getAttr(cache, *i_code1, o_err);
	if (obj1 == NULL) return;
	
	obj2 = f77xml_Cache_getNode(cache, *i_code2, o_err);
	if (obj2 == NULL) return;

	obj3 = f77xml_Cache_getNode(cache, *i_code3, o_err);
	if (obj3 == NULL) return;

	ret = gdome_a_replaceChild(obj1,obj2,obj3,&exc);
	
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

		

static void f77xml__el_removeAttributeNS(code *o_ret,
				code *i_code1,
				code *i_code2,
				code *i_code3,
				error *o_err) { 
	/* {{{ OK */
	GdomeElement *obj1;
	GdomeDOMString *obj2;
	GdomeDOMString *obj3;
	GdomeException exc;

	Cache *cache = f77xml_Cache_instance();

	*o_err = ERR_NEVER_RETURN_THIS;
	*o_ret = NullCode;
	
	obj1 = f77xml_Cache_getElement(cache, *i_code1, o_err);
	if (obj1 == NULL) return;
	
	obj2 = f77xml_Cache_getDOMString(cache, *i_code2, o_err);
	if (obj2 == NULL) return;

	obj3 = f77xml_Cache_getDOMString(cache, *i_code3, o_err);
	if (obj3 == NULL) return;

	gdome_el_removeAttributeNS(obj1,obj2,obj3,&exc);
	
	if (exc) {
		*o_err = ERR_GDOME;
		return;
	}
	
	*o_err = ERR_NO_ERROR;

	/* }}} */

}

		