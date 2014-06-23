/* Automatically generated by APIGen */
/* Changes will not survive. Modify    */
/* apigen.xml file instead                     */


#include <gdome.h>
#include <gdome-xpath.h>
#include <unistd.h>
#include <assert.h>
#include "mp_p3t2.h"
#include "cache.h"
#include "defines.h"
#include "domimpl.h"
#include "error.h"


/*
 * multiplexer definition for p3t2 type functions
 *
 */


struct signatures_p3t2 {
	char funcname[FUNCTION_NAME_MAX_LEN];
	void (*functor)(code *, StringObj *, error *);
};


/* prototypes for handling functions */

private void f77xml__str_new(code *, StringObj *, error *);
private void f77xml__str_mkref(code *, StringObj *, error *);


private struct signatures_p3t2 p3t2Array[] = {
	{"str_new", &f77xml__str_new },
	{"str_mkref", &f77xml__str_mkref },
	{"", NULL }
};


void f77xml_p3t2_print() {
	struct signatures_p3t2 *signaturePtr;
	signaturePtr=p3t2Array;
	printf("p3t2 (code *, StringObj *, error *)\n");
	while (signaturePtr->functor) {
		printf("    %s\n",signaturePtr->funcname);
		signaturePtr++;
	}
}


void f77xml_p3t2_multiplexer(code * ret, StringObj *funcname, StringObj * param0, error * param1) {
	struct signatures_p3t2 *signaturePtr;
	void (*functorPtr)(code *, StringObj *, error *);
	signaturePtr=p3t2Array;
#ifdef DEBUG
	printf("p3t2 multiplexer: %s\n",funcname->str);
#endif


	while (signaturePtr->functor) {
		if (!strcmp(funcname->str,signaturePtr->funcname)) {
			functorPtr=signaturePtr->functor;
			(*functorPtr)(ret,  param0,  param1);

			return;
		}
		signaturePtr++;
	}


	printf("Function %s for p3t2 multiplexer undefined.\n",funcname->str);
}

#include "implementation_p3t2.c"
