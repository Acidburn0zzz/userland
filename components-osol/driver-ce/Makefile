#
# This file and its contents are supplied under the terms of the
# Common Development and Distribution License ("CDDL)". You may
# only use this file in accordance with the terms of the CDDL.
#
# A full copy of the text of the CDDL should have accompanied this
# source. A copy of the CDDL is also available via the Internet at
# http://www.illumos.org/license/CDDL.
#

#
# Copyright 2012, Andrzej Szeszo
#

include ../../make-rules/shared-macros.mk

COMPONENT_NAME=		driver-ce
COMPONENT_VERSION=	0.5.11
COMPONENT_SRC=		$(COMPONENT_NAME)
COMPONENT_ARCHIVE=	$(COMPONENT_SRC).tar.gz
# below is required for userland-fetch to bahave
COMPONENT_ARCHIVE_URL=blah

download::
	$(IPS2TGZ) $(COMPONENT_SRC) http://pkg.openindiana.org/legacy \
	pkg:/driver/network/ce@0.5.11,5.11-0.134:20100302T020425Z \
	pkg:/developer/debug/mdb/module/module-ce@0.5.11,5.11-0.134:20100302T014104Z

include ../../make-rules/prep.mk
include ../../make-rules/ips.mk

build:	prep

install:	build
	@$(MKDIR) $(PROTO_DIR)
	@$(CP) -RP $(COMPONENT_SRC)/$(MACH)/* $(PROTO_DIR) || true

clean::
	$(RM) -r $(SOURCE_DIR) $(BUILD_DIR)
