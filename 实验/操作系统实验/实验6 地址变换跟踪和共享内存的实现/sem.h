#ifndef _SEM_H
#define _SEM_H

#include <linux/sched.h>

typedef struct {
	char  name ;
	unsigned int value;
	struct task_t* queue ;
} sem_t;

sem_t* sys_sem_open(const char  name, unsigned int value) ;
void sys_sem_wait(sem_t* sem) ;
void sys_sem_post(sem_t* sem) ;
void sys_sem_unlink(const char * name) ;

#endif
