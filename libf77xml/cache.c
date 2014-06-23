#include <stdio.h>
#include <assert.h>
#include <gdome.h>
#include "error.h"
#include "cache.h"

static Cache *_instance = NULL;

private code f77xml_Cache_getNewCode(Cache *self);
private PointerRef *f77xml_Cache_codeToPointerRef(Cache *self, code c);
private PointerRef *f77xml_Cache_gpointerToPointerRef(Cache *self, gpointer ptr);
private code f77xml_Cache_addPointer(Cache *self, gpointer ptr, PointerType type);
private void f77xml_Cache_removePointer(Cache *self, gpointer ptr, PointerType type);
private gpointer f77xml_Cache_queryPointer(Cache *self, code c);
private code f77xml_Cache_queryCode(Cache *self, gpointer ptr);
private PointerType f77xml_Cache_queryType(Cache *self, code c);
private Cache *f77xml_Cache_new();
private void f77xml_Cache_delete(Cache *self);

public Cache *f77xml_Cache_instance() {
	if (!_instance) _instance = f77xml_Cache_new();

	return _instance;
}

private Cache *f77xml_Cache_new() {
	/* {{{ */
	Cache *c;
	
	c = (Cache *)malloc(sizeof(Cache));
	c->_pointerList = NULL;
	c->_nextCode = 10;
#ifdef DEBUG
	c->_debug_globalRefCount=0;
#endif

	return c;
	/* }}} */
}

private void f77xml_Cache_delete(Cache *self) {
	/* {{{ */
	free(self);
	/* }}} */
}

public code f77xml_Cache_addNode(Cache *self, gpointer ptr) {
	return f77xml_Cache_addPointer(self, ptr, Type_GdomeNode);
}

public code f77xml_Cache_addElement(Cache *self, gpointer ptr) {
	return f77xml_Cache_addPointer(self, ptr, Type_GdomeNode);
}

public code f77xml_Cache_addDocument(Cache *self, gpointer ptr) {
	return f77xml_Cache_addPointer(self, ptr, Type_GdomeNode);
}

public code f77xml_Cache_addText(Cache *self, gpointer ptr) {
	return f77xml_Cache_addPointer(self, ptr, Type_GdomeNode);
}

public code f77xml_Cache_addComment(Cache *self, gpointer ptr) {
	return f77xml_Cache_addPointer(self, ptr, Type_GdomeNode);
}

public code f77xml_Cache_addEntityReference(Cache *self, gpointer ptr) {
	return f77xml_Cache_addPointer(self, ptr, Type_GdomeNode);
}

public code f77xml_Cache_addEntity(Cache *self, gpointer ptr) {
	return f77xml_Cache_addPointer(self, ptr, Type_GdomeNode);
}

public code f77xml_Cache_addCharacterData(Cache *self, gpointer ptr) {
	return f77xml_Cache_addPointer(self, ptr, Type_GdomeNode);
}

public code f77xml_Cache_addProcessingInstruction(Cache *self, gpointer ptr) {
	return f77xml_Cache_addPointer(self, ptr, Type_GdomeNode);
}

public code f77xml_Cache_addNotation(Cache *self, gpointer ptr) {
	return f77xml_Cache_addPointer(self, ptr, Type_GdomeNode);
}

public code f77xml_Cache_addDocumentFragment(Cache *self, gpointer ptr) {
	return f77xml_Cache_addPointer(self, ptr, Type_GdomeNode);
}
public code f77xml_Cache_addDocumentType(Cache *self, gpointer ptr) {
	return f77xml_Cache_addPointer(self, ptr, Type_GdomeNode);
}

public code f77xml_Cache_addNodeList(Cache *self, gpointer ptr) {
	return f77xml_Cache_addPointer(self, ptr, Type_GdomeNodeList);
}

public code f77xml_Cache_addNamedNodeMap(Cache *self, gpointer ptr) {
	return f77xml_Cache_addPointer(self, ptr, Type_GdomeNamedNodeMap);
}

