#	$Id$
#
# Makefile.in for top-level of pcc.
#



ALL_SUBDIRS=	cc
DIST_SUBDIRS=	$(ALL_SUBDIRS) f77

all install clean:
	@for subdir in $(ALL_SUBDIRS); do \
		_nextdir_=$${_thisdir_+$$_thisdir_/}$$subdir; \
		echo "===> $$_nextdir_"; \
		(_thisdir_=$$_nextdir_; export _thisdir_; cd $$subdir && \
		    exec $(MAKE) $(MFLAGS) $@) || exit $$?; \
		echo "<=== $$_nextdir_"; \
	done

distclean:
	@for subdir in $(DIST_SUBDIRS); do \
		_nextdir_=$${_thisdir_+$$_thisdir_/}$$subdir; \
		echo "===> $$_nextdir_"; \
		(_thisdir_=$$_nextdir_; export _thisdir_; cd $$subdir && \
		    exec $(MAKE) $(MFLAGS) $@) || exit $$?; \
		echo "<=== $$_nextdir_"; \
	done
	rm -rf Makefile config.log stamp-h1 config.status \
	    configure.lineno config.h autom4te.cache
