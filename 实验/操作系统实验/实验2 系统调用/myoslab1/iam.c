#define __LIBRARY__


#include<unistd.h>
#include<errno.h>
#include<asm/segment.h>
#include<linux/kernel.h>


_syscall1(int, iam, const char*, name) ;

int main(int argc, char* argv[]){
	iam(argv[1]) ;
	return 0 ;
}
