/* F77 interface */
#include <unistd.h>

#include "defines.h"
#include "stringobj.h"
#include "f77backend.h"


#if defined(_IBMR2)
void xp2t1(code *ret, const char *funcName, error *err, unsigned int funcName_len) {
#else
void xp2t1_(code *ret, const char *funcName, error *err, unsigned int funcName_len) {
#endif
	f77xml_p2t1_preMultiplexer(ret,funcName, err, funcName_len);
}

#if defined(_IBMR2)
void xp3t1(code *ret, const char *funcName, code *code1, error *err, unsigned int funcName_len) {
#else
void xp3t1_(code *ret, const char *funcName, code *code1, error *err, unsigned int funcName_len) {
#endif
	f77xml_p3t1_preMultiplexer(ret,funcName, code1, err, funcName_len);
}

#if defined(_IBMR2)
void xp3t2(code *ret, const char *funcName, const char *str1, error *err, unsigned int funcName_len, unsigned int str1_len) {
#else
void xp3t2_(code *ret, const char *funcName, const char *str1, error *err, unsigned int funcName_len, unsigned int str1_len) {
#endif
	f77xml_p3t2_preMultiplexer(ret, funcName, str1, err, funcName_len, str1_len);
}

#if defined(_IBMR2)
void xp3t3(unsigned int *ret, const char *funcName, code *code1, error *err, unsigned int funcName_len) {
#else
void xp3t3_(unsigned int *ret, const char *funcName, code *code1, error *err, unsigned int funcName_len) {
#endif
	f77xml_p3t3_preMultiplexer(ret,funcName, code1, err, funcName_len);
}

#if defined(_IBMR2)
void xp3t4(bool *ret, const char *funcName, code *code1, error *err, unsigned int funcName_len) {
#else
void xp3t4_(bool *ret, const char *funcName, code *code1, error *err, unsigned int funcName_len) {
#endif

	f77xml_p3t4_preMultiplexer(ret,funcName, code1, err, funcName_len);
}

#if defined(_IBMR2)
void xp4t1(code *ret, const char *funcName, code *code1, code *code2, error *err, unsigned int funcName_len) {
#else
void xp4t1_(code *ret, const char *funcName, code *code1, code *code2, error *err, unsigned int funcName_len) {
#endif
	f77xml_p4t1_preMultiplexer(ret, funcName, code1, code2, err, funcName_len);
}

#if defined(_IBMR2)
void xp4t2(code *ret, const char *funcName, code *code1, unsigned int *uint1, error *err, unsigned int funcName_len) {
#else
void xp4t2_(code *ret, const char *funcName, code *code1, unsigned int *uint1, error *err, unsigned int funcName_len) {
#endif
	f77xml_p4t2_preMultiplexer(ret, funcName, code1, uint1, err, funcName_len);
}

#if defined(_IBMR2)
void xp4t3(bool *ret, const char *funcName, code *code1, code *code2, error *err, unsigned int funcName_len) {
#else
void xp4t3_(bool *ret, const char *funcName, code *code1, code *code2, error *err, unsigned int funcName_len) {
#endif
	f77xml_p4t3_preMultiplexer(ret,funcName, code1, code2, err, funcName_len);
}

#if defined(_IBMR2)
void xp4t4(code *ret, const char *funcName, code *code1, bool *bool1, error *err, unsigned int funcName_len) {
#else
void xp4t4_(code *ret, const char *funcName, code *code1, bool *bool1, error *err, unsigned int funcName_len) {
#endif
	f77xml_p4t4_preMultiplexer(ret, funcName, code1, bool1, err, funcName_len);
}

#if defined(_IBMR2)
void xp4t5(bool *ret, const char *funcName, code *code1, char *str1, error *err, unsigned int funcName_len, unsigned int str1_len) {
#else
void xp4t5_(bool *ret, const char *funcName, code *code1, char *str1, error *err, unsigned int funcName_len, unsigned int str1_len) {
#endif
	f77xml_p4t5_preMultiplexer(ret, funcName, code1, str1, err, funcName_len, str1_len);
}


#if defined(_IBMR2)
void xp5t1(code *ret, const char *funcName, code *code1, code *code2, code *code3, error *err, unsigned int funcName_len) {
#else
void xp5t1_(code *ret, const char *funcName, code *code1, code *code2, code *code3, error *err, unsigned int funcName_len) {
#endif
	f77xml_p5t1_preMultiplexer(ret, funcName, code1, code2, code3, err, funcName_len);
}

#if defined(_IBMR2)
void xp5t2(bool *ret, const char *funcName, code *code1, const char *str1, unsigned int str1Offset, error *err, unsigned int funcName_len, unsigned int str1_len) {
#else
void xp5t2_(bool *ret, const char *funcName, code *code1, const char *str1, unsigned int str1Offset, error *err, unsigned int funcName_len, unsigned int str1_len) {
#endif
	f77xml_p5t2_preMultiplexer(ret, funcName, code1, str1, str1Offset, err, funcName_len, str1_len);
} 

#if defined(_IBMR2)
void xp5t3(bool *ret, const char *funcName, code *code1, code *code2, code *code3, error *err, unsigned int funcName_len) {
#else
void xp5t3_(bool *ret, const char *funcName, code *code1, code *code2, code *code3, error *err, unsigned int funcName_len) {
#endif
	f77xml_p5t3_preMultiplexer(ret,funcName, code1, code2, code3, err, funcName_len);
}

#if defined(_IBMR2)
void xp5t4(code *ret, const char *funcName, code *code1, unsigned int *uint1, unsigned int *uint2, error *err, unsigned int funcName_len) {
#else
void xp5t4_(code *ret, const char *funcName, code *code1, unsigned int *uint1, unsigned int *uint2, error *err, unsigned int funcName_len) {
#endif
	f77xml_p5t4_preMultiplexer(ret, funcName, code1, uint1, uint2, err, funcName_len);
}

#if defined(_IBMR2)
void xp5t5(code *ret, const char *funcName, code *code1, const char *str1, unsigned int uint1, error *err, unsigned int funcName_len, unsigned int str1_len) {
#else
void xp5t5_(code *ret, const char *funcName, code *code1, const char *str1, unsigned int uint1, error *err, unsigned int funcName_len, unsigned int str1_len) {
#endif
	f77xml_p5t5_preMultiplexer(ret, funcName, code1, str1, uint1, err, funcName_len, str1_len);
} 

#if defined(_IBMR2)
void xp5t6(code *ret, const char *funcName, code *code1, unsigned int uint1, code *code2, error *err, unsigned int funcName_len) {
#else
void xp5t6_(code *ret, const char *funcName, code *code1, unsigned int uint1, code *code2, error *err, unsigned int funcName_len) {
#endif
	f77xml_p5t6_preMultiplexer(ret, funcName, code1, uint1, code2, err, funcName_len);
} 

#if defined(_IBMR2)
void xp5t7(code *ret, const char *funcName, code *code1, code *code2, bool *bool1, error *err, unsigned int funcName_len) {
#else
void xp5t7_(code *ret, const char *funcName, code *code1, code *code2, bool *bool1, error *err, unsigned int funcName_len) {
#endif
	f77xml_p5t7_preMultiplexer(ret, funcName, code1, code2, bool1, err, funcName_len);
}

#if defined(_IBMR2)
void xp6t1(code *ret, const char *funcName, code *code1, code *code2, code *code3, code *code4, error *err, unsigned int funcName_len) {
#else
void xp6t1_(code *ret, const char *funcName, code *code1, code *code2, code *code3, code *code4, error *err, unsigned int funcName_len) {
#endif
	f77xml_p6t1_preMultiplexer(ret, funcName, code1, code2, code3, code4, err, funcName_len);
}

#if defined(_IBMR2)
void xp6t2(bool *ret, const char *funcName, code *code1, code *code2, const char *str1, unsigned int *uint1, error *err, unsigned int funcName_len, unsigned int str1_len) {
#else
void xp6t2_(bool *ret, const char *funcName, code *code1, code *code2, const char *str1, unsigned int *uint1, error *err, unsigned int funcName_len, unsigned int str1_len) {
#endif
	f77xml_p6t2_preMultiplexer(ret, funcName, code1, code2, str1, uint1, err, funcName_len, str1_len);
}

#if defined(_IBMR2)
void xp6t3(code *ret, const char *funcName, code *code1, unsigned int *uint1, unsigned int *uint2, code *code2,  error *err, unsigned int funcName_len) {
#else
void xp6t3_(code *ret, const char *funcName, code *code1, unsigned int *uint1, unsigned int *uint2, code *code2,  error *err, unsigned int funcName_len) {
#endif
	f77xml_p6t3_preMultiplexer(ret, funcName, code1, uint1, uint2, code2, err, funcName_len);
}

#if defined(_IBMR2)
void xp8t1(code *ret, const char *funcName, code *code1, code *code2, code *code3, code *code4, unsigned int *uint1, code *code5, error *err, unsigned int funcName_len) {
#else
void xp8t1_(code *ret, const char *funcName, code *code1, code *code2, code *code3, code *code4, unsigned int *uint1, code *code5,  error *err, unsigned int funcName_len) {
#endif
	f77xml_p8t1_preMultiplexer(ret, funcName, code1, code2, code3, code4, uint1, code5, err, funcName_len);
}
