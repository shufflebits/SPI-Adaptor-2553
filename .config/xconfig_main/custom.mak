## THIS IS A GENERATED FILE -- DO NOT EDIT
.configuro: .libraries,e430 linker.cmd package/cfg/main_pe430.oe430

linker.cmd: package/cfg/main_pe430.xdl
	$(SED) 's"^\"\(package/cfg/main_pe430cfg.cmd\)\"$""\"I:/Projects/MSP430/SPI-Adaptor-2553/.config/xconfig_main/\1\""' package/cfg/main_pe430.xdl > $@
