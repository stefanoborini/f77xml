#include <stdio.h>
#include <config.h>

#include "defines.h"
#include "stringobj.h"


void f77xml_p2t1_preMultiplexer(code *ret, const char *funcName,
						error *err,
						unsigned int funcName_len) {
	StringObj *funcNameString = f77xml_StringObj_new(funcName_len);
	f77xml_StringObj_set(funcNameString,funcName);
	f77xml_StringObj_trim(funcNameString);

	f77xml_p2t1_multiplexer(ret, funcNameString, err);

	f77xml_StringObj_delete(funcNameString);
}

void f77xml_p3t1_preMultiplexer(code *ret, const char *funcName,
						code *code1,
						error *err,
						unsigned int funcName_len) {
	StringObj *funcNameString = f77xml_StringObj_new(funcName_len);
	f77xml_StringObj_set(funcNameString,funcName);
	f77xml_StringObj_trim(funcNameString);

	f77xml_p3t1_multiplexer(ret, funcNameString, code1, err);

	f77xml_StringObj_delete(funcNameString);
}

void f77xml_p3t2_preMultiplexer(code *ret,
				const char *funcName, 
				char *str1,
				error *err,
				unsigned int funcName_len,
				unsigned int str1_len) {
	StringObj *funcNameString,*str1String;
	
	funcNameString = f77xml_StringObj_new(funcName_len);
	f77xml_StringObj_set(funcNameString,funcName);
	f77xml_StringObj_trim(funcNameString);

	str1String = f77xml_StringObj_new(str1_len);
	f77xml_StringObj_set(str1String,str1);
	f77xml_StringObj_trim(str1String);

	f77xml_p3t2_multiplexer(ret, funcNameString, str1String, err);

	memmove(str1, str1String->str, str1_len);

	f77xml_StringObj_delete(funcNameString);
	f77xml_StringObj_delete(str1String);

}

void f77xml_p3t3_preMultiplexer(unsigned int *ret,
				const char *funcName,
				code *code1,
				error *err,
				unsigned int funcName_len) {
	StringObj *funcNameString = f77xml_StringObj_new(funcName_len);
	f77xml_StringObj_set(funcNameString,funcName);
	f77xml_StringObj_trim(funcNameString);

	f77xml_p3t3_multiplexer(ret, funcNameString, code1, err);

	f77xml_StringObj_delete(funcNameString);
}

void f77xml_p3t4_preMultiplexer(bool *ret,
				const char *funcName,
				code *code1,
				error *err,
				unsigned int funcName_len) {
	StringObj *funcNameString = f77xml_StringObj_new(funcName_len);
	f77xml_StringObj_set(funcNameString,funcName);
	f77xml_StringObj_trim(funcNameString);

	f77xml_p3t4_multiplexer(ret, funcNameString, code1, err);

	f77xml_StringObj_delete(funcNameString);
}

void f77xml_p4t1_preMultiplexer(code *ret, 
				const char *funcName,
				code *code1, 
				code *code2, 
				error *err,
				unsigned int funcName_len) {
	StringObj *funcNameString;
	
	funcNameString = f77xml_StringObj_new(funcName_len);
	f77xml_StringObj_set(funcNameString,funcName);
	f77xml_StringObj_trim(funcNameString);

	f77xml_p4t1_multiplexer(ret, funcNameString, code1, code2, err);

	f77xml_StringObj_delete(funcNameString);

}

void f77xml_p4t2_preMultiplexer(code *ret, 
				const char *funcName,
				code *code1, 
				unsigned int *uint1, 
				error *err,
				unsigned int funcName_len) {
	StringObj *funcNameString;
	
	funcNameString = f77xml_StringObj_new(funcName_len);
	f77xml_StringObj_set(funcNameString,funcName);
	f77xml_StringObj_trim(funcNameString);

	f77xml_p4t2_multiplexer(ret, funcNameString, code1, uint1, err);
	
	f77xml_StringObj_delete(funcNameString);

}

void f77xml_p4t3_preMultiplexer(bool *ret,
				const char *funcName,
				code *code1,
				code *code2,
				error *err,
				unsigned int funcName_len) {
	StringObj *funcNameString = f77xml_StringObj_new(funcName_len);
	f77xml_StringObj_set(funcNameString,funcName);
	f77xml_StringObj_trim(funcNameString);

	f77xml_p4t3_multiplexer(ret, funcNameString, code1, code2, err);

	f77xml_StringObj_delete(funcNameString);
}

