program examplea
    use f90xml
    implicit none
    
    integer :: domimpl,doc
    integer :: error
    integer :: name,value
    integer :: root
    integer :: void
    integer :: txtnode, result,el
    logical :: bool
    character(len=1024) :: string

    call f90xml_di_mkref (domimpl, error)
    string = "TEST"
    call f90xml_str_mkref (name,string,error)

    call f90xml_di_createDocument(doc,domimpl, 0, name, 0, error)
    
    if (doc == 0) then
        print *, "DOMImplementation.createDocument: failed"
        stop
    endif

    call f90xml_doc_documentElement (root, doc, error)
    if (root == 0) then
        print *, "Document.documentElement: NULL Exception"
        stop
    endif

    string = "PACKAGE"
    call f90xml_str_mkref (name,string,error)
    string = "gdome2"
    call f90xml_str_mkref (value,string,error)
    call f90xml_el_setAttribute (void, root, name, value, error )
    
    if (error /= 0) then
        print *, "Element.setAttribute: failed"
        stop
    endif 

    string = "RELEASE"
    call f90xml_str_mkref (name,string,error)
    call f90xml_doc_createElement (el,doc, name, error)
    if (el == 0) then 
        print *, "Document.createElement: NULL"
        stop
    endif

    string = "0.6.x"
    call f90xml_str_mkref (value,string,error)
    call f90xml_doc_createTextNode (txtnode,doc, value, error)
    if (txtnode == 0) then 
        print *, "Document.createTextNode"
        stop
    endif 

    call f90xml_el_appendChild (result, el, txtnode, error)
    if (result /= txtnode) then
        print *, "Element.appendChild: failed"
        stop
    endif

    call f90xml_el_appendChild (result, root, el, error)
    if (result /= el) then
        print *, "Element.appendChild: failed"
        stop
    endif

    string = "examplea.xml"
    call f90xml_di_saveDocToFile (bool, domimpl, doc, string, 0, error)

    if (error /= 0) then
        print *, "DOMImplementation.saveDocToFile: failed"
        stop
    endif

end program
