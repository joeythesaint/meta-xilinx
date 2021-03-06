DEFAULTTUNE ?= "microblaze"
SOC_FAMILY ?= "microblaze"

require conf/machine/include/tune-microblaze-features.inc
require conf/machine/include/soc-family.inc

TUNEVALID[microblaze] = "Microblaze"
AVAILTUNES += "microblaze"

TUNE_FEATURES_tune-microblaze = "microblaze"
PACKAGE_EXTRA_ARCHS_tune-microblaze = "${TUNE_PKGARCH}"

# Linux Configuration
KERNEL_IMAGETYPE ?= "linux.bin.ub"

# U-Boot Configuration
UBOOT_MACHINE ?= "microblaze-generic"

# linux-yocto KMACHINE
KMACHINE ?= "microblaze"
