#ifndef POINTERREF_H
#define POINTERREF_H

#include <glib.h>

/* The types of data we need to cope with
 * We need this classification to deal with different
 * destructors, and also to get the type of data when
 * we extract it from the cache. This could be a problem,
 * since an Element is also a Node. The magic keywork
 * inheritance is written in the language of Mordor,
 * and i won't utter here.
 *
 * Update (6 Apr 2004): probably we don't need all this
 * artifacts, since gdome is able to understand the type
 * given the pointer to a domnode. in the same way, we
 * probably don't need to use specific destructors, but we
 * can use the virtualized destructor for GdomeNode type.
 * This could be a problem if our cache can hold non-Node
 * derived types.
 *
 * Update (21 Apr 2004): each node can be freed with the
 * node destructor (in OO language, the destructor is
 * virtual). We need to distinguish between Node, 
 * NodeLists and other object which belong to different
 * inheritance trees.
 * 
 */

typedef enum PointerType {
	Type_None,
	Type_GdomeNode,
	Type_GdomeDocument,
	Type_GdomeNodeList,
	Type_GdomeNamedNodeMap,
	Type_GdomeDOMString,
	Type_GdomeDOMImplementation,
	Type_GdomeXPathEvaluator,
	Type_GdomeXPathResult,
	Type_GdomeXPathNSResolver
} PointerType;


/* a pointer ref holds a generic pointer (as provided by gdome2)
 * and the Type it belongs to. For cache lookup, also a code is
 * provided. This code is the reference we use from f77 to deal with
 * objects on this side of the world.
 */
typedef struct PointerRef {
	code _code;
	gpointer _pointer;
	PointerType _type;
	unsigned int _refNum;
} PointerRef;


public PointerRef *			f77xml_PointerRef_new(code c, gpointer ptr, PointerType type);
public void 				f77xml_PointerRef_delete(PointerRef *self);

public code 				f77xml_PointerRef_getCode(PointerRef *self);
public gpointer 			f77xml_PointerRef_getPointer(PointerRef *self);
public PointerType 			f77xml_PointerRef_getType(PointerRef *self);
public void					f77xml_PointerRef_incRefCount(PointerRef *self);
public void 				f77xml_PointerRef_decRefCount(PointerRef *self);
public unsigned int 		f77xml_PointerRef_getRefCount(PointerRef *self);
public void					f77xml_PointerRef_dumpStatus(PointerRef *self);


#endif
