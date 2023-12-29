

ccflags-y +=-g
# normal makefile
KDIR ?= $$HOME/repos/linux-stable

default:
	$(MAKE) -C $(KDIR) M=$$PWD

	$(CROSS_COMPILE)strip -g hello.ko
clean:
	$(MAKE) -C $(KDIR) M=$$PWD clean
