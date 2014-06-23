/* Automatically generated by APIGen */
/* Changes will not survive. Modify    */
/* apigen.xml file instead                     */


#include <gdome.h>
#include <gdome-xpath.h>
#include <unistd.h>
#include <assert.h>
#include "mp_p3t1.h"
#include "cache.h"
#include "defines.h"
#include "domimpl.h"
#include "error.h"


/*
 * multiplexer definition for p3t1 type functions
 *
 */


struct signatures_p3t1 {
	char funcname[FUNCTION_NAME_MAX_LEN];
	void (*functor)(code *, code *, error *);
};


/* prototypes for handling functions */

private void f77xml__doc_documentElement(code *, code *, error *);
private void f77xml__doc_implementation(code *, code *, error *);
private void f77xml__el_firstChild(code *, code *, error *);
private void f77xml__el_lastChild(code *, code *, error *);
private void f77xml__el_nextSibling(code *, code *, error *);
private void f77xml__el_previousSibling(code *, code *, error *);
private void f77xml__el_parentNode(code *, code *, error *);
private void f77xml__er_parentNode(code *, code *, error *);
private void f77xml__dt_parentNode(code *, code *, error *);
private void f77xml__df_parentNode(code *, code *, error *);
private void f77xml__pi_firstChild(code *, code *, error *);
private void f77xml__pi_lastChild(code *, code *, error *);
private void f77xml__pi_nextSibling(code *, code *, error *);
private void f77xml__pi_previousSibling(code *, code *, error *);
private void f77xml__pi_parentNode(code *, code *, error *);
private void f77xml__cd_firstChild(code *, code *, error *);
private void f77xml__cd_lastChild(code *, code *, error *);
private void f77xml__cd_nextSibling(code *, code *, error *);
private void f77xml__cd_previousSibling(code *, code *, error *);
private void f77xml__cd_parentNode(code *, code *, error *);
private void f77xml__cds_parentNode(code *, code *, error *);
private void f77xml__not_firstChild(code *, code *, error *);
private void f77xml__not_lastChild(code *, code *, error *);
private void f77xml__not_nextSibling(code *, code *, error *);
private void f77xml__not_previousSibling(code *, code *, error *);
private void f77xml__not_parentNode(code *, code *, error *);
private void f77xml__t_firstChild(code *, code *, error *);
private void f77xml__t_lastChild(code *, code *, error *);
private void f77xml__t_nextSibling(code *, code *, error *);
private void f77xml__t_previousSibling(code *, code *, error *);
private void f77xml__t_parentNode(code *, code *, error *);
private void f77xml__doc_firstChild(code *, code *, error *);
private void f77xml__doc_lastChild(code *, code *, error *);
private void f77xml__doc_nextSibling(code *, code *, error *);
private void f77xml__doc_previousSibling(code *, code *, error *);
private void f77xml__doc_parentNode(code *, code *, error *);
private void f77xml__el_childNodes(code *, code *, error *);
private void f77xml__er_childNodes(code *, code *, error *);
private void f77xml__dt_childNodes(code *, code *, error *);
private void f77xml__df_childNodes(code *, code *, error *);
private void f77xml__pi_childNodes(code *, code *, error *);
private void f77xml__cd_childNodes(code *, code *, error *);
private void f77xml__not_childNodes(code *, code *, error *);
private void f77xml__cds_childNodes(code *, code *, error *);
private void f77xml__t_childNodes(code *, code *, error *);
private void f77xml__doc_childNodes(code *, code *, error *);
private void f77xml__a_childNodes(code *, code *, error *);
private void f77xml__el_tagName(code *, code *, error *);
private void f77xml__el_nodeName(code *, code *, error *);
private void f77xml__n_nodeName(code *, code *, error *);
private void f77xml__ent_nodeName(code *, code *, error *);
private void f77xml__c_nodeName(code *, code *, error *);
private void f77xml__doc_nodeName(code *, code *, error *);
private void f77xml__er_nodeName(code *, code *, error *);
private void f77xml__dt_nodeName(code *, code *, error *);
private void f77xml__not_nodeName(code *, code *, error *);
private void f77xml__df_nodeName(code *, code *, error *);
private void f77xml__pi_nodeName(code *, code *, error *);
private void f77xml__cd_nodeName(code *, code *, error *);
private void f77xml__cds_nodeName(code *, code *, error *);
private void f77xml__a_nodeName(code *, code *, error *);
private void f77xml__t_nodeName(code *, code *, error *);
private void f77xml__el_nodeValue(code *, code *, error *);
private void f77xml__df_nodeValue(code *, code *, error *);
private void f77xml__pi_nodeValue(code *, code *, error *);
private void f77xml__cd_nodeValue(code *, code *, error *);
private void f77xml__not_nodeValue(code *, code *, error *);
private void f77xml__t_nodeValue(code *, code *, error *);
private void f77xml__doc_nodeValue(code *, code *, error *);
private void f77xml__cds_nodeValue(code *, code *, error *);
private void f77xml__el_prefix(code *, code *, error *);
private void f77xml__el_namespaceURI(code *, code *, error *);
private void f77xml__el_ownerDocument(code *, code *, error *);
private void f77xml__er_ownerDocument(code *, code *, error *);
private void f77xml__dt_ownerDocument(code *, code *, error *);
private void f77xml__df_ownerDocument(code *, code *, error *);
private void f77xml__pi_ownerDocument(code *, code *, error *);
private void f77xml__cd_ownerDocument(code *, code *, error *);
private void f77xml__not_ownerDocument(code *, code *, error *);
private void f77xml__n_ownerDocument(code *, code *, error *);
private void f77xml__c_ownerDocument(code *, code *, error *);
private void f77xml__ent_ownerDocument(code *, code *, error *);
private void f77xml__doc_ownerDocument(code *, code *, error *);
private void f77xml__t_ownerDocument(code *, code *, error *);
private void f77xml__a_ownerDocument(code *, code *, error *);
private void f77xml__cds_ownerDocument(code *, code *, error *);
private void f77xml__el_localName(code *, code *, error *);
private void f77xml__er_localName(code *, code *, error *);
private void f77xml__dt_localName(code *, code *, error *);
private void f77xml__df_localName(code *, code *, error *);
private void f77xml__pi_localName(code *, code *, error *);
private void f77xml__cd_localName(code *, code *, error *);
private void f77xml__not_localName(code *, code *, error *);
private void f77xml__cds_localName(code *, code *, error *);
private void f77xml__a_localName(code *, code *, error *);
private void f77xml__doc_localName(code *, code *, error *);
private void f77xml__el_attributes(code *, code *, error *);
private void f77xml__pi_attributes(code *, code *, error *);
private void f77xml__cd_attributes(code *, code *, error *);
private void f77xml__not_attributes(code *, code *, error *);
private void f77xml__a_attributes(code *, code *, error *);
private void f77xml__t_attributes(code *, code *, error *);
private void f77xml__doc_attributes(code *, code *, error *);
private void f77xml__n_nodeValue(code *, code *, error *);
private void f77xml__n_parentNode(code *, code *, error *);
private void f77xml__n_childNodes(code *, code *, error *);
private void f77xml__n_firstChild(code *, code *, error *);
private void f77xml__n_lastChild(code *, code *, error *);
private void f77xml__n_previousSibling(code *, code *, error *);
private void f77xml__n_nextSibling(code *, code *, error *);
private void f77xml__er_firstChild(code *, code *, error *);
private void f77xml__er_lastChild(code *, code *, error *);
private void f77xml__er_previousSibling(code *, code *, error *);
private void f77xml__er_nextSibling(code *, code *, error *);
private void f77xml__df_firstChild(code *, code *, error *);
private void f77xml__df_lastChild(code *, code *, error *);
private void f77xml__df_previousSibling(code *, code *, error *);
private void f77xml__df_nextSibling(code *, code *, error *);
private void f77xml__dt_firstChild(code *, code *, error *);
private void f77xml__dt_lastChild(code *, code *, error *);
private void f77xml__dt_previousSibling(code *, code *, error *);
private void f77xml__dt_nextSibling(code *, code *, error *);
private void f77xml__cds_firstChild(code *, code *, error *);
private void f77xml__cds_lastChild(code *, code *, error *);
private void f77xml__cds_previousSibling(code *, code *, error *);
private void f77xml__cds_nextSibling(code *, code *, error *);
private void f77xml__n_namespaceURI(code *, code *, error *);
private void f77xml__n_prefix(code *, code *, error *);
private void f77xml__n_localName(code *, code *, error *);
private void f77xml__c_data(code *, code *, error *);
private void f77xml__pi_data(code *, code *, error *);
private void f77xml__cd_data(code *, code *, error *);
private void f77xml__cds_data(code *, code *, error *);
private void f77xml__t_data(code *, code *, error *);
private void f77xml__c_nodeValue(code *, code *, error *);
private void f77xml__c_parentNode(code *, code *, error *);
private void f77xml__c_childNodes(code *, code *, error *);
private void f77xml__c_firstChild(code *, code *, error *);
private void f77xml__c_lastChild(code *, code *, error *);
private void f77xml__c_previousSibling(code *, code *, error *);
private void f77xml__c_nextSibling(code *, code *, error *);
private void f77xml__c_namespaceURI(code *, code *, error *);
private void f77xml__c_prefix(code *, code *, error *);
private void f77xml__c_localName(code *, code *, error *);
private void f77xml__n_attributes(code *, code *, error *);
private void f77xml__er_attributes(code *, code *, error *);
private void f77xml__dt_attributes(code *, code *, error *);
private void f77xml__df_attributes(code *, code *, error *);
private void f77xml__cds_attributes(code *, code *, error *);
private void f77xml__doc_createDocumentFragment(code *, code *, error *);
private void f77xml__el_normalize(code *, code *, error *);
private void f77xml__er_normalize(code *, code *, error *);
private void f77xml__dt_normalize(code *, code *, error *);
private void f77xml__df_normalize(code *, code *, error *);
private void f77xml__pi_normalize(code *, code *, error *);
private void f77xml__cd_normalize(code *, code *, error *);
private void f77xml__not_normalize(code *, code *, error *);
private void f77xml__cds_normalize(code *, code *, error *);
private void f77xml__a_normalize(code *, code *, error *);
private void f77xml__t_normalize(code *, code *, error *);
private void f77xml__doc_normalize(code *, code *, error *);
private void f77xml__n_normalize(code *, code *, error *);
private void f77xml__c_normalize(code *, code *, error *);
private void f77xml__ent_normalize(code *, code *, error *);
private void f77xml__c_attributes(code *, code *, error *);
private void f77xml__doc_doctype(code *, code *, error *);
private void f77xml__ent_publicId(code *, code *, error *);
private void f77xml__ent_systemId(code *, code *, error *);
private void f77xml__dt_publicId(code *, code *, error *);
private void f77xml__dt_systemId(code *, code *, error *);
private void f77xml__dt_internalSubset(code *, code *, error *);
private void f77xml__not_publicId(code *, code *, error *);
private void f77xml__not_systemId(code *, code *, error *);
private void f77xml__ent_notationName(code *, code *, error *);
private void f77xml__ent_nodeValue(code *, code *, error *);
private void f77xml__er_nodeValue(code *, code *, error *);
private void f77xml__dt_nodeValue(code *, code *, error *);
private void f77xml__ent_firstChild(code *, code *, error *);
private void f77xml__ent_lastChild(code *, code *, error *);
private void f77xml__ent_nextSibling(code *, code *, error *);
private void f77xml__ent_previousSibling(code *, code *, error *);
private void f77xml__ent_parentNode(code *, code *, error *);
private void f77xml__ent_childNodes(code *, code *, error *);
private void f77xml__ent_attributes(code *, code *, error *);
private void f77xml__ent_namespaceURI(code *, code *, error *);
private void f77xml__er_namespaceURI(code *, code *, error *);
private void f77xml__dt_namespaceURI(code *, code *, error *);
private void f77xml__df_namespaceURI(code *, code *, error *);
private void f77xml__pi_namespaceURI(code *, code *, error *);
private void f77xml__cd_namespaceURI(code *, code *, error *);
private void f77xml__not_namespaceURI(code *, code *, error *);
private void f77xml__cds_namespaceURI(code *, code *, error *);
private void f77xml__a_namespaceURI(code *, code *, error *);
private void f77xml__t_namespaceURI(code *, code *, error *);
private void f77xml__doc_namespaceURI(code *, code *, error *);
private void f77xml__ent_prefix(code *, code *, error *);
private void f77xml__er_prefix(code *, code *, error *);
private void f77xml__dt_prefix(code *, code *, error *);
private void f77xml__df_prefix(code *, code *, error *);
private void f77xml__pi_prefix(code *, code *, error *);
private void f77xml__cd_prefix(code *, code *, error *);
private void f77xml__not_prefix(code *, code *, error *);
private void f77xml__cds_prefix(code *, code *, error *);
private void f77xml__a_prefix(code *, code *, error *);
private void f77xml__t_prefix(code *, code *, error *);
private void f77xml__doc_prefix(code *, code *, error *);
private void f77xml__ent_localName(code *, code *, error *);
private void f77xml__t_localName(code *, code *, error *);
private void f77xml__a_name(code *, code *, error *);
private void f77xml__a_ownerElement(code *, code *, error *);
private void f77xml__a_value(code *, code *, error *);
private void f77xml__a_nodeValue(code *, code *, error *);
private void f77xml__a_firstChild(code *, code *, error *);
private void f77xml__a_lastChild(code *, code *, error *);
private void f77xml__a_nextSibling(code *, code *, error *);
private void f77xml__a_previousSibling(code *, code *, error *);
private void f77xml__a_parentNode(code *, code *, error *);
private void f77xml__pi_target(code *, code *, error *);
private void f77xml__dt_name(code *, code *, error *);
private void f77xml__dt_entities(code *, code *, error *);
private void f77xml__dt_notations(code *, code *, error *);
private void f77xml__xpresult_singleNodeValue(code *, code *, error *);
private void f77xml__xpresult_iterateNext(code *, code *, error *);
private void f77xml__xpresult_stringValue(code *, code *, error *);
private void f77xml__n_unref(code *, code *, error *);
private void f77xml__el_unref(code *, code *, error *);
private void f77xml__t_unref(code *, code *, error *);
private void f77xml__cd_unref(code *, code *, error *);
private void f77xml__cds_unref(code *, code *, error *);
private void f77xml__c_unref(code *, code *, error *);
private void f77xml__di_unref(code *, code *, error *);
private void f77xml__doc_unref(code *, code *, error *);
private void f77xml__dt_unref(code *, code *, error *);
private void f77xml__ent_unref(code *, code *, error *);
private void f77xml__er_unref(code *, code *, error *);
private void f77xml__nnm_unref(code *, code *, error *);
private void f77xml__nl_unref(code *, code *, error *);
private void f77xml__not_unref(code *, code *, error *);
private void f77xml__pi_unref(code *, code *, error *);
private void f77xml__a_unref(code *, code *, error *);
private void f77xml__str_unref(code *, code *, error *);
private void f77xml__xpresult_unref(code *, code *, error *);
private void f77xml__xpeval_unref(code *, code *, error *);
private void f77xml__str_print(code *, code *, error *);


