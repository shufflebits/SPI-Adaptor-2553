#
_XDCBUILDCOUNT = 
ifneq (,$(findstring path,$(_USEXDCENV_)))
override XDCPATH = C:/ti/grace_2_10_00_78/packages;C:/ti/ccsv5/ccs_base;I:/Projects/MSP430/SPI-Adaptor-2553/.config
override XDCROOT = C:/ti/xdctools_3_25_00_48
override XDCBUILDCFG = ./config.bld
endif
ifneq (,$(findstring args,$(_USEXDCENV_)))
override XDCARGS = 
override XDCTARGETS = 
endif
#
ifeq (0,1)
PKGPATH = C:/ti/grace_2_10_00_78/packages;C:/ti/ccsv5/ccs_base;I:/Projects/MSP430/SPI-Adaptor-2553/.config;C:/ti/xdctools_3_25_00_48/packages;..
HOSTOS = Windows
endif