public code f77xml_Cache_addDOMString(Cache *self, gpointer ptr) {
	return f77xml_Cache_addPointer(self, ptr, Type_GdomeDOMString);
}

public code f77xml_Cache_addAttr(Cache *self, gpointer ptr) {
	return f77xml_Cache_addPointer(self, ptr, Type_GdomeNode);
}

public code f77xml_Cache_addDOMImplementation(Cache *self, gpointer ptr) {
	return f77xml_Cache_addPointer(self, ptr, Type_GdomeDOMImplementation);
}

public code f77xml_Cache_addCDATASection(Cache *self, gpointer ptr) {
	return f77xml_Cache_addPointer(self, ptr, Type_GdomeNode);
}

public code f77xml_Cache_addXPathEvaluator(Cache *self, gpointer ptr) {
	return f77xml_Cache_addPointer(self, ptr, Type_GdomeXPathEvaluator);
}

public code f77xml_Cache_addXPathResult(Cache *self, gpointer ptr) {
	return f77xml_Cache_addPointer(self, ptr, Type_GdomeXPathResult);
}

public code f77xml_Cache_addXPathNSResolver(Cache *self, gpointer ptr) {
	return f77xml_Cache_addPointer(self, ptr, Type_GdomeXPathNSResolver);
}

public unsigned int f77xml_Cache_size(Cache *self) {
	/* {{{ */
	return (unsigned int) g_list_length(self->_pointerList);	
	/* }}} */
}

public GdomeDocument *f77xml_Cache_getDocument(Cache *self, code c, error *err) {
	// {{{
	gpointer gPtr;
	GdomeDocument *doc;

	if (c == NullCode) {
		*err = ERR_NULL_CODE;
		return NULL;
	}

	gPtr = f77xml_Cache_queryPointer(self, c);
	
	if (!gPtr) {
		*err = ERR_NO_CACHE_HIT;
		return NULL;
	}	

	doc = GDOME_DOC(gPtr);

	if (doc == NULL) {
		*err = ERR_DATA_NOT_A_DOCUMENT;
		return NULL;
	}

	*err = ERR_NO_ERROR;
	return doc;
	// }}}
}

public GdomeElement *f77xml_Cache_getElement(Cache *self, code c, error *err) {
	// {{{
	gpointer gPtr;
	GdomeElement *elem;

	if (c == NullCode) {
		*err = ERR_NULL_CODE;
		return NULL;
	}

	gPtr = f77xml_Cache_queryPointer(self, c);
	
	if (!gPtr) {
		*err = ERR_NO_CACHE_HIT;
		return NULL;
	}	
	
	elem = GDOME_EL(gPtr);
	printf("elem = %x, c = %d, gPtr = %x isNode = %x\n",elem,c,gPtr,GDOME_T(gPtr));

	if (elem == NULL) {
		*err = ERR_DATA_NOT_AN_ELEMENT;
		return NULL;
	}

	*err = ERR_NO_ERROR;
	return elem;
	// }}}

}

public GdomeText *f77xml_Cache_getText(Cache *self, code c, error *err) {
	// {{{
	gpointer gPtr;
	GdomeText *text;

	if (c == NullCode) {
		*err = ERR_NULL_CODE;
		return NULL;
	}

	gPtr = f77xml_Cache_queryPointer(self, c);
	
	if (!gPtr) {
		*err = ERR_NO_CACHE_HIT;
		return NULL;
	}	

	text = GDOME_T(gPtr);

	if (text == NULL) {
		*err = ERR_DATA_NOT_A_TEXT;
		return NULL;
	}

	*err = ERR_NO_ERROR;
	return text;
	// }}}

}

