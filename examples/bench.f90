program bench
    use f90xml
	implicit none

    integer :: domimpl,doc,elem
    integer :: error
    integer :: void
    character(len=128) :: filename = "test-document2.xml"

	call f90xml_di_mkref(domimpl,error)
	
    call f90xml_di_createDocFromURI (doc, domimpl, filename, 0, error);

	if (doc == 0) then
		print *, "DOMImplementation.createDocFromURI Nullcode"
        stop
	endif
   
    call f90xml_doc_documentElement(elem,doc,error)
	call traversal (elem)

    call f90xml_el_unref(void,elem,error)
    call f90xml_doc_unref(void,doc,error)
    call f90xml_di_unref(void,domimpl,error)


end program bench

subroutine printElHead(el)
    use f90xml
    implicit none
    integer, intent(in) :: el

    logical :: bool
    integer :: len
    integer :: string,attrs, attr
    integer :: error
    integer :: i
    character(len=1024) :: completeTag
    character(len=128) :: fortranString

    call f90xml_el_tagName (string, el, error);
    call f90xml_str_toFortran(bool,string,fortranString,0,error)
    completeTag=""
    completeTag=trim(completeTag)//"<"//trim(fortranString)

    call f90xml_el_hasAttributes (bool, el, error)
    
    if (bool) then
        call f90xml_el_attributes (attrs, el, error)
        call f90xml_nnm_length (len, attrs, error)
        do i=0,len-1
            call f90xml_nnm_item (attr, attrs, i, error)
            call f90xml_a_name (string, attr, error)
            call f90xml_str_toFortran(bool,string,fortranString,0,error)
            completeTag=trim(completeTag)//" "//trim(fortranString)//'='
            
            call f90xml_a_value (string,attr,error)
            call f90xml_str_toFortran(bool,string,fortranString,0,error)
            completeTag=trim(completeTag)//""""//trim(fortranString)//""""
        enddo
    endif 
    completeTag=trim(completeTag)//">"
    print *, trim(completeTag)
end subroutine

subroutine printElFoot(el) 
    use f90xml
    implicit none
    integer, intent(in) :: el

    integer :: string
    integer :: error
    logical :: bool
    character(len=128) :: fortranString
	
    call f90xml_el_tagName (string, el, error);
    call f90xml_str_toFortran(bool,string,fortranString,0,error)
    print *, "</"//trim(fortranString)//">"

end subroutine printElFoot

recursive subroutine traversal (el)
    use f90xml
    implicit none
    integer,intent(in) :: el
	integer :: child, temp
	integer :: type
	integer :: string
    integer :: error
    character(len=1024) :: fortranString
    logical :: bool

    
    fortranString=""
	call f90xml_el_firstChild(child,el,error);
	do 
        if (child == 0) exit
		call f90xml_n_nodeType (type, child, error)
		select case (type) 
        case (1)
			call printElHead (child);
			call traversal (child);
			call printElFoot (child);
        case (3)
			call f90xml_t_data (string,child, error);
            call f90xml_str_toFortran(bool,string,fortranString,0,error)
            print *, trim(fortranString)
        end select
		call f90xml_n_nextSibling (temp,child, error);
		child = temp;
    enddo
end subroutine traversal

