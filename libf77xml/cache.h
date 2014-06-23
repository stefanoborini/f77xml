#ifndef CACHE_H
#define CACHE_H

#include <glib.h>
#include "defines.h"
#include "pointerref.h"

typedef struct Cache {
	code _nextCode;
	GList *_pointerList;
#ifdef DEBUG
	unsigned int _debug_globalRefCount;
#endif
} Cache;

public Cache *			f77xml_Cache_instance();

/* add a pointer to the cache, with the specified type.
 * Return a code for retrieval, that will be used at fortran level
 */
public code 		f77xml_Cache_addNode(Cache *self, gpointer pointer);
public code 		f77xml_Cache_addElement(Cache *self, gpointer pointer);
public code 		f77xml_Cache_addText(Cache *self, gpointer pointer);
public code 		f77xml_Cache_addEntityReference(Cache *self, gpointer pointer);
public code 		f77xml_Cache_addEntity(Cache *self, gpointer pointer);
public code 		f77xml_Cache_addComment(Cache *self, gpointer pointer);
public code 		f77xml_Cache_addDocument(Cache *self, gpointer pointer);
public code			f77xml_Cache_addNodeList(Cache *self, gpointer pointer);
public code			f77xml_Cache_addNamedNodeMap(Cache *self, gpointer pointer);
public code			f77xml_Cache_addDOMString(Cache *self, gpointer pointer);
public code			f77xml_Cache_addAttr(Cache *self, gpointer pointer);
public code			f77xml_Cache_addCDATASection(Cache *self, gpointer pointer);
public code			f77xml_Cache_addProcessingInstruction(Cache *self, gpointer pointer);
public code			f77xml_Cache_addNotation(Cache *self, gpointer pointer);
public code			f77xml_Cache_addDocumentFragment(Cache *self, gpointer pointer);
public code			f77xml_Cache_addDocumentType(Cache *self, gpointer pointer);
public code			f77xml_Cache_addCharacterData(Cache *self, gpointer pointer);
public code			f77xml_Cache_addDOMImplementation(Cache *self, gpointer pointer);
public code			f77xml_Cache_addXPathEvaluator(Cache *self,gpointer pointer);
public code			f77xml_Cache_addXPathResult(Cache *self,gpointer pointer);
public code			f77xml_Cache_addXPathNSResolver(Cache *self,gpointer pointer);

public GdomeNode *				f77xml_Cache_getNode(Cache *self, code c, error *e);
public GdomeElement *			f77xml_Cache_getElement(Cache *self, code c, error *e);
public GdomeText *				f77xml_Cache_getText(Cache *self, code c, error *e);
public GdomeEntityReference *	f77xml_Cache_getEntityReference(Cache *self, code c, error *e);
public GdomeEntity *			f77xml_Cache_getEntity(Cache *self, code c, error *e);
public GdomeComment *			f77xml_Cache_getComment(Cache *self, code c, error *e);
public GdomeDocument *			f77xml_Cache_getDocument(Cache *self, code c, error *e);
public GdomeNodeList *			f77xml_Cache_getNodeList(Cache *self, code c, error *e);
public GdomeNamedNodeMap *		f77xml_Cache_getNamedNodeMap(Cache *self, code c, error *e);
public GdomeDOMString *			f77xml_Cache_getDOMString(Cache *self, code c, error *e);
public GdomeAttr *				f77xml_Cache_getAttr(Cache *self, code c, error *e);
public GdomeCDATASection *		f77xml_Cache_getCDATASection(Cache *self, code c, error *e);
public GdomeProcessingInstruction *f77xml_Cache_getProcessingInstruction(Cache *self, code c, error *e);
public GdomeNotation *			f77xml_Cache_getNotation(Cache *self, code c, error *e);
public GdomeDocumentFragment *	f77xml_Cache_getDocumentFragment(Cache *self, code c, error *e);
public GdomeDocumentType *		f77xml_Cache_getDocumentType(Cache *self, code c, error *e);
public GdomeCharacterData *		f77xml_Cache_getCharacterData(Cache *self, code c, error *e);
public GdomeDOMImplementation *	f77xml_Cache_getDOMImplementation(Cache *self, code c, error *e);
public GdomeXPathEvaluator *	f77xml_Cache_getXPathEvaluator(Cache *self, code c, error *e);
public GdomeXPathResult *		f77xml_Cache_getXPathResult(Cache *self, code c, error *e);
public GdomeXPathNSResolver *	f77xml_Cache_getXPathNSResolver(Cache *self,code c, error *e);

public void 		f77xml_Cache_removeNode(Cache *self, gpointer pointer);
public void 		f77xml_Cache_removeElement(Cache *self, gpointer pointer);
public void 		f77xml_Cache_removeText(Cache *self, gpointer pointer);
public void 		f77xml_Cache_removeEntityReference(Cache *self, gpointer pointer);
public void 		f77xml_Cache_removeEntity(Cache *self, gpointer pointer);
public void 		f77xml_Cache_removeComment(Cache *self, gpointer pointer);
public void 		f77xml_Cache_removeDocument(Cache *self, gpointer pointer);
public void			f77xml_Cache_removeNodeList(Cache *self, gpointer pointer);
public void			f77xml_Cache_removeNamedNodeMap(Cache *self, gpointer pointer);
public void			f77xml_Cache_removeDOMString(Cache *self, gpointer pointer);
public void			f77xml_Cache_removeAttr(Cache *self, gpointer pointer);
public void			f77xml_Cache_removeCDATASection(Cache *self, gpointer pointer);
public void			f77xml_Cache_removeProcessingInstruction(Cache *self, gpointer pointer);
public void			f77xml_Cache_removeNotation(Cache *self, gpointer pointer);
public void			f77xml_Cache_removeDocumentFragment(Cache *self, gpointer pointer);
public void			f77xml_Cache_removeDocumentType(Cache *self, gpointer pointer);
public void			f77xml_Cache_removeCharacterData(Cache *self, gpointer pointer);
public void			f77xml_Cache_removeDOMImplementation(Cache *self, gpointer pointer);
public void			f77xml_Cache_removeXPathEvaluator(Cache *self,gpointer pointer);
public void			f77xml_Cache_removeXPathResult(Cache *self,gpointer pointer);
public void			f77xml_Cache_removeXPathNSResolver(Cache *self,gpointer pointer);

/* the size, that is, the number of elements in the cache */
public unsigned int 		f77xml_Cache_size(Cache *self);

/* for debugging purposes */
public void 		f77xml_Cache_dumpStatus(Cache *self); 

#endif