public GdomeNode *f77xml_Cache_getNode(Cache *self, code c, error *err) {
	// {{{
	gpointer gPtr;
	GdomeNode *node;

	if (c == NullCode) {
		*err = ERR_NULL_CODE;
		return NULL;
	}

	gPtr = f77xml_Cache_queryPointer(self, c);
	
	if (!gPtr) {
		*err = ERR_NO_CACHE_HIT;
		return NULL;
	}	

	node = GDOME_N(gPtr);

	if (node == NULL) {
		*err = ERR_DATA_NOT_A_NODE;
		return NULL;
	}

	*err = ERR_NO_ERROR;
	return node;
	// }}}

}

public GdomeEntityReference *f77xml_Cache_getEntityReference(Cache *self, code c, error *err) {
	// {{{
	gpointer gPtr;
	GdomeEntityReference *entref;

	if (c == NullCode) {
		*err = ERR_NULL_CODE;
		return NULL;
	}

	gPtr = f77xml_Cache_queryPointer(self, c);
	
	if (!gPtr) {
		*err = ERR_NO_CACHE_HIT;
		return NULL;
	}	

	entref = GDOME_ER(gPtr);

	if (entref == NULL) {
		*err = ERR_DATA_NOT_AN_ENTITYREF;
		return NULL;
	}

	*err = ERR_NO_ERROR;
	return entref;
	// }}}

}

public GdomeCharacterData *f77xml_Cache_getCharacterData(Cache *self, code c, error *err) {
	// {{{
	gpointer gPtr;
	GdomeCharacterData *cd;

	if (c == NullCode) {
		*err = ERR_NULL_CODE;
		return NULL;
	}

	gPtr = f77xml_Cache_queryPointer(self, c);
	
	if (!gPtr) {
		*err = ERR_NO_CACHE_HIT;
		return NULL;
	}	

	cd = GDOME_CD(gPtr);

	if (cd == NULL) {
		*err = ERR_DATA_NOT_AN_ENTITYREF;
		return NULL;
	}

	*err = ERR_NO_ERROR;
	return cd;
	// }}}

}

public GdomeEntity* f77xml_Cache_getEntity(Cache *self, code c, error *err) {
	// {{{
	gpointer gPtr;
	GdomeEntity *ent;

	if (c == NullCode) {
		*err = ERR_NULL_CODE;
		return NULL;
	}

	gPtr = f77xml_Cache_queryPointer(self, c);
	
	if (!gPtr) {
		*err = ERR_NO_CACHE_HIT;
		return NULL;
	}	

	ent = GDOME_ENT(gPtr);

	if (ent == NULL) {
		*err = ERR_DATA_NOT_AN_ENTITY;
		return NULL;
	}

	*err = ERR_NO_ERROR;
	return ent;
	// }}}

}

public GdomeComment *f77xml_Cache_getComment(Cache *self, code c, error *err) {
	// {{{
	gpointer gPtr;
	GdomeComment *comment;

	if (c == NullCode) {
		*err = ERR_NULL_CODE;
		return NULL;
	}

	gPtr = f77xml_Cache_queryPointer(self, c);
	
	if (!gPtr) {
		*err = ERR_NO_CACHE_HIT;
		return NULL;
	}	

	comment = GDOME_C(gPtr);

	if (comment == NULL) {
		*err = ERR_DATA_NOT_A_COMMENT;
		return NULL;
	}

	*err = ERR_NO_ERROR;
	return comment;
	// }}}

}

public GdomeDocumentFragment *f77xml_Cache_getDocumentFragment(Cache *self, code c, error *err) {
	// {{{
	gpointer gPtr;
	GdomeDocumentFragment *df;

	if (c == NullCode) {
		*err = ERR_NULL_CODE;
		return NULL;
	}

	gPtr = f77xml_Cache_queryPointer(self, c);
	
	if (!gPtr) {
		*err = ERR_NO_CACHE_HIT;
		return NULL;
	}	

	df = GDOME_DF(gPtr);

	if (df == NULL) {
		*err = ERR_DATA_NOT_A_DOCUMENTFRAGMENT;
		return NULL;
	}

	*err = ERR_NO_ERROR;
	return df;
	// }}}

}

