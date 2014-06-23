#ifndef DOMIMPL_H
#define DOMIMPL_H

#include <gdome.h>
#include "cache.h"
#include "stringobj.h"


typedef struct DomImpl {
	Cache *_cache;
	GdomeDOMImplementation *_domImpl;
} DomImpl;

public DomImpl *f77xml_DomImpl_instance();

public void f77xml_DomImpl_delete(DomImpl *self);

public GdomeDocument *f77xml_DomImpl_parseFile(DomImpl *self, StringObj *filename, error *err);
public void f77xml_DomImpl_saveToFile(DomImpl *self, GdomeDocument *doc, StringObj *filename, error *err);
public Cache *f77xml_DomImpl_getCache(DomImpl *self);
public GdomeDOMImplementation *f77xml_DomImpl_getDomImplementation(DomImpl *self);

#endif
