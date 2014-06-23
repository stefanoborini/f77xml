#include <stdio.h>
#include <gdome.h>
#include <assert.h>

#include "defines.h"
#include "pointerref.h"


public PointerRef *f77xml_PointerRef_new(code c, gpointer ptr, PointerType type) {
	PointerRef *pRef = (PointerRef *)malloc(sizeof(PointerRef));

	pRef->_code = c;
	pRef->_pointer = ptr;
	pRef->_type = type;
	pRef->_refNum = 1;
	return pRef;

}

public void f77xml_PointerRef_delete(PointerRef *self) {

	assert(self->_refNum == 0);
	free(self);

}

public code f77xml_PointerRef_getCode(PointerRef *self) {
	return self->_code;
}

public gpointer f77xml_PointerRef_getPointer(PointerRef *self) {
	return self->_pointer;
}

public PointerType f77xml_PointerRef_getType(PointerRef *self) {
	return self->_type;
}

public void f77xml_PointerRef_incRefCount(PointerRef *self) {
	self->_refNum++;
}

public void f77xml_PointerRef_decRefCount(PointerRef *self) {
	self->_refNum--;
}

public unsigned int f77xml_PointerRef_getRefCount(PointerRef *self) {
	return self->_refNum;
}

public void f77xml_PointerRef_dumpStatus(PointerRef *self) {

	fprintf(stderr,"PointerRef code %d, pointer %x, type %d, count %d\n",
			f77xml_PointerRef_getCode(self),
			f77xml_PointerRef_getPointer(self),
			f77xml_PointerRef_getType(self),
			f77xml_PointerRef_getRefCount(self));
}



/* private */

