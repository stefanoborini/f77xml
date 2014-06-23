INCLUDES = -I$(srcdir)                             \
        -I$(top_srcdir)/libf77xml               \
        $(LIBGDOME_CFLAGS)                      

noinst_PROGRAMS=bench examplea exampleb examplec


DEPS=$(top_builddir)/libf77xml/libf77xml.la
LDADDS=$(DEPS) $(LIBGDOME_LIBS)

examplea_SOURCES = examplea.f90
examplea_DEPENDENCIES = $(DEPS)
examplea_LDADD = $(LDADDS)

exampleb_SOURCES = exampleb.f90
exampleb_DEPENDENCIES = $(DEPS)
exampleb_LDADD = $(LDADDS)

examplec_SOURCES = examplec.f90
examplec_DEPENDENCIES = $(DEPS)
examplec_LDADD = $(LDADDS)

bench_SOURCES = bench.f90
bench_DEPENDENCIES = $(DEPS)
bench_LDADD = $(LDADDS)

#test_xpath_SOURCES = test-xpath.f90
#test_xpath_DEPENDENCIES = $(DEPS)
#test_xpath_LDADD = $(LDADDS)

EXTRA_DIST = examplea.xml  exampleb_out.xml  exampleb.xml  examplec_out.xml  examplec.xml

LTFCCOMPILE=$(LIBTOOL) --tag=F77 --mode=compile $(FC) $(AM_FCFLAGS) $(FCFLAGS)
FCLINK = $(LIBTOOL) --tag=F77 --mode=link $(FCLD) $(AM_FCFLAGS) $(FCFLAGS) \
    $(AM_LDFLAGS) $(LDFLAGS) -o $@
FCCOMPILE=$(FC) $(INCLUDES) $(AM_FCFLAGS) $(FCFLAGS)