void f77xml_p4t4_preMultiplexer(code *ret,
				const char *funcName,
				code *code1,
				bool *bool1,
				error *err,
				unsigned int funcName_len) {
	StringObj *funcNameString = f77xml_StringObj_new(funcName_len);
	f77xml_StringObj_set(funcNameString,funcName);
	f77xml_StringObj_trim(funcNameString);

	f77xml_p4t4_multiplexer(ret, funcNameString, code1, bool1, err);

	f77xml_StringObj_delete(funcNameString);
}

void f77xml_p4t5_preMultiplexer(bool *ret,
				const char *funcName,
				code *code1,
				char *str1,
				error *err,
				unsigned int funcName_len,
				unsigned int str1_len) {
	StringObj *funcNameString, *str1String;
	
	funcNameString = f77xml_StringObj_new(funcName_len);
	f77xml_StringObj_set(funcNameString,funcName);
	f77xml_StringObj_trim(funcNameString);

	str1String = f77xml_StringObj_new(str1_len);
	f77xml_StringObj_set(str1String,str1);
	f77xml_StringObj_trim(str1String);

	f77xml_p4t5_multiplexer(ret, funcNameString, code1, str1String, err);

	f77xml_StringObj_untrim(str1String);
	memmove(str1, str1String->str, str1_len);

	f77xml_StringObj_delete(funcNameString);
	f77xml_StringObj_delete(str1String);
}



void f77xml_p5t1_preMultiplexer(code *ret, 
				const char *funcName,
				code *code1, 
				code *code2, 
				code *code3, 
				error *err,
				unsigned int funcName_len) {
	StringObj *funcNameString;
	
	funcNameString = f77xml_StringObj_new(funcName_len);
	f77xml_StringObj_set(funcNameString,funcName);
	f77xml_StringObj_trim(funcNameString);

	f77xml_p5t1_multiplexer(ret, funcNameString, code1, code2, code3, err);

	f77xml_StringObj_delete(funcNameString);

}

void f77xml_p5t2_preMultiplexer(bool *ret, 
				const char *funcName,
				code *code1, 
				char *str1, 
				unsigned int *uint1, 
				error *err,
				unsigned int funcName_len,
				unsigned int str1_len) {
	StringObj *funcNameString,*str1String;
	
	funcNameString = f77xml_StringObj_new(funcName_len);
	f77xml_StringObj_set(funcNameString,funcName);
	f77xml_StringObj_trim(funcNameString);

	str1String = f77xml_StringObj_new(str1_len);
	f77xml_StringObj_set(str1String,str1);
	f77xml_StringObj_trim(str1String);

	f77xml_p5t2_multiplexer(ret, funcNameString, code1, str1String, uint1, err);

	f77xml_StringObj_untrim(str1String);
	
	memmove(str1, str1String->str, str1_len);

	f77xml_StringObj_delete(funcNameString);
	f77xml_StringObj_delete(str1String);

}

void f77xml_p5t3_preMultiplexer(bool *ret, 
				const char *funcName,
				code *code1, 
				code *code2, 
				code *code3, 
				error *err,
				unsigned int funcName_len) {
	StringObj *funcNameString;
	
	funcNameString = f77xml_StringObj_new(funcName_len);
	f77xml_StringObj_set(funcNameString,funcName);
	f77xml_StringObj_trim(funcNameString);

	f77xml_p5t3_multiplexer(ret, funcNameString, code1, code2, code3, err);

	f77xml_StringObj_delete(funcNameString);

}

void f77xml_p5t4_preMultiplexer(code *ret, 
				const char *funcName,
				code *code1, 
				unsigned int *uint1, 
				unsigned int *uint2, 
				error *err,
				unsigned int funcName_len) {
	StringObj *funcNameString;
	
	funcNameString = f77xml_StringObj_new(funcName_len);
	f77xml_StringObj_set(funcNameString,funcName);
	f77xml_StringObj_trim(funcNameString);

	f77xml_p5t4_multiplexer(ret, funcNameString, code1, uint1, uint2, err);

	f77xml_StringObj_delete(funcNameString);

}

