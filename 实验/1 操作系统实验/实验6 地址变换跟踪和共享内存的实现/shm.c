#define __LIBRARY__
#include <unistd.h>
#include <linux/kernel.h>
#include <linux/sched.h>
#include <linux/mm.h>
#include <errno.h>
#include <linux/shm.h>

static shm_ds shm_list[SHM_SIZE] = {{0, 0, 0}};

int sys_shmget(unsigned int key, size_t size)
{
    int i;
    unsigned long page;
    /* If the size exceeds the size of one page of memory */
    if (size > PAGE_SIZE)
    {
        printk("shmget: size %u cannot be greater than the page size %ud. \n", size, PAGE_SIZE);
        return -ENOMEM;
    }
    if (key == 0)
    {
        printk("shmget: key cannot be 0.\n");
        return -EINVAL;
    }
    for (i = 0; i < SHM_SIZE; i++)
    {
        if (shm_list[i].key == key)
        {
            return i;
        }
    }
    page = get_free_page();
    if (!page)
    {
        return -ENOMEM;
    }
    printk("shmget get memory's address is 0x%08x\n", page);
    for (i = 0; i < SHM_SIZE; i++)
    {
        if (shm_list[i].key == 0)
        {
            shm_list[i].key = key;
            shm_list[i].size = size;
            shm_list[i].page = page;
            return i;
        }
    }
    return -1;
}

void *sys_shmat(int shmid)
{

    //printk("shmid/: %d\n", shmid) ;
    unsigned long data_base, brk;
    if (shmid < 0 || SHM_SIZE <= shmid || shm_list[shmid].page == 0 || shm_list[shmid].key <= 0)
    {
    	//printk("EINVAL: %ld %d\n",shm_list[shmid].page, shm_list[shmid].key) ;
        return (void *)-EINVAL;
    }
    data_base = get_base(current->ldt[2]);
    printk("current's data_base = 0x%08x,new page = 0x%08x\n", data_base, shm_list[shmid].page);
    brk = current->brk + data_base;
    current->brk += PAGE_SIZE;
    //map physical address to virtual address
    if (put_page(shm_list[shmid].page, brk) == 0)
    {
        //printk("====abcdefg\n") ;
        return (void *)-ENOMEM;
    }
    //printk("abcdefg\n") ;
    return (void *)(current->brk - PAGE_SIZE);
}