public GdomeDocumentType *f77xml_Cache_getDocumentType(Cache *self, code c, error *err) {
	// {{{
	gpointer gPtr;
	GdomeDocumentType *dt;

	if (c == NullCode) {
		*err = ERR_NULL_CODE;
		return NULL;
	}

	gPtr = f77xml_Cache_queryPointer(self, c);
	
	if (!gPtr) {
		*err = ERR_NO_CACHE_HIT;
		return NULL;
	}	

	dt = GDOME_DT(gPtr);

	if (dt == NULL) {
		*err = ERR_DATA_NOT_A_DOCUMENTTYPE;
		return NULL;
	}

	*err = ERR_NO_ERROR;
	return dt;
	// }}}

}

public GdomeDOMString *f77xml_Cache_getDOMString(Cache *self, code c, error *err) {
	// {{{
	gpointer gPtr;

	if (c == NullCode) {
		*err = ERR_NULL_CODE;
		return NULL;
	}

	gPtr = f77xml_Cache_queryPointer(self, c);
	
	if (!gPtr) {
		*err = ERR_NO_CACHE_HIT;
		return NULL;
	}	

	if (f77xml_Cache_queryType(self,c) != Type_GdomeDOMString) {
		*err = ERR_DATA_NOT_A_STRING;
		return NULL;
	}

	*err = ERR_NO_ERROR;
	return (GdomeDOMString *)gPtr;
	// }}}

}

public GdomeDOMImplementation *f77xml_Cache_getDOMImplementation(Cache *self, code c, error *err) {
	// {{{
	gpointer gPtr;

	if (c == NullCode) {
		*err = ERR_NULL_CODE;
		return NULL;
	}

	gPtr = f77xml_Cache_queryPointer(self, c);
	
	if (!gPtr) {
		*err = ERR_NO_CACHE_HIT;
		return NULL;
	}	

	if (f77xml_Cache_queryType(self,c) != Type_GdomeDOMImplementation) {
		*err = ERR_DATA_NOT_A_DOMIMPLEMENTATION;
		return NULL;
	}

	*err = ERR_NO_ERROR;
	return (GdomeDOMImplementation *)gPtr;
	// }}}

}

public GdomeProcessingInstruction *f77xml_Cache_getProcessingInstruction(Cache *self, code c, error *err) {
	// {{{
	gpointer gPtr;
	GdomeProcessingInstruction *pi;

	if (c == NullCode) {
		*err = ERR_NULL_CODE;
		return NULL;
	}

	gPtr = f77xml_Cache_queryPointer(self, c);
	
	if (!gPtr) {
		*err = ERR_NO_CACHE_HIT;
		return NULL;
	}	

	pi = GDOME_PI(gPtr);

	if (pi == NULL) {
		*err = ERR_DATA_NOT_A_PROCESSINGINSTRUCTION;
		return NULL;
	}

	*err = ERR_NO_ERROR;
	return pi;
	// }}}

}



public GdomeAttr *f77xml_Cache_getAttr(Cache *self, code c, error *err) {
	// {{{
	gpointer gPtr;
	GdomeAttr *attr;

	if (c == NullCode) {
		*err = ERR_NULL_CODE;
		return NULL;
	}

	gPtr = f77xml_Cache_queryPointer(self, c);
	
	if (!gPtr) {
		*err = ERR_NO_CACHE_HIT;
		return NULL;
	}	

	attr = GDOME_A(gPtr);

	if (attr == NULL) {
		*err = ERR_DATA_NOT_AN_ATTR;
		return NULL;
	}

	*err = ERR_NO_ERROR;
	return attr;
	// }}}

}

public GdomeCDATASection *f77xml_Cache_getCDATASection(Cache *self, code c, error *err) {
	// {{{
	gpointer gPtr;
	GdomeCDATASection *cds;

	if (c == NullCode) {
		*err = ERR_NULL_CODE;
		return NULL;
	}

	gPtr = f77xml_Cache_queryPointer(self, c);
	
	if (!gPtr) {
		*err = ERR_NO_CACHE_HIT;
		return NULL;
	}	

	cds = GDOME_CDS(gPtr);

	if (cds == NULL) {
		*err = ERR_DATA_NOT_A_TEXT;
		return NULL;
	}

	*err = ERR_NO_ERROR;
	return cds;
	// }}}

}

