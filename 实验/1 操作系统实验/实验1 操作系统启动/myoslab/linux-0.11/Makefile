#
# if you want the ram-disk device, define this to be the
# size in blocks.
#
RAMDISK =  #-DRAMDISK=512

AS86	=as86 -0 -a
LD86	=ld86 -0

AS	=as
LD	=ld
LDFLAGS	=-m elf_i386 -Ttext 0 -e startup_32
CC	=gcc-3.4 -march=i386 $(RAMDISK)
CFLAGS	=-m32 -g -Wall -O2 -fomit-frame-pointer 

CPP	=cpp -nostdinc -Iinclude

#
# ROOT_DEV specifies the default root-device when making the image.
# This can be either FLOPPY, /dev/xxxx or empty, in which case the
# default of /dev/hd6 is used by 'build'.
#
ROOT_DEV= #FLOPPY 

ARCHIVES=kernel/kernel.o mm/mm.o fs/fs.o
DRIVERS =kernel/blk_drv/blk_drv.a kernel/chr_drv/chr_drv.a
MATH	=kernel/math/math.a
LIBS	=lib/lib.a

.c.s:
	$(CC) $(CFLAGS) \
	-nostdinc -Iinclude -S -o $*.s $<
.s.o:
	$(AS)  -o $*.o $<
.c.o:
	$(CC) $(CFLAGS) \
	-nostdinc -Iinclude -c -o $*.o $<

all:	Image

Image: boot/bootsectp boot/setupp tools/build
	tools/build boot/bootsectp boot/setupp none $(ROOT_DEV) > Image
	sync

boot/bootsectp:	boot/bootsect.s
	$(AS86) -o boot/bootsect.o boot/bootsect.s
	$(LD86) -s -o boot/bootsect boot/bootsect.o
	dd bs=1 if=boot/bootsect of=boot/bootsectp skip=32
	sync

boot/setupp:	boot/setup.s
	$(AS86) -o boot/setup.o boot/setup.s
	$(LD86) -s -o boot/setup boot/setup.o
	dd bs=1 if=boot/setup of=boot/setupp skip=32
	sync	

tools/build: tools/build.c
	gcc $(CFLAGS) \
	-o tools/build tools/build.c

