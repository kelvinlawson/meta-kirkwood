inherit kernel
require recipes-kernel/linux/linux-dtb.inc

DESCRIPTION = "Linux kernel for Kirkwood platforms"
SECTION = "kernel"
LICENSE = "GPLv2"

require recipes-kernel/linux/linux-kirkwood.inc

require recipes-kernel/linux/linux-tools.inc
