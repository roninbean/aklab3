ccflags-y := -I$(PWD)/inc 
ifneq ($(KERNELRELEASE),)

obj-m := hello1.o hello2.o
else

KDIR ?= $$HOME/repos/linux-stable

default:
	$(MAKE) -C $(KDIR) M=$$PWD
clean:
	$(MAKE) -C $(KDIR) M=$$PWD clean
endif
