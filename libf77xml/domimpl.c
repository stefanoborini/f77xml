#include <domimpl.h>

static DomImpl *_instance = NULL;


private DomImpl *f77xml_DomImpl_new() {
	DomImpl *di;
	
	di = (DomImpl *)malloc(sizeof(DomImpl));
	di->_domImpl = gdome_di_mkref();
	di->_cache = f77xml_Cache_new();

	return di;

}

public DomImpl *f77xml_DomImpl_instance() {
	if (!_instance) _instance = f77xml_DomImpl_new();

	return _instance;
}


public void f77xml_DomImpl_delete(DomImpl *self) {
	GdomeException exc;

	f77xml_Cache_delete(self->_cache);
	gdome_di_unref(self->_domImpl,&exc);

	free(self);

}


public Cache *f77xml_DomImpl_getCache(DomImpl *self) { return self->_cache; }
public GdomeDOMImplementation *f77xml_DomImpl_getDomImplementation(DomImpl *self) { return self->_domImpl; }
