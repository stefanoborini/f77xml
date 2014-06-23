#include <assert.h>

private void f77xml__el_appendChild(code *o_code1, code *i_code2,code *i_code3,error *o_err) { 
	/* {{{ OK */
    GdomeElement *parent;
	GdomeNode *node;
	GdomeException exc;
	DomImpl *di;
	Cache *cache;
	
	di = f77xml_DomImpl_instance();
	cache = f77xml_DomImpl_getCache(di);
	*o_code1 = NullCode;
	*o_err = ERR_NEVER_RETURN_THIS;
	
	parent = f77xml_Cache_getElement(cache, *i_code2, o_err);
	if (parent == NULL) return;
	node = f77xml_Cache_getNode(cache, *i_code3, o_err);
	if (node == NULL) return;

	gdome_el_appendChild(parent,node,&exc);

	if (exc) {
		*o_err = ERR_GDOME_BASE + exc;
		return;
	}
	
	*o_err = ERR_NO_ERROR;

/* }}} */
}

private void f77xml__dom_saveDocToFile(code *o_code1,
					code *i_code2,
					code *i_code3,
					error *o_err) {
	/* {{{ OK */
	DomImpl *di;
	Cache *cache;
	GdomeDocument *doc;
	GdomeDOMString *str;
	GdomeException exc;

	di = f77xml_DomImpl_instance();
	cache = f77xml_DomImpl_getCache(di);

	*o_err = ERR_NEVER_RETURN_THIS;
	*o_code1 = NullCode;

	doc = f77xml_Cache_getDocument(cache, *i_code2, o_err);
	if (doc == NULL) return;
	
	str = f77xml_Cache_getDOMString(cache, *i_code3, o_err);
	if (str == NULL) return;

	gdome_di_saveDocToFile(f77xml_DomImpl_getDomImplementation(di),doc, str->str,GDOME_SAVE_LIBXML_INDENT,&exc);

	if (exc) {
		*o_err = ERR_GDOME_BASE + exc;
		return;
	}
	
	*o_err = ERR_NO_ERROR;
	/* }}} */

}


private void f77xml__doc_createElement(code *o_code1,
											code *i_code2,
											code *i_code3,
											error *o_err) { 
	/* {{{ OK */
    GdomeDocument *doc;
	GdomeElement *elem;
	GdomeDOMString *str;
	GdomeException exc;
	DomImpl *di = f77xml_DomImpl_instance();
	Cache *cache = f77xml_DomImpl_getCache(di);

	*o_code1 = NullCode;
	*o_err = ERR_NEVER_RETURN_THIS;
	
	doc = f77xml_Cache_getDocument(cache, *i_code2, o_err);
	if (doc == NULL) return;

	str = f77xml_Cache_getDOMString(cache, *i_code3, o_err);
	if (str == NULL) return;

	elem = gdome_doc_createElement(doc,str,&exc);
	
	if (exc) {
		assert ( elem == NULL );
		*o_err = ERR_GDOME_BASE + exc;
		return;
	}
	
	*o_err = ERR_NO_ERROR;
	*o_code1 = f77xml_Cache_addPointer(cache, (gpointer)elem, Type_GdomeNode);

	/* }}} */
}

private void f77xml__doc_createTextNode(code *o_code1,
					code *i_code2, 
					code *i_code3, 
					error *o_err) { 
	/* {{{ OK */
    GdomeDocument *doc;
	GdomeText *text;
	GdomeException exc;
	DomImpl *di;
	Cache *cache;
	GdomeDOMString *str;

	di = f77xml_DomImpl_instance();
	cache = f77xml_DomImpl_getCache(di);
	
	*o_code1 = NullCode;
	*o_err = ERR_NEVER_RETURN_THIS;

	doc = f77xml_Cache_getDocument(cache, *i_code2, o_err);
	if (doc == NULL) return;

	str = f77xml_Cache_getDOMString(cache, *i_code3, o_err);
	if (str == NULL) return;
	
	text = gdome_doc_createTextNode(doc,str,&exc);
	
	if (exc) {
		assert ( text == NULL );
		*o_err = ERR_GDOME_BASE + exc;
		return;
	}
	
	*o_err = ERR_NO_ERROR;
	*o_code1 = f77xml_Cache_addPointer(cache, (gpointer)text, Type_GdomeNode);

	/* }}} */
}


