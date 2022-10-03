/*
 *  linux/tools/build.c
 *
 *  (C) 1991  Linus Torvalds
 */

/*
 * This file builds a disk-image from three different files:
 *
 * - bootsect: max 510 bytes of 8086 machine code, loads the rest
 * - setup: max 4 sectors of 8086 machine code, sets up system parm
 * - system: 80386 code for actual system
 *
 * It does some checking that all files are of the correct type, and
 * just writes the result to stdout, removing headers and padding to
 * the right amount. It also writes some system data to stderr.
 */

/*
 * Changes by tytso to allow root device specification
 */

#include <stdio.h>	/* fprintf */
#include <string.h>
#include <stdlib.h>	/* contains exit */
#include <sys/types.h>	/* unistd.h needs this */
#include <sys/stat.h>
#include <linux/fs.h>
#include <unistd.h>	/* contains read/write */
#include <fcntl.h>

/*
 * Changes by falcon<zhangjinw@gmail.com> to define MAJOR and MINOR for they
 * are not defined in current linux header file linux/fs.h,I copy it from
 * include/linux/fs.h directly.
 */

#ifndef MAJOR
	#define MAJOR(a) (((unsigned)(a))>>8)
#endif
#ifndef MINOR
	#define MINOR(a) ((a)&0xff)
#endif

#define MINIX_HEADER 32
#define GCC_HEADER 1024

#define SYS_SIZE 0x3000

/*
 * Changes by falcon<zhangjinw@gmail.com> to let this kernel Image file boot
 * with a root image file on the first hardware device /dev/hd1, hence, you
 * should prepare a root image file, and configure the bochs with
 * the following lines(please set the ... as suitable info):
 * 	...
 *      floppya: 1_44="Image", status=inserted
 *      ata0-master: type=disk, path="/path/to/rootimage.img", mode=flat ...
 *      ...
 */

#define DEFAULT_MAJOR_ROOT 3
#define DEFAULT_MINOR_ROOT 1

/* max nr of sectors of setup: don't change unless you also change
 * bootsect etc */
#define SETUP_SECTS 4

#define STRINGIFY(x) #x

void die(char * str)
{
	fprintf(stderr,"%s\n",str);
	exit(1);
}

void usage(void)
{
	die("Usage: build bootsect setup system [rootdev] [> image]");
}

int main(int argc, char ** argv)
{
	int i,c,id;
	char buf[1024];

	for (i=0;i<sizeof buf; i++) buf[i]=0;
	if ((id=open(argv[1],O_RDONLY,0))<0)
		die("Unable to open 'boot'");

	i=read(id,buf,sizeof buf);
	fprintf(stderr,"Boot sector %d bytes.\n",i);
	if (i != 512)
		die("Boot block must be exactly 512 bytes");
	if ((*(unsigned short *)(buf+510)) != 0xAA55)
		die("Boot block hasn't got boot flag (0xAA55)");

	i=write(1,buf,512);
	if (i!=512)
		die("Write call failed");
	close (id);

	
	if ((id=open(argv[2],O_RDONLY,0))<0)
		die("Unable to open 'setup'");
	for (i=0 ; (c=read(id,buf,sizeof buf))>0 ; i+=c )
		if (write(1,buf,c)!=c)
			die("Write call failed");
	close (id);
	if (i > SETUP_SECTS*512)
		die("Setup exceeds " STRINGIFY(SETUP_SECTS)
			" sectors - rewrite build/boot/setup");
	fprintf(stderr,"Setup is %d bytes.\n",i);
	for (c=0 ; c<sizeof(buf) ; c++)
		buf[c] = '\0';
	while (i<SETUP_SECTS*512) { // fill blanket bytes with \0
		c = SETUP_SECTS*512-i;
		if (c > sizeof(buf))
			c = sizeof(buf);
		if (write(1,buf,c) != c)
			die("Write call failed");
		i += c;
	}
	
	return 0 ;
}