public GdomeNotation *f77xml_Cache_getNotation(Cache *self, code c, error *err) {
	// {{{
	gpointer gPtr;
	GdomeNotation *not;

	if (c == NullCode) {
		*err = ERR_NULL_CODE;
		return NULL;
	}

	gPtr = f77xml_Cache_queryPointer(self, c);
	
	if (!gPtr) {
		*err = ERR_NO_CACHE_HIT;
		return NULL;
	}	

	not = GDOME_NOT(gPtr);

	if (not == NULL) {
		*err = ERR_DATA_NOT_A_TEXT;
		return NULL;
	}

	*err = ERR_NO_ERROR;
	return not;
	// }}}

}

public GdomeNodeList *f77xml_Cache_getNodeList(Cache *self, code c, error *err) {
	// {{{
	gpointer gPtr;

	if (c == NullCode) {
		*err = ERR_NULL_CODE;
		return NULL;
	}

	gPtr = f77xml_Cache_queryPointer(self, c);
	
	if (!gPtr) {
		*err = ERR_NO_CACHE_HIT;
		return NULL;
	}	

	if (f77xml_Cache_queryType(self,c) != Type_GdomeNodeList) {
		*err = ERR_DATA_NOT_A_NODELIST;
		return NULL;
	}

	*err = ERR_NO_ERROR;
	return (GdomeNodeList *)gPtr;
	// }}}

}

public GdomeNamedNodeMap *f77xml_Cache_getNamedNodeMap(Cache *self, code c, error *err) {
	// {{{
	gpointer gPtr;

	if (c == NullCode) {
		*err = ERR_NULL_CODE;
		return NULL;
	}

	gPtr = f77xml_Cache_queryPointer(self, c);
	
	if (!gPtr) {
		*err = ERR_NO_CACHE_HIT;
		return NULL;
	}	

	if (f77xml_Cache_queryType(self,c) != Type_GdomeNamedNodeMap) {
		*err = ERR_DATA_NOT_A_NAMEDNODEMAP;
		return NULL;
	}

	*err = ERR_NO_ERROR;
	return (GdomeNamedNodeMap *)gPtr;
	// }}}
}

public GdomeXPathEvaluator *f77xml_Cache_getXPathEvaluator(Cache *self, code c, error *err) {
	// {{{
	gpointer gPtr;

	if (c == NullCode) {
		*err = ERR_NULL_CODE;
		return NULL;
	}

	gPtr = f77xml_Cache_queryPointer(self, c);
	
	if (!gPtr) {
		*err = ERR_NO_CACHE_HIT;
		return NULL;
	}	

	if (f77xml_Cache_queryType(self,c) != Type_GdomeXPathEvaluator) {
		*err = ERR_DATA_NOT_A_XPATHEVALUATOR;
		return NULL;
	}

	*err = ERR_NO_ERROR;
	return (GdomeXPathEvaluator *)gPtr;
	// }}}

}

public GdomeXPathResult *f77xml_Cache_getXPathResult(Cache *self, code c, error *err) {
	// {{{ 
	gpointer gPtr;

	if (c == NullCode) {
		*err = ERR_NULL_CODE;
		return NULL;
	}

	gPtr = f77xml_Cache_queryPointer(self, c);
	
	if (!gPtr) {
		*err = ERR_NO_CACHE_HIT;
		return NULL;
	}	

	if (f77xml_Cache_queryType(self,c) != Type_GdomeXPathResult) {
		*err = ERR_DATA_NOT_A_XPATHRESULT;
		return NULL;
	}

	*err = ERR_NO_ERROR;
	return (GdomeXPathResult *)gPtr;
	// }}}

}

