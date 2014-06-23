#include <assert.h>

static void f77xml__el_setAttribute(code *o_code1,
										code *i_code2,
										code *i_code3,
										code *i_code4,
										error *o_err) { 
	/* {{{ OK */
    GdomeElement *elem;
	GdomeDOMString *name,*value;
	GdomeException exc;
	DomImpl *di;
	Cache *cache;
	gpointer gPtr;
	
	di = f77xml_DomImpl_instance();
	cache = f77xml_DomImpl_getCache(di);

	*o_err = ERR_NEVER_RETURN_THIS;
	*o_code1 = NullCode;
	
	elem = f77xml_Cache_getElement(cache, *i_code2, o_err);
	if (elem == NULL) return;
	
	name = f77xml_Cache_getDOMString(cache, *i_code3, o_err);
	if (name == NULL) return;

	value = f77xml_Cache_getDOMString(cache, *i_code4, o_err);
	if (value == NULL) return;

	gdome_el_setAttribute(elem,name,value,&exc);
	
	if (exc) {
		*o_err = ERR_GDOME_BASE + exc;
		return;
	}
	
	*o_err = ERR_NO_ERROR;

	/* }}} */

}


static void f77xml__doc_createElementNS(code *o_code1,
										code *i_code2,
										code *i_code3,
										code *i_code4,
										error *o_err) { 
	/* {{{ OK */
    GdomeElement *elem;
	GdomeDocument *doc;
	GdomeDOMString *namespace,*qname;
	GdomeException exc;
	DomImpl *di;
	Cache *cache;
	gpointer gPtr;
	
	di = f77xml_DomImpl_instance();
	cache = f77xml_DomImpl_getCache(di);

	*o_err = ERR_NEVER_RETURN_THIS;
	*o_code1 = NullCode;
	
	doc = f77xml_Cache_getDocument(cache, *i_code2, o_err);
	if (doc == NULL) return;
	
	namespace = f77xml_Cache_getDOMString(cache, *i_code3, o_err);
	if (namespace == NULL) return;

	qname = f77xml_Cache_getDOMString(cache, *i_code4, o_err);
	if (qname == NULL) return;

	elem = gdome_doc_createElementNS(doc,namespace,qname,&exc);
	
	if (exc) {
		assert (elem == NULL);
		*o_err = ERR_GDOME_BASE + exc;
		return;
	}
	
	*o_err = ERR_NO_ERROR;
	*o_code1 = f77xml_Cache_addPointer(cache, (gpointer)elem, Type_GdomeNode);

	/* }}} */

}

