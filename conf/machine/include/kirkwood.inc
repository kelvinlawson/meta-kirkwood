#@TYPE: Machine
#@DESCRIPTION: Machine configuration for various different Marvell Kirkwood based devices

TARGET_ARCH = "arm"

MACHINE_FEATURES 		= "kernel26 usbhost ext2 vfat mmc"

PREFERRED_PROVIDER_virtual/bootloader = ""
PREFERRED_PROVIDER_virtual/kernel = "linux-kirkwood"

IMAGE_FSTYPES += "tar.gz ubi"
SERIAL_CONSOLE = "115200 ttyS0"

# Currently all the orion devices we support use uImage
KERNEL_IMAGETYPE = "uImage"
UBOOT_ENTRYPOINT = "0x00008000"
UBOOT_LOADADDRESS = "0x00008000"

require conf/machine/include/tune-arm926ejs.inc
