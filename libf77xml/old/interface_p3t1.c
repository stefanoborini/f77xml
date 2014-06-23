#include <assert.h>

private void f77xml__doc_documentElement(code *o_code1, code *i_code2, error *o_err) { 
	/* {{{ OK */
	GdomeElement *elem;
	GdomeDocument *doc;
	GdomeException exc;
	DomImpl *di;
	Cache *cache;

	di = f77xml_DomImpl_instance();
	cache = f77xml_DomImpl_getCache(di);
	
	*o_err = ERR_NEVER_RETURN_THIS;
	*o_code1 = NullCode;

	doc = f77xml_Cache_getDocument(cache, *i_code2, o_err);
	if (doc == NULL) return;

	elem = gdome_doc_documentElement (doc, &exc);

	if (exc) {
		assert(elem == NULL);
		*o_err = ERR_GDOME_BASE + exc;
		return;
	}
	
	*o_err = ERR_NO_ERROR;
	*o_code1 = f77xml_Cache_queryCode(cache, (gpointer)elem);
	if (*o_code1 != NullCode) {
		/* free the unneeded ref */
		gdome_el_unref(elem,&exc);
		return;
	}

	*o_code1 = f77xml_Cache_addPointer(cache, (gpointer)elem , Type_GdomeNode);

	/* }}} */
}

private void f77xml__el_firstChild(code *o_code1,code *i_code2,error *o_err) { 
	/* {{{ OK */
    GdomeNode *node;
	GdomeElement *elem;
	GdomeException exc;
	DomImpl *di;
	Cache *cache;
	gpointer gPtr;
	
	di = f77xml_DomImpl_instance();
	cache = f77xml_DomImpl_getCache(di);

	*o_err = ERR_NEVER_RETURN_THIS;
	*o_code1 = NullCode;

	elem = f77xml_Cache_getElement(cache, *i_code2,o_err);
	if (elem == NULL) return;

	node = gdome_el_firstChild (elem, &exc);

	if (exc) {
		assert(node == NULL);
		*o_err = ERR_GDOME_BASE + exc;
		return;
	}
	
	*o_err = ERR_NO_ERROR;
	*o_code1 = f77xml_Cache_queryCode(cache,(gpointer)node);

	if (*o_code1 != NullCode) {
		gdome_n_unref(node,&exc);
		return;
	}

	*o_code1 = f77xml_Cache_addPointer(cache, (gpointer)node, Type_GdomeNode);

/* }}} */
}

private void f77xml__el_lastChild(code *o_code1,code *i_code2,error *o_err) { 
	/* {{{ OK */
    GdomeNode *node;
	GdomeElement *elem;
	GdomeException exc;
	DomImpl *di;
	Cache *cache;
	gpointer gPtr;
	
	di = f77xml_DomImpl_instance();
	cache = f77xml_DomImpl_getCache(di);

	*o_code1 = NullCode;
	*o_err = ERR_NEVER_RETURN_THIS;
	
	elem = f77xml_Cache_getElement(cache, *i_code2,o_err);
	if (elem == NULL) return;
	
	node = gdome_el_lastChild (elem, &exc);

	if (exc) {
		assert(node == NULL);
		*o_err = ERR_GDOME_BASE + exc;
		return;
	}
	
	*o_err = ERR_NO_ERROR;
	
	*o_code1 = f77xml_Cache_queryCode(cache, (gpointer)node);
	if (*o_code1 != NullCode) {
		gdome_n_unref(node,&exc);
		return;
	}
	
	*o_code1 = f77xml_Cache_addPointer(cache, (gpointer)node, Type_GdomeNode);

/* }}} */
}