public GdomeXPathNSResolver *f77xml_Cache_getXPathNSResolver(Cache *self, code c, error *err) {
	// {{{ 
	gpointer gPtr;

	if (c == NullCode) {
		*err = ERR_NULL_CODE;
		return NULL;
	}

	gPtr = f77xml_Cache_queryPointer(self, c);
	
	if (!gPtr) {
		*err = ERR_NO_CACHE_HIT;
		return NULL;
	}	

	if (f77xml_Cache_queryType(self,c) != Type_GdomeXPathNSResolver) {
		*err = ERR_DATA_NOT_A_XPATHNSRESOLVER;
		return NULL;
	}

	*err = ERR_NO_ERROR;
	return (GdomeXPathNSResolver *)gPtr;
	// }}}

}

public void f77xml_Cache_removeNode(Cache *self, gpointer ptr) {
	 f77xml_Cache_removePointer(self, ptr, Type_GdomeNode);
}

public void f77xml_Cache_removeElement(Cache *self, gpointer ptr) {
	 f77xml_Cache_removePointer(self, ptr, Type_GdomeNode);
}

public void f77xml_Cache_removeDocument(Cache *self, gpointer ptr) {
	 f77xml_Cache_removePointer(self, ptr, Type_GdomeNode);
}

public void f77xml_Cache_removeText(Cache *self, gpointer ptr) {
	f77xml_Cache_removePointer(self, ptr, Type_GdomeNode);
}

public void f77xml_Cache_removeComment(Cache *self, gpointer ptr) {
	 f77xml_Cache_removePointer(self, ptr, Type_GdomeNode);
}

public void f77xml_Cache_removeEntityReference(Cache *self, gpointer ptr) {
	 f77xml_Cache_removePointer(self, ptr, Type_GdomeNode);
}

public void f77xml_Cache_removeEntity(Cache *self, gpointer ptr) {
	 f77xml_Cache_removePointer(self, ptr, Type_GdomeNode);
}

public void f77xml_Cache_removeCharacterData(Cache *self, gpointer ptr) {
	 f77xml_Cache_removePointer(self, ptr, Type_GdomeNode);
}

public void f77xml_Cache_removeProcessingInstruction(Cache *self, gpointer ptr) {
	 f77xml_Cache_removePointer(self, ptr, Type_GdomeNode);
}

public void f77xml_Cache_removeNotation(Cache *self, gpointer ptr) {
	 f77xml_Cache_removePointer(self, ptr, Type_GdomeNode);
}

public void f77xml_Cache_removeDocumentFragment(Cache *self, gpointer ptr) {
	 f77xml_Cache_removePointer(self, ptr, Type_GdomeNode);
}
public void f77xml_Cache_removeDocumentType(Cache *self, gpointer ptr) {
	 f77xml_Cache_removePointer(self, ptr, Type_GdomeNode);
}

public void f77xml_Cache_removeNodeList(Cache *self, gpointer ptr) {
	 f77xml_Cache_removePointer(self, ptr, Type_GdomeNodeList);
}

public void f77xml_Cache_removeNamedNodeMap(Cache *self, gpointer ptr) {
	 f77xml_Cache_removePointer(self, ptr, Type_GdomeNamedNodeMap);
}

public void f77xml_Cache_removeDOMString(Cache *self, gpointer ptr) {
	 f77xml_Cache_removePointer(self, ptr, Type_GdomeDOMString);
}

public void f77xml_Cache_removeAttr(Cache *self, gpointer ptr) {
	 f77xml_Cache_removePointer(self, ptr, Type_GdomeNode);
}

public void f77xml_Cache_removeDOMImplementation(Cache *self, gpointer ptr) {
	 f77xml_Cache_removePointer(self, ptr, Type_GdomeDOMImplementation);
}

public void f77xml_Cache_removeCDATASection(Cache *self, gpointer ptr) {
	 f77xml_Cache_removePointer(self, ptr, Type_GdomeNode);
}