private struct signatures_p3t1 p3t1Array[] = {
	{"doc_documentElement", &f77xml__doc_documentElement },
	{"doc_implementation", &f77xml__doc_implementation },
	{"el_firstChild", &f77xml__el_firstChild },
	{"el_lastChild", &f77xml__el_lastChild },
	{"el_nextSibling", &f77xml__el_nextSibling },
	{"el_previousSibling", &f77xml__el_previousSibling },
	{"el_parentNode", &f77xml__el_parentNode },
	{"er_parentNode", &f77xml__er_parentNode },
	{"dt_parentNode", &f77xml__dt_parentNode },
	{"df_parentNode", &f77xml__df_parentNode },
	{"pi_firstChild", &f77xml__pi_firstChild },
	{"pi_lastChild", &f77xml__pi_lastChild },
	{"pi_nextSibling", &f77xml__pi_nextSibling },
	{"pi_previousSibling", &f77xml__pi_previousSibling },
	{"pi_parentNode", &f77xml__pi_parentNode },
	{"cd_firstChild", &f77xml__cd_firstChild },
	{"cd_lastChild", &f77xml__cd_lastChild },
	{"cd_nextSibling", &f77xml__cd_nextSibling },
	{"cd_previousSibling", &f77xml__cd_previousSibling },
	{"cd_parentNode", &f77xml__cd_parentNode },
	{"cds_parentNode", &f77xml__cds_parentNode },
	{"not_firstChild", &f77xml__not_firstChild },
	{"not_lastChild", &f77xml__not_lastChild },
	{"not_nextSibling", &f77xml__not_nextSibling },
	{"not_previousSibling", &f77xml__not_previousSibling },
	{"not_parentNode", &f77xml__not_parentNode },
	{"t_firstChild", &f77xml__t_firstChild },
	{"t_lastChild", &f77xml__t_lastChild },
	{"t_nextSibling", &f77xml__t_nextSibling },
	{"t_previousSibling", &f77xml__t_previousSibling },
	{"t_parentNode", &f77xml__t_parentNode },
	{"doc_firstChild", &f77xml__doc_firstChild },
	{"doc_lastChild", &f77xml__doc_lastChild },
	{"doc_nextSibling", &f77xml__doc_nextSibling },
	{"doc_previousSibling", &f77xml__doc_previousSibling },
	{"doc_parentNode", &f77xml__doc_parentNode },
	{"el_childNodes", &f77xml__el_childNodes },
	{"er_childNodes", &f77xml__er_childNodes },
	{"dt_childNodes", &f77xml__dt_childNodes },
	{"df_childNodes", &f77xml__df_childNodes },
	{"pi_childNodes", &f77xml__pi_childNodes },
	{"cd_childNodes", &f77xml__cd_childNodes },
	{"not_childNodes", &f77xml__not_childNodes },
	{"cds_childNodes", &f77xml__cds_childNodes },
	{"t_childNodes", &f77xml__t_childNodes },
	{"doc_childNodes", &f77xml__doc_childNodes },
	{"a_childNodes", &f77xml__a_childNodes },
	{"el_tagName", &f77xml__el_tagName },
	{"el_nodeName", &f77xml__el_nodeName },
	{"n_nodeName", &f77xml__n_nodeName },
	{"ent_nodeName", &f77xml__ent_nodeName },
	{"c_nodeName", &f77xml__c_nodeName },
	{"doc_nodeName", &f77xml__doc_nodeName },
	{"er_nodeName", &f77xml__er_nodeName },
	{"dt_nodeName", &f77xml__dt_nodeName },
	{"not_nodeName", &f77xml__not_nodeName },
	{"df_nodeName", &f77xml__df_nodeName },
	{"pi_nodeName", &f77xml__pi_nodeName },
	{"cd_nodeName", &f77xml__cd_nodeName },
	{"cds_nodeName", &f77xml__cds_nodeName },
	{"a_nodeName", &f77xml__a_nodeName },
	{"t_nodeName", &f77xml__t_nodeName },
	{"el_nodeValue", &f77xml__el_nodeValue },
	{"df_nodeValue", &f77xml__df_nodeValue },
	{"pi_nodeValue", &f77xml__pi_nodeValue },
	{"cd_nodeValue", &f77xml__cd_nodeValue },
	{"not_nodeValue", &f77xml__not_nodeValue },
	{"t_nodeValue", &f77xml__t_nodeValue },
	{"doc_nodeValue", &f77xml__doc_nodeValue },
	{"cds_nodeValue", &f77xml__cds_nodeValue },
	{"el_prefix", &f77xml__el_prefix },
	{"el_namespaceURI", &f77xml__el_namespaceURI },
	{"el_ownerDocument", &f77xml__el_ownerDocument },
	{"er_ownerDocument", &f77xml__er_ownerDocument },
	{"dt_ownerDocument", &f77xml__dt_ownerDocument },
	{"df_ownerDocument", &f77xml__df_ownerDocument },
	{"pi_ownerDocument", &f77xml__pi_ownerDocument },
	{"cd_ownerDocument", &f77xml__cd_ownerDocument },
	{"not_ownerDocument", &f77xml__not_ownerDocument },
	{"n_ownerDocument", &f77xml__n_ownerDocument },
	{"c_ownerDocument", &f77xml__c_ownerDocument },
	{"ent_ownerDocument", &f77xml__ent_ownerDocument },
	{"doc_ownerDocument", &f77xml__doc_ownerDocument },
	{"t_ownerDocument", &f77xml__t_ownerDocument },
	{"a_ownerDocument", &f77xml__a_ownerDocument },
	{"cds_ownerDocument", &f77xml__cds_ownerDocument },
	{"el_localName", &f77xml__el_localName },
	{"er_localName", &f77xml__er_localName },
	{"dt_localName", &f77xml__dt_localName },
	{"df_localName", &f77xml__df_localName },
	{"pi_localName", &f77xml__pi_localName },
	{"cd_localName", &f77xml__cd_localName },
	{"not_localName", &f77xml__not_localName },
	{"cds_localName", &f77xml__cds_localName },
	{"a_localName", &f77xml__a_localName },
	{"doc_localName", &f77xml__doc_localName },
	{"el_attributes", &f77xml__el_attributes },
	{"pi_attributes", &f77xml__pi_attributes },
	{"cd_attributes", &f77xml__cd_attributes },
	{"not_attributes", &f77xml__not_attributes },
	{"a_attributes", &f77xml__a_attributes },
	{"t_attributes", &f77xml__t_attributes },
	{"doc_attributes", &f77xml__doc_attributes },
	{"n_nodeValue", &f77xml__n_nodeValue },
	{"n_parentNode", &f77xml__n_parentNode },
	{"n_childNodes", &f77xml__n_childNodes },
	{"n_firstChild", &f77xml__n_firstChild },
	{"n_lastChild", &f77xml__n_lastChild },
	{"n_previousSibling", &f77xml__n_previousSibling },
	{"n_nextSibling", &f77xml__n_nextSibling },
	{"er_firstChild", &f77xml__er_firstChild },
	{"er_lastChild", &f77xml__er_lastChild },
	{"er_previousSibling", &f77xml__er_previousSibling },
	{"er_nextSibling", &f77xml__er_nextSibling },
	{"df_firstChild", &f77xml__df_firstChild },
	{"df_lastChild", &f77xml__df_lastChild },
	{"df_previousSibling", &f77xml__df_previousSibling },
	{"df_nextSibling", &f77xml__df_nextSibling },
	{"dt_firstChild", &f77xml__dt_firstChild },
	{"dt_lastChild", &f77xml__dt_lastChild },
	{"dt_previousSibling", &f77xml__dt_previousSibling },
	{"dt_nextSibling", &f77xml__dt_nextSibling },
	{"cds_firstChild", &f77xml__cds_firstChild },
	{"cds_lastChild", &f77xml__cds_lastChild },
	{"cds_previousSibling", &f77xml__cds_previousSibling },
	{"cds_nextSibling", &f77xml__cds_nextSibling },
	{"n_namespaceURI", &f77xml__n_namespaceURI },
	{"n_prefix", &f77xml__n_prefix },
	{"n_localName", &f77xml__n_localName },
	{"c_data", &f77xml__c_data },
	{"pi_data", &f77xml__pi_data },
	{"cd_data", &f77xml__cd_data },
	{"cds_data", &f77xml__cds_data },
	{"t_data", &f77xml__t_data },
	{"c_nodeValue", &f77xml__c_nodeValue },
	{"c_parentNode", &f77xml__c_parentNode },
	{"c_childNodes", &f77xml__c_childNodes },
	{"c_firstChild", &f77xml__c_firstChild },
	{"c_lastChild", &f77xml__c_lastChild },
	{"c_previousSibling", &f77xml__c_previousSibling },
	{"c_nextSibling", &f77xml__c_nextSibling },
	{"c_namespaceURI", &f77xml__c_namespaceURI },
	{"c_prefix", &f77xml__c_prefix },
	{"c_localName", &f77xml__c_localName },
	{"n_attributes", &f77xml__n_attributes },
	{"er_attributes", &f77xml__er_attributes },
	{"dt_attributes", &f77xml__dt_attributes },
	{"df_attributes", &f77xml__df_attributes },
	{"cds_attributes", &f77xml__cds_attributes },
	{"doc_createDocumentFragment", &f77xml__doc_createDocumentFragment },
	{"el_normalize", &f77xml__el_normalize },
	{"er_normalize", &f77xml__er_normalize },
	{"dt_normalize", &f77xml__dt_normalize },
	{"df_normalize", &f77xml__df_normalize },
	{"pi_normalize", &f77xml__pi_normalize },
	{"cd_normalize", &f77xml__cd_normalize },
	{"not_normalize", &f77xml__not_normalize },
	{"cds_normalize", &f77xml__cds_normalize },
	{"a_normalize", &f77xml__a_normalize },
	{"t_normalize", &f77xml__t_normalize },
	{"doc_normalize", &f77xml__doc_normalize },
	{"n_normalize", &f77xml__n_normalize },
	{"c_normalize", &f77xml__c_normalize },
	{"ent_normalize", &f77xml__ent_normalize },
	{"c_attributes", &f77xml__c_attributes },
	{"doc_doctype", &f77xml__doc_doctype },
	{"ent_publicId", &f77xml__ent_publicId },
	{"ent_systemId", &f77xml__ent_systemId },
	{"dt_publicId", &f77xml__dt_publicId },
	{"dt_systemId", &f77xml__dt_systemId },
	{"dt_internalSubset", &f77xml__dt_internalSubset },
	{"not_publicId", &f77xml__not_publicId },
	{"not_systemId", &f77xml__not_systemId },
	{"ent_notationName", &f77xml__ent_notationName },
	{"ent_nodeValue", &f77xml__ent_nodeValue },
	{"er_nodeValue", &f77xml__er_nodeValue },
	{"dt_nodeValue", &f77xml__dt_nodeValue },
	{"ent_firstChild", &f77xml__ent_firstChild },
	{"ent_lastChild", &f77xml__ent_lastChild },
	{"ent_nextSibling", &f77xml__ent_nextSibling },
	{"ent_previousSibling", &f77xml__ent_previousSibling },
	{"ent_parentNode", &f77xml__ent_parentNode },
	{"ent_childNodes", &f77xml__ent_childNodes },
	{"ent_attributes", &f77xml__ent_attributes },
	{"ent_namespaceURI", &f77xml__ent_namespaceURI },
	{"er_namespaceURI", &f77xml__er_namespaceURI },
	{"dt_namespaceURI", &f77xml__dt_namespaceURI },
	{"df_namespaceURI", &f77xml__df_namespaceURI },
	{"pi_namespaceURI", &f77xml__pi_namespaceURI },
	{"cd_namespaceURI", &f77xml__cd_namespaceURI },
	{"not_namespaceURI", &f77xml__not_namespaceURI },
	{"cds_namespaceURI", &f77xml__cds_namespaceURI },
	{"a_namespaceURI", &f77xml__a_namespaceURI },
	{"t_namespaceURI", &f77xml__t_namespaceURI },
	{"doc_namespaceURI", &f77xml__doc_namespaceURI },
	{"ent_prefix", &f77xml__ent_prefix },
	{"er_prefix", &f77xml__er_prefix },
	{"dt_prefix", &f77xml__dt_prefix },
	{"df_prefix", &f77xml__df_prefix },
	{"pi_prefix", &f77xml__pi_prefix },
	{"cd_prefix", &f77xml__cd_prefix },
	{"not_prefix", &f77xml__not_prefix },
	{"cds_prefix", &f77xml__cds_prefix },
	{"a_prefix", &f77xml__a_prefix },
	{"t_prefix", &f77xml__t_prefix },
	{"doc_prefix", &f77xml__doc_prefix },
	{"ent_localName", &f77xml__ent_localName },
	{"t_localName", &f77xml__t_localName },
	{"a_name", &f77xml__a_name },
	{"a_ownerElement", &f77xml__a_ownerElement },
	{"a_value", &f77xml__a_value },
	{"a_nodeValue", &f77xml__a_nodeValue },
	{"a_firstChild", &f77xml__a_firstChild },
	{"a_lastChild", &f77xml__a_lastChild },
	{"a_nextSibling", &f77xml__a_nextSibling },
	{"a_previousSibling", &f77xml__a_previousSibling },
	{"a_parentNode", &f77xml__a_parentNode },
	{"pi_target", &f77xml__pi_target },
	{"dt_name", &f77xml__dt_name },
	{"dt_entities", &f77xml__dt_entities },
	{"dt_notations", &f77xml__dt_notations },
	{"xpresult_singleNodeValue", &f77xml__xpresult_singleNodeValue },
	{"xpresult_iterateNext", &f77xml__xpresult_iterateNext },
	{"xpresult_stringValue", &f77xml__xpresult_stringValue },
	{"n_unref", &f77xml__n_unref },
	{"el_unref", &f77xml__el_unref },
	{"t_unref", &f77xml__t_unref },
	{"cd_unref", &f77xml__cd_unref },
	{"cds_unref", &f77xml__cds_unref },
	{"c_unref", &f77xml__c_unref },
	{"di_unref", &f77xml__di_unref },
	{"doc_unref", &f77xml__doc_unref },
	{"dt_unref", &f77xml__dt_unref },
	{"ent_unref", &f77xml__ent_unref },
	{"er_unref", &f77xml__er_unref },
	{"nnm_unref", &f77xml__nnm_unref },
	{"nl_unref", &f77xml__nl_unref },
	{"not_unref", &f77xml__not_unref },
	{"pi_unref", &f77xml__pi_unref },
	{"a_unref", &f77xml__a_unref },
	{"str_unref", &f77xml__str_unref },
	{"xpresult_unref", &f77xml__xpresult_unref },
	{"xpeval_unref", &f77xml__xpeval_unref },
	{"str_print", &f77xml__str_print },
	{"", NULL }
};


void f77xml_p3t1_print() {
	struct signatures_p3t1 *signaturePtr;
	signaturePtr=p3t1Array;
	printf("p3t1 (code *, code *, error *)\n");
	while (signaturePtr->functor) {
		printf("    %s\n",signaturePtr->funcname);
		signaturePtr++;
	}
}


void f77xml_p3t1_multiplexer(code * ret, StringObj *funcname, code * param0, error * param1) {
	struct signatures_p3t1 *signaturePtr;
	void (*functorPtr)(code *, code *, error *);
	signaturePtr=p3t1Array;
#ifdef DEBUG
	printf("p3t1 multiplexer: %s\n",funcname->str);
#endif


	while (signaturePtr->functor) {
		if (!strcmp(funcname->str,signaturePtr->funcname)) {
			functorPtr=signaturePtr->functor;
			(*functorPtr)(ret,  param0,  param1);

			return;
		}
		signaturePtr++;
	}


	printf("Function %s for p3t1 multiplexer undefined.\n",funcname->str);
}

#include "implementation_p3t1.c"
