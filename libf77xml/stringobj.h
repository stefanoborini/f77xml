#ifndef STRINGOBJ_H
#define STRINGOBJ_H

typedef struct StringObj {
	char *str;
	unsigned int maxlen;
} StringObj;

StringObj *f77xml_StringObj_new(unsigned int maxlen);
void f77xml_StringObj_delete(StringObj *self);
void f77xml_StringObj_set(StringObj *self,const char *s);
void f77xml_StringObj_clear(StringObj *self);
void f77xml_StringObj_trim(StringObj *self);
void f77xml_StringObj_untrim(StringObj *self);
unsigned int f77xml_StringObj_size(StringObj *self);

#endif
