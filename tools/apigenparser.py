import xml.dom.minidom

class ParseException(Exception):
    pass

class Template:
    def __init__(self,name,code):
        self.name=name
        self.code=code

class Signature:
    def __init__(self,type):
        self.type=type
        self.paramList=[]
        self.returnType=''
        self.functionList=[]
        self.__convDictLetter={     "bool *" : "b", \
                    "unsigned int *" : "u", \
                    "code *" : "c", \
                    "StringObj *" : "s", \
                    "error *" : "e" }
        self.__convDictF90={     "bool *" : "logical", \
                    "unsigned int *" : "integer", \
                    "code *" : "integer", \
                    "StringObj *" : "character(len=*)", \
                    "error *" : "integer" }
    def signCode(self):
        tagList=[self.returnType]
        tagList.extend(self.paramList)
        letterList=map(self.tagToLetter,tagList)
        letterList.insert(1,"|")
        return "".join(letterList)

    def tagToLetter(self,tag):
        try:
            letter=self.__convDictLetter[tag]
        except KeyError:
            letter="?"
        return letter
    def tagToF90(self,tag):
        try:
            code=self.__convDictF90[tag]
        except KeyError:
            code="?"
        return code

class Function:
    def __init__(self,name):
        self.name=name
        self.code=''
        self.sign=None
        

class ApiGenParser:
    def __init__(self):
        self.__templates={}
        self.signList=[]
    def parse(self,filename):
        doc=xml.dom.minidom.parse(filename)
        templateroot=doc.documentElement.getElementsByTagName("templates")[0]
        
        self.__parseTemplates(templateroot)

        signatureroot=doc.documentElement.getElementsByTagName("signatures")[0]
        self.__parseSignatures(signatureroot)
        

    def __parseTemplates(self, root):
        
        templateNodes=root.getElementsByTagName("template")

        for node in templateNodes:
            self.__parseTemplate(node)
    
    def __parseTemplate(self, root):
        name=root.getAttribute("name")
        
        if name == '':
            raise ParseException
        
        code=[a.nodeValue for a in root.childNodes if a.nodeType==xml.dom.minidom.Node.TEXT_NODE \
                or a.nodeType==xml.dom.minidom.Node.CDATA_SECTION_NODE]
        
        code=''.join(code)
        
        self.__templates[name]=Template(name,code)
        
    def __parseSignatures(self, root):
        signNodes=root.getElementsByTagName("sign")

        for node in signNodes:
            self.__parseSignature(node)

    def __parseSignature(self,root):
        type=root.getAttribute("type")
        
        s=Signature(type)
        paramRoot=root.getElementsByTagName("parameterList")[0]
        for node in paramRoot.getElementsByTagName("parameter"):
            s.paramList.append(node.getAttribute("type"))
        
        s.returnType=paramRoot.getElementsByTagName("return")[0].getAttribute("type")
        funcRoot=root.getElementsByTagName("functionList")[0]
        for node in funcRoot.getElementsByTagName("function"):
            func=self.__parseFunction(node)
            func.sign = s
            s.functionList.append(func)
        self.signList.append(s)

    def __parseFunction(self,root):
        f=Function(root.getAttribute("name"))
        
        implRoot=root.getElementsByTagName("implementation")

        if len(implRoot) != 0:
            implRoot=implRoot[0]
            template=implRoot.getAttribute("template")
            if template == '':
                f.code=[a.nodeValue for a in implRoot.childNodes if a.nodeType==xml.dom.minidom.Node.TEXT_NODE \
                        or a.nodeType==xml.dom.minidom.Node.CDATA_SECTION_NODE]
                f.code=''.join(f.code)
            else:
                templateCode=self.__templates[template].code
                for subs in implRoot.getElementsByTagName("subs"):
                    templateCode=templateCode.replace(subs.getAttribute("search"),subs.getAttribute("replace"))
                f.code=templateCode
        else:
            f.code=""

        return f
                

                    
                
                    
            
            
        
        

        

        
        
        

