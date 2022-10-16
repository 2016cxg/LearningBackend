#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
 
int a = 1;
 
void *child_pth_fun(void *arg);
 
int main(){
 
	int b, c;
	int val = 10000000;
	
	//创建子线程
	pthread_t child_pth_id;
	/*
	pthread_create使用的vfork来实现子进程。fork系统调用创造子进程过程，先find_empty_process获取空pid和任务id，
		然后申请一页内存，将父进程的PCB复制到新页中作为子进程的PCB，修改子进程PCB的参数，修改子进程的父进程节点，
		修改子进程的状态为可运行态TASK_RUNNING，（打开文件表，TSS寄存器结构，信号相关），修改brk堆指针，修改用户程序和内核程序执行时间等，
		同时对基于栈切换进程的进程切换，会构造栈切换数据结构，将当前寄存器的数据压入子进程PCB页的顶部形成子进程内核栈，
		也就是构造子进程内核栈在子进程PCB的页顶端；然后申请数据段&堆栈段页目录项（在0地址空间开始），为页表申请内存，
		将父进程的页表项赋值给新的页表，将新页表地址赋值给页目录项，将子进程的页目录表的地址赋值给CR3寄存器（current指向内存），
		然后修改父进程和子进程页表为只读，增加mem_map内存映射图中对应页的共享数目；之后调用schedule进行进程调度，
		schedule首先从任务数组task_table中找到一个就绪态的进程，然后返回任务号，之后使用switch_to执行进程切换，
		保存PCB，重写tss栈指针（保存intel结构），切换current指针指向切换到的进程，切换ss:esp为切换到的进程的内核栈，然后执行fork的返回，
		fork返回会恢复寄存器数值，最后使用iret指令恢复进程用户空间程序的cs:eip, ss:esp, eflags，重新回到用户程序执行。
		
		vfork的却别在于在复制父进程页表的时候，本来需要修改页表项为只读并且增加mem_map内存映射图的占用数，但是vfork对数据区（数据区分
		初始化数据区.data和未初始化数据区.bss）的页表项并不设置只读，导致数据区的数据是共享数据，子进程在写共享数据的时候会进行写检查write_verify，
		发现这个地方为可读，就不会重新分配空间复制这个变量，那么子进程修改的变量和父进程占用的是同一个变量，达到共享内存的全局变量的效果。
	*/
	pthread_create(&child_pth_id, NULL, child_pth_fun, NULL);
	
		
	b = a;
	

	//延时操作
	//消耗时间片延时
	/*
	消耗时间片方法延迟会占用CPU，这个过程主要发生时钟中断，在while消耗CPU时间的时候，会发生时钟中断，时钟中断发生调度，执行其他程序。
	发生时钟中断的时候进程的运行状态依然是TASK_RUNNING，当while所处进程被重新调度唤醒，会冲洗运行while循环。
	*/
	while(val--) ;
	//通过阻塞延时
	/*
	sleep延时方法会使用设置信号系统调用设置进程的ALARM信号，根据延时时间1s和Linux时间片1个10ms，那么会有1s/10ms=100个时钟中断，也就是ALARM=jiffies+100，
	设置ALARM信号之后，设置进程状态为阻塞状态，然后调用schedule调度程序进行京城调度。当每次时钟中断发生时，会让进程运行时间counter-1,同时会检查每个进程的信号，如果当前jiffies>=ALARM，
	就会设置那个进程的状态为TASK_RUNNING,然后时钟中断启动schedule系统调度，从TASK_RUNNING的进程中找到一个执行switch_to进程切换。switch_to保存PCB，重置TSS栈，
	切换current指针，切换内核栈，然后执行从内核空间返回到用户空间操作。如果是sleep所在的进程，就是返回sleep的用户程序执行。

	消耗CPU延时和阻塞延时的却别在于，CPU延时会占用CPU，这个过程可能发生时钟中断让进程放弃CPU，当时状态是TASK_RUNNING，在就绪队列中；
	阻塞延时会设置进程为TASK_INTERRUPTIBLE并且立即放弃CPU进行进程调度，同时修改ALARM信号，阻塞延时依靠时钟中断检查是否超过ALARM信号设置的时间，等到超过的时候才会设置进程TASK_RUNNING进入就绪队列
	*/
	//sleep(1);
 
	c = a;
	printf("In main pthread: a=%d, b=%d, c=%d\n", a, b, c);
	
 	/*
	pthread_join调用wait调用。wait系统调用等待子进程完成退出之后菜才能退出。当子进程执行自己的程序到右括号}的时候，会调用exit内核函数来杀死进程。
		exit会清空任务数组中子进程所在位置设置为null，同时释放子进程占用的内存（清除页目录表，清除页表的mem_map位置-1），释放占用文件等等。
		修改子进程的运行状态为TASK_END。当发生时钟中断的时候，时钟中断会检查所有进程，如果是TASK_END，就会循环任务队列，将子进程对应的父进程
		等待的子进程数目-1，如果子进程数据变成0，那么父进程将被设置成TASK_RUNNING，然后调用schedule函数进行进程调度。如果调度到父进程，
		父进程从pthread_join的wait系统调用返回到用户空间
	
		如果不适用wait系统调用，那么在父进程右括号}exit退出之后，exit内核退出函数会扫描所有任务队列，对父进程的子进程，因为父进程退出了，会设置
		子进程的父进程为0进程。0进程执行的程序时while(1）{pause}，也就是0进程他不断触发调度。
	*/
	pthread_join(child_pth_id, NULL);
	return 0;
 
}
 
void *child_pth_fun(void *arg){
 
    //子线程修改共享的全局变量
    	a = 4;		
    	printf("In child pthread: a=%d\n", a);
}