private void f77xml__el_nextSibling(code *o_code1,code *i_code2,error *o_err) { 
	/* {{{ OK */
    GdomeNode *node;
	GdomeElement *elem;
	GdomeException exc;
	DomImpl *di;
	Cache *cache;
	gpointer gPtr;

	di = f77xml_DomImpl_instance();
	cache = f77xml_DomImpl_getCache(di);
	
	*o_code1 = NullCode;
	*o_err = ERR_NEVER_RETURN_THIS;
	
	elem = f77xml_Cache_getElement(cache, *i_code2,o_err);
	if (elem == NULL) return;
	
	node = gdome_el_nextSibling (elem, &exc);

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

private void f77xml__el_previousSibling(code *o_code1,code *i_code2,error *o_err) { 
	/* {{{ OK */
    GdomeNode *node;
	GdomeElement *elem;
	GdomeException exc;
	DomImpl *di;
	Cache *cache;
	gpointer gPtr;
	
	di = f77xml_DomImpl_instance();
	cache = f77xml_DomImpl_getCache(di);

	*o_code1 = NullCode;
	*o_err = ERR_NEVER_RETURN_THIS;
	
	elem = f77xml_Cache_getElement(cache, *i_code2,o_err);
	if (elem == NULL) return;

	node = gdome_el_previousSibling (elem, &exc);

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

private void f77xml__el_parentNode(code *o_code1,code *i_code2,error *o_err) { 
	/* {{{ OK */
    GdomeNode *node;
    GdomeElement *elem;
	GdomeException exc;
	DomImpl *di;
	Cache *cache;
	gpointer gPtr;
	
	di = f77xml_DomImpl_instance();
	cache = f77xml_DomImpl_getCache(di);
	
	*o_code1 = NullCode;
	*o_err = ERR_NEVER_RETURN_THIS;
	
	elem = f77xml_Cache_getElement(cache, *i_code2, o_err);
	if (elem == NULL) return;
	
	node = gdome_el_parentNode (elem, &exc);

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

private void f77xml__el_childNodes(code *o_code1,code *i_code2,error *o_err) {
	/* {{{ */
    GdomeNodeList *nodeList;
    GdomeElement *elem;
	GdomeException exc;
	DomImpl *di;
	Cache *cache;
	gpointer gPtr;
	
	di = f77xml_DomImpl_instance();
	cache = f77xml_DomImpl_getCache(di);
	
	*o_code1 = NullCode;
	*o_err = ERR_NEVER_RETURN_THIS;
	
	elem = f77xml_Cache_getElement(cache, *i_code2, o_err);
	if (elem == NULL) return;

	nodeList = gdome_el_childNodes (elem, &exc);

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

private void f77xml__dom_createDocFromURI(code *o_code1,
					code *i_code2,
					error *o_err) {
	/* {{{ OK */
	DomImpl *di;
	Cache *cache;
	GdomeDocument *doc;
	GdomeDOMString *str;
	GdomeException exc;
	gpointer gPtr;

	di = f77xml_DomImpl_instance();
	cache = f77xml_DomImpl_getCache(di);
	*o_code1 = NullCode;
	*o_err = ERR_NEVER_RETURN_THIS;

	str = f77xml_Cache_getDOMString(cache, *i_code2, o_err);
	if (str == NULL) return;

	doc = gdome_di_createDocFromURI(f77xml_DomImpl_getDomImplementation(di),str->str,GDOME_LOAD_PARSING,&exc);

	if (exc) {
		assert ( doc == NULL );
		*o_err = ERR_GDOME_BASE + exc;
		return;
	}
	
	*o_err = ERR_NO_ERROR;
	*o_code1 = f77xml_Cache_addPointer(cache, (gpointer)doc, Type_GdomeDocument);
	/* }}} */

}

private void f77xml__el_tagName(code *o_code1,
									code *i_code2,
									error *o_err) { 
	/* {{{ OK */
	GdomeElement *elem;
	GdomeDOMString *str;
	GdomeException exc;
	DomImpl *di;
	Cache *cache;
	gpointer gPtr;

	di = f77xml_DomImpl_instance();
	cache = f77xml_DomImpl_getCache(di);
	
	*o_code1 = NullCode;
	*o_err = ERR_NEVER_RETURN_THIS;

	elem = f77xml_Cache_getElement(cache, *i_code2, o_err);
	if (elem == NULL ) return;
	
	str = gdome_el_tagName (elem, &exc);

	if (exc) {
		assert (str == NULL);
		*o_err = ERR_GDOME_BASE + exc;
		return;
	}
	
	*o_err = ERR_NO_ERROR;
	*o_code1 = f77xml_Cache_addPointer(cache, (gpointer)str, Type_GdomeDOMString);
	
	/* }}} */

}