public void f77xml_Cache_removeXPathEvaluator(Cache *self, gpointer ptr) {
	 f77xml_Cache_removePointer(self, ptr, Type_GdomeXPathEvaluator);
}

public void f77xml_Cache_removeXPathResult(Cache *self, gpointer ptr) {
	 f77xml_Cache_removePointer(self, ptr, Type_GdomeXPathResult);
}

public void f77xml_Cache_removeXPathNSResolver(Cache *self, gpointer ptr) {
	 f77xml_Cache_removePointer(self, ptr, Type_GdomeXPathNSResolver);
}

public void f77xml_Cache_dumpStatus(Cache *self) {
	/* {{{ */
	GList *current,*next;
	PointerRef *pRef;

	fprintf(stderr,"Begin cache dump\n");
	fprintf(stderr,"Cache current nextCode: %d\n",self->_nextCode);
#ifdef DEBUG
	fprintf(stderr,"global refcount = %d\n",self->_debug_globalRefCount);
#endif
	for ( current = g_list_first(self->_pointerList); current ; current = next) {
		next = g_list_next(current);
		pRef = (PointerRef *)current->data;
		f77xml_PointerRef_dumpStatus(pRef);
	}
	fprintf(stderr,"End cache dump\n");
	
	/* }}} */
}

/* THIS CODE IS TOTAL CRAP. encapsulation is screaming for vengeance.
   Martin will kill me. But hey, I need some reason to make people angry.
   They make me angry more often.
*/
public void f77xml_Cache_flush(Cache *self) {
	/* {{{ */
	GList *current,*next;
	PointerRef *pRef;
	GdomeException exc;

	for ( current = g_list_first(self->_pointerList); current ; current = next) {
		next = g_list_next(current);
		pRef = (PointerRef *)current->data;

		while (f77xml_PointerRef_getRefCount(pRef)) {
			fprintf(stderr,"refcount = %d\n",f77xml_PointerRef_getRefCount(pRef));
			fprintf(stderr,"type = %d\n",f77xml_PointerRef_getType(pRef));
			switch (f77xml_PointerRef_getType(pRef)) {
				case Type_GdomeNode:
						gdome_n_unref((GdomeNode *)f77xml_PointerRef_getPointer(pRef),&exc);
						break;
				case Type_GdomeDocument:
						gdome_doc_unref((GdomeDocument *)f77xml_PointerRef_getPointer(pRef),&exc);
						break;
				case Type_GdomeNodeList:
						gdome_nl_unref((GdomeNodeList *)f77xml_PointerRef_getPointer(pRef),&exc);
						break;
				case Type_GdomeNamedNodeMap:
						gdome_nnm_unref((GdomeNamedNodeMap *)f77xml_PointerRef_getPointer(pRef),&exc);
						break;
				case Type_GdomeDOMString:
						gdome_str_unref((GdomeDOMString *)f77xml_PointerRef_getPointer(pRef));
						break;
				case Type_GdomeDOMImplementation:
						gdome_di_unref((GdomeDOMImplementation *)f77xml_PointerRef_getPointer(pRef),&exc);
						break;
				case Type_GdomeXPathEvaluator:
						gdome_xpeval_unref((GdomeXPathEvaluator *)f77xml_PointerRef_getPointer(pRef),&exc);
						break;
				case Type_GdomeXPathResult:
						gdome_xpresult_unref((GdomeXPathResult *)f77xml_PointerRef_getPointer(pRef),&exc);
						break;
				case Type_GdomeXPathNSResolver:
						gdome_xpnsresolv_unref((GdomeXPathNSResolver *)f77xml_PointerRef_getPointer(pRef),&exc);
						break;
				default: /* aargh! */
					fprintf(stderr,"unknown type %d in Cache_flush",f77xml_PointerRef_getType(pRef));
			}
#ifdef DEBUG
			self->_debug_globalRefCount--;
#endif
			f77xml_PointerRef_decRefCount(pRef);
		}
		self->_pointerList = g_list_remove_link(self->_pointerList, current);
		g_list_free_1(current);
		
		f77xml_PointerRef_delete(pRef);
	}
	
	/* }}} */
}

