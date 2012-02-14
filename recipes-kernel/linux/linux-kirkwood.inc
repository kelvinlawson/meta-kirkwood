# Fetch Linux kernel from Marvell's git repo (orion.git)

PV = "2.6.35-rc1"
PR = "r8"

# Use Marvell Orion kernel 2.6.35-rc1 from git.marvell.com
LIC_FILES_CHKSUM = "file://COPYING;md5=d7810fab7487fb0aad327b76f1be7cd7"
SRCREV = "67a3e12b05e055c0415c556a315a3d3eb637e29e"
SRC_URI = "git://git.marvell.com/orion.git"

# Provide our own defconfig
SRC_URI += "file://defconfig"

# Add patch for accept4() support on ARM arch (required by systemd)
SRC_URI += "file://arm-accept4.patch"

# Add openstora patch to support Netgear MS2110 (NetStora)
SRC_URI += "file://openstora.patch"

# Add patch to fix Samsung NAND bad block detection in 2.6.35-rc1
SRC_URI += "file://marvell-orion-2.6.35-rc1-samsung_nand.patch"

KSRC ?= ""
S = ${@base_conditional("KSRC", "", "${WORKDIR}/git", "${KSRC}", d)}

# make everything compatible for the time being
COMPATIBLE_MACHINE_$MACHINE = $MACHINE

# only arm is compatible
COMPATIBLE_HOST = "(arm)"