void f77xml_p5t5_preMultiplexer(code *ret, 
				const char *funcName,
				code *code1, 
				char *str1, 
				unsigned int *uint1, 
				error *err,
				unsigned int funcName_len,
				unsigned int str1_len) {
	StringObj *funcNameString,*str1String;
	
	funcNameString = f77xml_StringObj_new(funcName_len);
	f77xml_StringObj_set(funcNameString,funcName);
	f77xml_StringObj_trim(funcNameString);

	str1String = f77xml_StringObj_new(str1_len);
	f77xml_StringObj_set(str1String,str1);
	f77xml_StringObj_trim(str1String);

	f77xml_p5t5_multiplexer(ret, funcNameString, code1, str1String, uint1, err);

	f77xml_StringObj_untrim(str1String);
	
	memmove(str1, str1String->str, str1_len);

	f77xml_StringObj_delete(funcNameString);
	f77xml_StringObj_delete(str1String);

}

void f77xml_p5t6_preMultiplexer(code *ret, 
				const char *funcName,
				code *code1, 
				unsigned int *uint1, 
				code *code2, 
				error *err,
				unsigned int funcName_len) {
	StringObj *funcNameString;
	
	funcNameString = f77xml_StringObj_new(funcName_len);
	f77xml_StringObj_set(funcNameString,funcName);
	f77xml_StringObj_trim(funcNameString);

	f77xml_p5t6_multiplexer(ret, funcNameString, code1, uint1, code2, err);

	f77xml_StringObj_delete(funcNameString);

}

void f77xml_p5t7_preMultiplexer(code *ret, 
				const char *funcName,
				code *code1, 
				code *code2, 
				bool *bool1,
				error *err,
				unsigned int funcName_len) {
	StringObj *funcNameString;
	
	funcNameString = f77xml_StringObj_new(funcName_len);
	f77xml_StringObj_set(funcNameString,funcName);
	f77xml_StringObj_trim(funcNameString);

	f77xml_p5t7_multiplexer(ret, funcNameString, code1, code2, bool1, err);

	f77xml_StringObj_delete(funcNameString);

}


void f77xml_p6t1_preMultiplexer(bool *ret, 
				const char *funcName,
				code *code1, 
				code *code2, 
				code *code3, 
				code *code4, 
				error *err,
				unsigned int funcName_len) {
	StringObj *funcNameString;
	
	funcNameString = f77xml_StringObj_new(funcName_len);
	f77xml_StringObj_set(funcNameString,funcName);
	f77xml_StringObj_trim(funcNameString);

	f77xml_p6t1_multiplexer(ret, funcNameString, code1, code2, code3, code4, err);

	f77xml_StringObj_delete(funcNameString);

}


void f77xml_p6t2_preMultiplexer(bool *ret, 
				const char *funcName,
				code *code1, 
				code *code2, 
				char *str1, 
				unsigned int *uint1, 
				error *err,
				unsigned int funcName_len,
				unsigned int str1_len) {
	StringObj *funcNameString,*str1String;
	
	funcNameString = f77xml_StringObj_new(funcName_len);
	f77xml_StringObj_set(funcNameString,funcName);
	f77xml_StringObj_trim(funcNameString);

	str1String = f77xml_StringObj_new(str1_len);
	f77xml_StringObj_set(str1String,str1);
	f77xml_StringObj_trim(str1String);

	f77xml_p6t2_multiplexer(ret, funcNameString, code1, code2, str1String, uint1, err);

	memmove(str1, str1String->str, str1_len);

	f77xml_StringObj_delete(funcNameString);
	f77xml_StringObj_delete(str1String);

}

void f77xml_p6t3_preMultiplexer(code *ret, 
				const char *funcName,
				code *code1, 
				unsigned int *uint1, 
				unsigned int *uint2, 
				code *code2, 
				error *err,
				unsigned int funcName_len) {
	StringObj *funcNameString;
	
	funcNameString = f77xml_StringObj_new(funcName_len);
	f77xml_StringObj_set(funcNameString,funcName);
	f77xml_StringObj_trim(funcNameString);

	f77xml_p6t3_multiplexer(ret, funcNameString, code1, uint1, uint2, code2, err);

	f77xml_StringObj_delete(funcNameString);

}

void f77xml_p8t1_preMultiplexer(code *ret, 
				const char *funcName,
				code *code1, 
				code *code2, 
				code *code3, 
				code *code4, 
				unsigned int *uint1, 
				code *code5, 
				error *err,
				unsigned int funcName_len) {
	StringObj *funcNameString;
	
	funcNameString = f77xml_StringObj_new(funcName_len);
	f77xml_StringObj_set(funcNameString,funcName);
	f77xml_StringObj_trim(funcNameString);

	f77xml_p8t1_multiplexer(ret, funcNameString, code1, code2, code3, code4, uint1, code5, err);

	f77xml_StringObj_delete(funcNameString);

}