/* private */

private code f77xml_Cache_addPointer(Cache *self, gpointer ptr, PointerType type) {
	/* {{{ */
	PointerRef *pRef;
	PointerType t;
	int c;

	pRef = f77xml_Cache_gpointerToPointerRef(self,ptr);
	
	if (!pRef) {
		c = f77xml_Cache_getNewCode(self);
		pRef = f77xml_PointerRef_new(c,ptr,type);
		self->_pointerList = g_list_append(self->_pointerList,(gpointer)pRef);
	} else {
		c = f77xml_PointerRef_getCode(pRef);
		assert(f77xml_PointerRef_getType(pRef) == type); 
		f77xml_PointerRef_incRefCount(pRef);
	}
#ifdef DEBUG
	self->_debug_globalRefCount++;
#endif
	return c;
	/* }}} */
}

public void f77xml_Cache_removePointer(Cache *self, gpointer ptr, PointerType type) {
	/* {{{ */
	GList *current,*next;
	PointerRef *pRef;
	
	pRef = f77xml_Cache_gpointerToPointerRef(self,ptr);
	assert(pRef != NULL);
	assert(f77xml_PointerRef_getType(pRef) == type); 
	f77xml_PointerRef_decRefCount(pRef);
#ifdef DEBUG
	self->_debug_globalRefCount--;
#endif

	if (f77xml_PointerRef_getRefCount(pRef) == 0) {
		// remove from list
		for (current = g_list_first(self->_pointerList); current ; current = next) {
			next = g_list_next(current);

			if (current->data == pRef) {
				self->_pointerList = g_list_remove_link(self->_pointerList, current);
				g_list_free_1(current);
				break;
			}
		}
		
		f77xml_PointerRef_delete(pRef);
	}
	/* }}} */
}

private code f77xml_Cache_getNewCode(Cache *self) {
	/* {{{ */
	return (self->_nextCode++);
	/* }}} */
}

private PointerRef *f77xml_Cache_codeToPointerRef(Cache *self, code c) {
	/* {{{ */
	GList *current,*next;
	PointerRef *pRef;

	for ( current = g_list_first(self->_pointerList); current ; current = next) {
		next = g_list_next(current);
		pRef = (PointerRef *)current->data;
		
		if (f77xml_PointerRef_getCode(pRef) == c) return pRef;
	}
	
	return NULL;
	/* }}} */
}

private PointerRef *f77xml_Cache_gpointerToPointerRef(Cache *self, gpointer ptr) {
	/* {{{ */
	GList *current,*next;
	PointerRef *pRef;

	for ( current = g_list_first(self->_pointerList); current ; current = next) {
		next = g_list_next(current);
		pRef = (PointerRef *)current->data;
		
		if (f77xml_PointerRef_getPointer(pRef) == ptr) return pRef;
	}
	
	return NULL;
	/* }}} */
}

private gpointer f77xml_Cache_queryPointer(Cache *self, code c) {
	/* {{{ */
	PointerRef *pRef;
	
	pRef = f77xml_Cache_codeToPointerRef(self,c);
	
	if (pRef) return f77xml_PointerRef_getPointer(pRef);
	else return NULL;
	/* }}} */
}

private code f77xml_Cache_queryCode(Cache *self, gpointer ptr) {
	/* {{{ */ 
	PointerRef *pRef;
	
	pRef = f77xml_Cache_gpointerToPointerRef(self,ptr);
	
	if (pRef) return f77xml_PointerRef_getCode(pRef);
	else return NullCode;
	/* }}} */
}

private PointerType f77xml_Cache_queryType(Cache *self, code c) {
	/* {{{ */
	PointerRef *pRef;
	
	pRef = f77xml_Cache_codeToPointerRef(self,c);
	
	if (pRef) return f77xml_PointerRef_getType(pRef);
	else return Type_None; 
	/* }}} */
}
