program exampleb
    use f90xml
    implicit none

	integer :: domimpl,doc,root,el,childs
    integer :: error,void
	integer :: name, value
	integer :: i, nchilds, type
    character(len=1024) string
    logical :: bool

	call f90xml_di_mkref (domimpl,error)

    string = "exampleb.xml"
	call f90xml_di_createDocFromURI(doc, domimpl, string, 0, error)
	if (doc == 0) then
		print *, "DOMImplementation.createDocFromURI: failed"
		stop
	endif

	call f90xml_doc_documentElement (root, doc, error)
	if (root == 0) then
		print *, "Document.documentElement: failed"
        stop
    endif

	call f90xml_el_childNodes (childs,root,error)
	if (childs == 0 ) then
		print *, "Element.childNodes: failed"
        stop
    endif

    string = "CHECKED"
	call f90xml_str_mkref (name,string,error)
    string = "yes"
	call f90xml_str_mkref (value,string,error)

	call f90xml_nl_length (nchilds, childs, error)
  
	do i = 0, nchilds-1
		call f90xml_nl_item (el,childs,i,error)
		if (el == NullCode) then
			print *, "NodeList.item(",i,"): failed"
			stop
		endif
		call f90xml_n_nodeType (type, el, error) 
        print * , "type = ", type
        if (type == F90XML_ELEMENT_NODE) then
            call f90xml_el_setAttribute (void, el, name, value, error)
            print *, error
			if (error /= 0) then
				print *, "Element.setAttribute: failed"
				stop
			endif
		endif
    enddo

    call f90xml_str_unref(void,name,error)
    call f90xml_str_unref(void,value,error)

    string = "exampleb_out.xml"
	call f90xml_di_saveDocToFile (bool,domimpl, doc, string, 0, error)
    
    call f90xml_debug_dumpCache(void,error)
 !   call f90xml_Cache_flush(void,error)

    call f90xml_debug_dumpCache(void,error)

    if (error /= 0) then
        print *, "DOMImplementation.saveDocToFile: failed"
		stop
	endif 

end program 
