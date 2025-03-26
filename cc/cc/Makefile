#	$Id$
#
# Makefile.in for the cc part of pcc.
#

srcdir=.
top_srcdir=../..
top_builddir=../..
prefix = /usr/local
exec_prefix = ${prefix}
bindir = ${exec_prefix}/bin
libdir = ${exec_prefix}/lib
libexecdir = ${exec_prefix}/libexec
includedir = ${prefix}/include
datarootdir = ${prefix}/share
mandir = ${datarootdir}/man
CC = gcc
EXEEXT = 
BINPREFIX = 
TARGOS = linux
TARGOSVER = 0
TARGMACH = amd64
TARGMACHDIR = amd64
TARGET = x86_64-pc-linux-gnu
VERSION = 1.2.0.DEVEL
PCCLIBDIR = $(libdir)/pcc/$(TARGET)/$(VERSION)/lib
PCCINCDIR = $(libdir)/pcc/$(TARGET)/$(VERSION)/include
CFLAGS = -g -O2  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare
CPPFLAGS =  -DLIBEXECDIR=\"$(libexecdir)/\" \
	 -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -DINCLUDEDIR=\"$(includedir)/\" \
	-DPCCINCDIR=\"$(PCCINCDIR)/\" -DPCCLIBDIR=\"$(PCCLIBDIR)/\" \
	-Dos_$(TARGOS) -Dmach_$(TARGMACH) -DTARGOSVER=$(TARGOSVER) \
	-DCXXPROGNAME=\"$(BINPREFIX)p++$(EXEEXT)\" \
	-DCPPROGNAME=\"$(BINPREFIX)pcpp$(EXEEXT)\" \
	-DCC0=\"$(BINPREFIX)cc0$(EXEEXT)\" -DCC1=\"$(BINPREFIX)cc1$(EXEEXT)\" \
	-I$(top_srcdir)/cc/driver -I$(top_builddir) \
	-I$(top_srcdir)/os/$(TARGOS) -I$(MIPDIR) -I$(MDIR) -I$(COMMONDIR)
LIBS = 
LDFLAGS = 
INSTALL = /usr/bin/install -c
INSTALL_PROGRAM = ${INSTALL} -s
INSTALL_DATA = ${INSTALL} -m 644

MIPDIR=$(top_srcdir)/mip
MDIR=$(top_srcdir)/arch/$(TARGMACHDIR)
COMMONDIR=$(top_srcdir)/common

DEST=$(BINPREFIX)cc$(EXEEXT)
DRIVERS=pcc pcpp p++

all: $(DEST)

OBJS=	cc.o compat.o strlist.o xalloc.o

cc.o:	$(srcdir)/cc.c
	$(CC) $(CFLAGS) $(CPPFLAGS) -c -o $@ $(srcdir)/cc.c

compat.o: $(COMMONDIR)/compat.c
	$(CC) $(CFLAGS) $(CPPFLAGS) -c -o $@ $(COMMONDIR)/compat.c

strlist.o: $(top_srcdir)/cc/driver/strlist.c
	$(CC) $(CFLAGS) $(CPPFLAGS) -c -o $@ $(top_srcdir)/cc/driver/strlist.c

xalloc.o: $(top_srcdir)/cc/driver/xalloc.c
	$(CC) $(CFLAGS) $(CPPFLAGS) -c -o $@ $(top_srcdir)/cc/driver/xalloc.c

$(DEST): $(OBJS)
	$(CC) $(LDFLAGS) $(OBJS) -o $@ $(LIBS)

install:
	test -z "$(DESTDIR)$(bindir)" || mkdir -p "$(DESTDIR)$(bindir)"
	test -z "$(DESTDIR)$(mandir)/man1" || mkdir -p "$(DESTDIR)$(mandir)/man1"
	@for driver in $(DRIVERS); do \
		$(INSTALL_PROGRAM) $(DEST) $(DESTDIR)$(bindir)/$(BINPREFIX)$$driver$(EXEEXT); \
		$(INSTALL_DATA) $(srcdir)/cc.1 $(DESTDIR)$(mandir)/man1/$(BINPREFIX)$$driver.1; \
	done
	test -z "$(DESTDIR)$(PCCINCDIR)" || mkdir -p "$(DESTDIR)$(PCCINCDIR)"
	test -z "$(DESTDIR)$(PCCLIBDIR)" || mkdir -p "$(DESTDIR)$(PCCLIBDIR)"

clean:
	rm -f  $(OBJS) $(DEST)

distclean: clean
	rm -f  Makefile
