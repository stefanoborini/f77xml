#include "stringobj.h"

StringObj *f77xml_StringObj_new(unsigned int maxlen) {
	StringObj *str;

	str = (struct StringObj *)malloc(sizeof(struct StringObj));
	str->str = (char *)malloc((maxlen+1)*sizeof(char));
	bzero(str->str, maxlen+1);
	str->maxlen = maxlen;

	return str;
}

void f77xml_StringObj_delete(StringObj *self) {
	
	free (self->str);
	free (self);
}

void f77xml_StringObj_set(StringObj *self, const char *s) {

	bzero(self->str, self->maxlen+1);
	strncpy(self->str, s, self->maxlen);

	self->str[self->maxlen]=0;

}

void f77xml_StringObj_trim(StringObj *self) {

	char *ptr;
	ptr = self->str;
	ptr += (self->maxlen-1);
	
	while (*ptr == ' ') { *ptr = 0; ptr--; }
	
}	
	
void f77xml_StringObj_untrim(StringObj *self) {

	char *ptr = self->str;
	
	while (*ptr) ptr++;

	while (ptr != self->str+self->maxlen) { *ptr=' '; ptr++; } 
	
}	

void f77xml_StringObj_clear(StringObj *self) {
	bzero(self->str, self->maxlen+1);
}

unsigned int f77xml_StringObj_size(StringObj *self) {
	return self->maxlen;
}

