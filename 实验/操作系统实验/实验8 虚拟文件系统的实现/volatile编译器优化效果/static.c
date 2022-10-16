#include <stdio.h>
#include "threads.h"
#define SIZE 5

int func(void *id)
{
    //_Thread_local variable 
    static thread_local int var = 5;
    var += 5;

    //Print id of current thread and addr of var
    printf("Thread ID:[%d], Value of var: %d\n", *(int*)id, var);

    return 0;
}

int func1(void *id)
{
    //_Thread_local variable 
    static thread_local int var = 10;
    var += 5;

    //Print id of current thread and addr of var
    printf("Thread ID:[%d], Value of var: %d\n", *(int*)id, var);

    return 0;
}

int main(void)
{
    thrd_t id[SIZE];

    //thread ID arr
    int arr[SIZE] = {1, 2, 3, 4, 5};

    //Creating 5 threads
    for(int i = 0; i < SIZE/2; i++) {
        thrd_create(&id[i], func, &arr[i]);
    }
    for(int i = SIZE/2; i < SIZE; i++) {
        thrd_create(&id[i], func1, &arr[i]);
    }

    //Wait for threads to complete
    for(int i = 0; i < SIZE; i++) {
        thrd_join(id[i], NULL);
    }
}
