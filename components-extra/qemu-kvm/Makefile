#
# This file and its contents are supplied under the terms of the
# Common Development and Distribution License ("CDDL"), version 1.0.
# You may only use this file in accordance with the terms of version
# 1.0 of the CDDL.
#
# A full copy of the text of the CDDL should have accompanied this
# source.  A copy of the CDDL is also available via the Internet at
# http://www.illumos.org/license/CDDL.
#

#
# Copyright 2011 EveryCity Ltd. All rights reserved.
# Copyright 2012, Piotr Jasiukajtis
# Copyright 2012, Andrzej Szeszo
#

include ../../make-rules/shared-macros.mk

COMPONENT_NAME=		illumos-kvm-cmd
COMPONENT_VERSION=	099e212
IPS_COMPONENT_VERSION=	0.0.1.20120306
COMPONENT_SRC=		joyent-illumos-kvm-cmd-$(COMPONENT_VERSION)
COMPONENT_ARCHIVE=	$(COMPONENT_SRC).tar.gz
COMPONENT_ARCHIVE_URL=	https://nodeload.github.com/joyent/illumos-kvm-cmd/tarball/$(COMPONENT_VERSION)

ifeq ($(MACH), sparc)
PUBLISH_STAMP=
endif

include ../../make-rules/prep.mk
include ../../make-rules/configure.mk
include ../../make-rules/ips.mk

PATH= /usr/gnu/bin:/usr/bin

COMPONENT_PREP_ACTION = \
	($(MKDIR) $(SOURCE_DIR)/kvm/include/sys; \
	$(LN) $(COMPONENT_DIR)/illumos-kvm/*.h $(SOURCE_DIR)/kvm/include/sys; )

COMPONENT_PRE_CONFIGURE_ACTION = \
	$(CLONEY) $(SOURCE_DIR) $(@D)

CONFIGURE_ENV += PATH=$(PATH):/usr/sbin

CONFIGURE_OPTIONS += --sysconfdir=/etc
CONFIGURE_OPTIONS += --enable-kvm
CONFIGURE_OPTIONS += --enable-kvm-pit
CONFIGURE_OPTIONS += --enable-vnc-png
CONFIGURE_OPTIONS += --disable-kvm-device-assignment
CONFIGURE_OPTIONS += --enable-trace-backend=dtrace
CONFIGURE_OPTIONS += --target-list="i386-softmmu x86_64-softmmu"
CONFIGURE_OPTIONS += --enable-debug

COMPONENT_BUILD_ENV += PATH=$(PATH):/usr/sbin

COMPONENT_INSTALL_ENV += PATH=$(PATH):/usr/sbin

build_sparc:
	@echo "Not available."

build_i386:	$(BUILD_64)

build:		build_$(MACH)

install_sparc:
	@echo "Not available."

install_i386:	$(INSTALL_64)

install:	install_$(MACH)
