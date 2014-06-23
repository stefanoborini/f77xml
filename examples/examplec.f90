recursive subroutine cleanSubTree (node)
    use f90xml
    implicit none
    integer, intent(in) :: node
	integer :: child, dchild
	integer :: nl
	integer :: err 
	integer :: str;
	integer :: i, nllength
    integer :: void
    integer :: type
    character(len=1024) :: fortranStr
    logical :: bool

	call f90xml_n_childNodes (nl, node, err)
    call f90xml_nl_length(nllength, nl, err)

	if (nllength == 0) then
		if (nl /= 0) then
			call f90xml_nl_unref (void,nl,err)
		    return
        endif
	endif

	do i = nllength-1,0,-1
		call f90xml_nl_item(child, nl, i, err)
		str = 0

        call f90xml_n_nodeType(type, child, err)

		if (type == F90XML_COMMENT_NODE .or. type == F90XML_TEXT_NODE) then
            call f90xml_t_data(str, child, err)
            call f90xml_str_toFortran(bool,str,fortranStr,0,err)
            if (index(fortranStr," ") == 0) then
			    call f90xml_n_removeChild(dchild, node, child, err)
            endif 
			if (str /= 0) then
				call f90xml_str_unref (void,str,err)
            endif
			if (dchild /= 0) then
				call f90xml_n_unref (void,dchild, err)
            endif 
		else
            call f90xml_n_hasChildNodes(bool, child, err)
            if (bool) then
			    call cleanSubTree (child)
            endif
        endif
		if (child /= 0) then
			call f90xml_n_unref (void, child, err)
        endif 
    enddo

	if (nl /= 0) then
        call f90xml_nl_unref (void, nl, err)
    endif 
       
end subroutine cleanSubTree

program examplec
    use f90xml
	implicit none
    integer :: domimpl
	integer :: doc
	integer :: rootel
	integer :: err
    integer :: void
    character(len=1024) :: string
    logical :: bool

	call f90xml_di_mkref(domimpl,err)
    string = "examplec.xml"
	call f90xml_di_createDocFromURI(doc,domimpl, string, 0, err)
	if (doc == 0) then
		print *, "DOMImplementation.createDocFromURI: failed"
		stop
	endif

	call f90xml_doc_documentElement (rootel, doc, err)
	if (rootel == 0 ) then
		print *, "Document.documentElement: NULL"
        stop
    endif

    call cleanSubTree (rootel)
    call f90xml_el_unref (void, rootel, err)

    string = "buexamplec_out.xml"
	call f90xml_di_saveDocToFile (bool, domimpl, doc, string, 0, err)

    if (err /= 0) then
		print *, "DOMImplementation.saveDocToFile: failed"
		stop
	endif

	call f90xml_doc_unref (void, doc, err)
	call f90xml_di_unref (void, domimpl, err)

end program examplec