private void f77xml__doc_createComment(code *o_code1,
											code *i_code2,
											code *i_code3, 
											error *o_err) { 
	/* {{{ OK */
    GdomeDocument *doc;
	GdomeComment *comment;
	GdomeException exc;
	DomImpl *di;
	Cache *cache;
	GdomeDOMString *str;
	
	di = f77xml_DomImpl_instance();
	cache = f77xml_DomImpl_getCache(di);

	*o_code1 = NullCode;
	*o_err = ERR_NEVER_RETURN_THIS;
	
	doc = f77xml_Cache_getDocument(cache, *i_code2, o_err);
	if (doc == NULL) return;

	str = f77xml_Cache_getDOMString(cache, *i_code3, o_err);
	if (str == NULL) return;

	comment = gdome_doc_createComment(doc,str,&exc);

	if (exc) {
		assert ( comment == NULL );
		*o_err = ERR_GDOME_BASE + exc;
		return;
	}
	
	*o_err = ERR_NO_ERROR;
	*o_code1 = f77xml_Cache_addPointer(cache, (gpointer)comment, Type_GdomeNode);

	/* }}} */
}


#if 0
private void f77xml__el_getAttribute(code *o_code1,
										code *i_code2, 
										code *i_code3, 
										error *o_err) { 
	/* {{{ OK */
    GdomeElement *elem;
	GdomeDOMString *str1,*str2;
	GdomeException exc;
	DomImpl *di;
	Cache *cache;

	di = f77xml_DomImpl_instance();
	cache = f77xml_DomImpl_getCache(di);
	
	*o_code1 = NullCode;
	*o_err = ERR_NEVER_RETURN_THIS;

	elem = f77xml_Cache_getElement(cache, *i_code2, o_err);
	if (doc == NULL) return;

	str1 = f77xml_Cache_getDOMString(cache, *i_code3, o_err);
	if (str1 == NULL) return;
	
	str2 = gdome_el_getAttribute(elem,str1,&exc);
	
	if (exc) {
		assert ( str2 == NULL );
		*o_err = ERR_GDOME_BASE + exc;
		return;
	}
	
	*o_err = ERR_NO_ERROR;
	*o_code1 = f77xml_Cache_addPointer(cache, (gpointer)str2, Type_GdomeDOMString);

	/* }}} */
}

private void f77xml__el_removeAttribute(code *o_code1,
										code *i_code2, 
										code *i_code3, 
										error *o_err) { 
	/* {{{ OK */
    GdomeElement *elem;
	GdomeDOMString *str;
	GdomeException exc;
	DomImpl *di;
	Cache *cache;

	di = f77xml_DomImpl_instance();
	cache = f77xml_DomImpl_getCache(di);
	
	*o_code1 = NullCode;
	*o_err = ERR_NEVER_RETURN_THIS;

	elem = f77xml_Cache_getElement(cache, *i_code2, o_err);
	if (doc == NULL) return;

	str = f77xml_Cache_getDOMString(cache, *i_code3, o_err);
	if (str == NULL) return;
	
	gdome_el_removeAttribute(elem,str,&exc);
	
	if (exc) {
		*o_err = ERR_GDOME_BASE + exc;
		return;
	}
	
	*o_err = ERR_NO_ERROR;

	/* }}} */
}

private void f77xml__el_getElementsByTagName(code *o_code1,
											code *i_code2,
											code *i_code3,
											error *o_err) {
	/* {{{ */ 
    GdomeNodeList *nodeList;
    GdomeElement *elem;
	GdomeDOMString *str;
	GdomeException exc;
	DomImpl *di;
	Cache *cache;
	
	di = f77xml_DomImpl_instance();
	cache = f77xml_DomImpl_getCache(di);
	
	*o_code1 = NullCode;
	*o_err = ERR_NEVER_RETURN_THIS;
	
	elem = f77xml_Cache_getElement(cache, *i_code2, o_err);
	if (elem == NULL) return;

	str = f77xml_Cache_getDOMString(cache, *i_code3, o_err);
	if (str == NULL) return;

	nodeList = gdome_el_getElementsByTagName (elem, str, &exc);

	if (exc) {
		assert (nodeList == NULL);
		*o_err = ERR_GDOME_BASE + exc;
		return;
	}
	
	*o_err = ERR_NO_ERROR;
	*o_code1 = f77xml_Cache_queryCode(cache, (gpointer)nodeList);

	if (*o_code1 != NullCode) {
		gdome_nl_unref(nodeList,&exc);
		return;
	}
	
	*o_code1 = f77xml_Cache_addPointer(cache, (gpointer)nodeList, Type_GdomeNodeList);

/* }}} */
}
#endif
