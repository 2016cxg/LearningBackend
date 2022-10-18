
#include <linux/sem.h>
#include <linux/sched.h>
#include <unistd.h>
#include <asm/segment.h>
#include <linux/tty.h>
#include <linux/kernel.h>
#include <linux/fdreg.h>
#include <asm/system.h>
#include <asm/io.h>


sem_t Buffer[20] ;
int cnt=0;

sem_t* sys_sem_open(const char  name, unsigned int value){
	sem_t* tmp ;
	cli() ;
	
	Buffer[cnt].name = name ;
	Buffer[cnt].value= value ;
	tmp = &Buffer[cnt] ;
	cnt ++ ;
	
	sti() ;
	
	return tmp ;
}

void sys_sem_wait(sem_t* sem){
	/*printk("sem_wait: %c %d\n", sem->name, sem->value) ;*/
	cli() ;
	while( sem->value<=0 )
		sleep_on( &(sem->queue) ) ;
	sem->value-- ;
	sti() ;
}

void sys_sem_post(sem_t* sem){
	//printk("sem_post: %c %d\n", sem->name, sem->value) ;
	cli() ;
	sem->value++ ;
	wake_up( &(sem->queue) ) ;
	sti() ;
}

void sys_sem_unlink(const char * name){
	
}
