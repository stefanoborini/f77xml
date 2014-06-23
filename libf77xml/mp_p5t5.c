/* Automatically generated by APIGen */
/* Changes will not survive. Modify    */
/* apigen.xml file instead                     */


#include <gdome.h>
#include <gdome-xpath.h>
#include <unistd.h>
#include <assert.h>
#include "mp_p5t5.h"
#include "cache.h"
#include "defines.h"
#include "domimpl.h"
#include "error.h"


/*
 * multiplexer definition for p5t5 type functions
 *
 */


struct signatures_p5t5 {
	char funcname[FUNCTION_NAME_MAX_LEN];
	void (*functor)(code *, code *, StringObj *, unsigned int *, error *);
};


/* prototypes for handling functions */

private void f77xml__di_createDocFromURI(code *, code *, StringObj *, unsigned int *, error *);


private struct signatures_p5t5 p5t5Array[] = {
	{"di_createDocFromURI", &f77xml__di_createDocFromURI },
	{"", NULL }
};


void f77xml_p5t5_print() {
	struct signatures_p5t5 *signaturePtr;
	signaturePtr=p5t5Array;
	printf("p5t5 (code *, code *, StringObj *, unsigned int *, error *)\n");
	while (signaturePtr->functor) {
		printf("    %s\n",signaturePtr->funcname);
		signaturePtr++;
	}
}


void f77xml_p5t5_multiplexer(code * ret, StringObj *funcname, code * param0, StringObj * param1, unsigned int * param2, error * param3) {
	struct signatures_p5t5 *signaturePtr;
	void (*functorPtr)(code *, code *, StringObj *, unsigned int *, error *);
	signaturePtr=p5t5Array;
#ifdef DEBUG
	printf("p5t5 multiplexer: %s\n",funcname->str);
#endif


	while (signaturePtr->functor) {
		if (!strcmp(funcname->str,signaturePtr->funcname)) {
			functorPtr=signaturePtr->functor;
			(*functorPtr)(ret,  param0,  param1,  param2,  param3);

			return;
		}
		signaturePtr++;
	}


	printf("Function %s for p5t5 multiplexer undefined.\n",funcname->str);
}

#include "implementation_p5t5.c"

