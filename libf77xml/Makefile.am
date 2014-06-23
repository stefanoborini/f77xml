lib_LTLIBRARIES=libf77xml.la

INCLUDES=$(GDOME2_CFLAGS)

libf77xml_la_SOURCES=f77backend.c f77interface.c cache.c pointerref.c stringobj.c mp_p2t1.c  mp_p3t2.c  mp_p3t4.c  mp_p4t2.c  mp_p4t4.c mp_p4t5.c mp_p5t2.c  mp_p5t4.c  mp_p5t6.c  mp_p6t1.c  mp_p6t3.c mp_p3t1.c  mp_p3t3.c  mp_p4t1.c  mp_p4t3.c  mp_p5t1.c  mp_p5t3.c  mp_p5t5.c  mp_p5t7.c  mp_p6t2.c mp_p8t1.c f90xml.f90 
EXTRA_DIST=cache.h error.h mp_p3t1.h  mp_p3t4.h  mp_p4t3.h  mp_p5t1.h  mp_p5t4.h  mp_p5t7.h  mp_p6t3.h     stringobj.h defines.h  f77backend.h  mp_p3t2.h  mp_p4t1.h  mp_p4t4.h  mp_p5t2.h  mp_p5t5.h  mp_p6t1.h  mp_p8t1.h domimpl.h  mp_p2t1.h     mp_p3t3.h  mp_p4t2.h  mp_p4t5.h  mp_p5t3.h  mp_p5t6.h  mp_p6t2.h  pointerref.h implementation_p2t1.c  implementation_p3t4.c  implementation_p4t4.c  implementation_p5t3.c  implementation_p5t7.c  implementation_p8t1.c implementation_p3t1.c  implementation_p4t1.c  implementation_p4t5.c  implementation_p5t4.c  implementation_p6t1.c implementation_p3t2.c  implementation_p4t2.c  implementation_p5t1.c  implementation_p5t5.c  implementation_p6t2.c implementation_p3t3.c  implementation_p4t3.c  implementation_p5t2.c  implementation_p5t6.c  implementation_p6t3.c f90vars.inc apigen-2.xml
libf77xml_la_LDFLAGS=$(F77XML_VERSION_INFO)
libf77xml_la_LIBADD=$(GDOME2_LIBS)



libf77xmlincdir=$(includedir)

libf77xmlinc_HEADERS=f90xml.mod

LTFCCOMPILE=$(LIBTOOL) --tag=F77 --mode=compile $(FC) $(AM_FCFLAGS) $(FCFLAGS)
FCLINK = $(LIBTOOL) --tag=F77 --mode=link $(FCLD) $(AM_FCFLAGS) $(FCFLAGS) \
    $(AM_LDFLAGS) $(LDFLAGS) -o $@

