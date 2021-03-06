/* Automatically generated by APIGen */
/* Changes will not survive. Modify    */
/* apigen.xml file instead                     */


#include <gdome.h>
#include <gdome-xpath.h>
#include <unistd.h>
#include <assert.h>
#include "mp_p4t4.h"
#include "cache.h"
#include "defines.h"
#include "domimpl.h"
#include "error.h"


/*
 * multiplexer definition for p4t4 type functions
 *
 */


struct signatures_p4t4 {
	char funcname[FUNCTION_NAME_MAX_LEN];
	void (*functor)(code *, code *, bool *, error *);
};


/* prototypes for handling functions */

private void f77xml__el_cloneNode(code *, code *, bool *, error *);
private void f77xml__n_cloneNode(code *, code *, bool *, error *);
private void f77xml__c_cloneNode(code *, code *, bool *, error *);
private void f77xml__doc_cloneNode(code *, code *, bool *, error *);
private void f77xml__t_cloneNode(code *, code *, bool *, error *);
private void f77xml__a_cloneNode(code *, code *, bool *, error *);
private void f77xml__cds_cloneNode(code *, code *, bool *, error *);
private void f77xml__cd_cloneNode(code *, code *, bool *, error *);
private void f77xml__pi_cloneNode(code *, code *, bool *, error *);
private void f77xml__df_cloneNode(code *, code *, bool *, error *);
private void f77xml__not_cloneNode(code *, code *, bool *, error *);
private void f77xml__dt_cloneNode(code *, code *, bool *, error *);
private void f77xml__ent_cloneNode(code *, code *, bool *, error *);
private void f77xml__er_cloneNode(code *, code *, bool *, error *);


private struct signatures_p4t4 p4t4Array[] = {
	{"el_cloneNode", &f77xml__el_cloneNode },
	{"n_cloneNode", &f77xml__n_cloneNode },
	{"c_cloneNode", &f77xml__c_cloneNode },
	{"doc_cloneNode", &f77xml__doc_cloneNode },
	{"t_cloneNode", &f77xml__t_cloneNode },
	{"a_cloneNode", &f77xml__a_cloneNode },
	{"cds_cloneNode", &f77xml__cds_cloneNode },
	{"cd_cloneNode", &f77xml__cd_cloneNode },
	{"pi_cloneNode", &f77xml__pi_cloneNode },
	{"df_cloneNode", &f77xml__df_cloneNode },
	{"not_cloneNode", &f77xml__not_cloneNode },
	{"dt_cloneNode", &f77xml__dt_cloneNode },
	{"ent_cloneNode", &f77xml__ent_cloneNode },
	{"er_cloneNode", &f77xml__er_cloneNode },
	{"", NULL }
};


void f77xml_p4t4_print() {
	struct signatures_p4t4 *signaturePtr;
	signaturePtr=p4t4Array;
	printf("p4t4 (code *, code *, bool *, error *)\n");
	while (signaturePtr->functor) {
		printf("    %s\n",signaturePtr->funcname);
		signaturePtr++;
	}
}


void f77xml_p4t4_multiplexer(code * ret, StringObj *funcname, code * param0, bool * param1, error * param2) {
	struct signatures_p4t4 *signaturePtr;
	void (*functorPtr)(code *, code *, bool *, error *);
	signaturePtr=p4t4Array;
#ifdef DEBUG
	printf("p4t4 multiplexer: %s\n",funcname->str);
#endif


	while (signaturePtr->functor) {
		if (!strcmp(funcname->str,signaturePtr->funcname)) {
			functorPtr=signaturePtr->functor;
			(*functorPtr)(ret,  param0,  param1,  param2);

			return;
		}
		signaturePtr++;
	}


	printf("Function %s for p4t4 multiplexer undefined.\n",funcname->str);
}

#include "implementation_p4t4.c"

