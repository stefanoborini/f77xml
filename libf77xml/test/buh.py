a=file("todo")
b=file("out","w")

for line in a:
	el=line.split()

	print "<function name=\""+el[1]+"\">"
	print "\t<implementation template=\"p",
	print str(len(el))+"t1_",
	if el[0] == "void":
		print "void",
	else:
		print "normal",
	print "\">"
	
	print "\t\t<subs search=\"@funcname@\" replace=\""+el[1]+"\" />"
	if el[0] != "void":
		print "\t\t<subs search=\"@returntype@\" replace=\""+el[0]+"\" />"

	i=0
	for type in el[2:]:
		i=i+1
		print "\t\t<subs search=\"@type"+str(i)+"@\" replace=\""+type+"\" />"
	
	print "\t</implementation>"
	print "</function>"
		

