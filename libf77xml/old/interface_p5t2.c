
#include <assert.h>

void f77xml__str_toFortran(bool *o_bool,
								code *i_code,
								string *o_string,
								unsigned int *i_offset,
								error *o_err) {

	unsigned int len,off;

	GdomeDOMString *str;
	GdomeException exc;
	DomImpl *di;
	Cache *cache;
	
	di = f77xml_DomImpl_instance();
	cache = f77xml_DomImpl_getCache(di);

	*o_err = ERR_NEVER_RETURN_THIS;
	*o_bool = true;
	
	str = f77xml_Cache_getDOMString(cache, *i_code, o_err);
	if (str == NULL) return;

	len = gdome_str_length(str);
	off = *i_offset;

	if (off >= len) off = len;

	f77xml_StringObj_set(o_string, str->str+off);
	
	if (f77xml_StringObj_size(o_string)+off < len) *o_bool = false;
	else *o_bool = true;

}



