#include<stdio.h>
#include<unistd.h> //for sleep()
#include<pthread.h>
#include<stdlib.h>

int g =0;

void * myThreadFun(void* vargp)
{
    sleep(10);
    int* myid = (int*)vargp;
    static int s = 0;
    ++s;
    ++g;
    printf("Thread ID: %d, Static: %d, Global: %d\n", *myid, ++s, ++g); 
}

int main()
{
    int i; 
    pthread_t tid; 
  
    // Let us create three threads 
    for (i = 0; i < 10; i++){ 
        pthread_create(&tid, NULL, myThreadFun, (void *)&tid); 
        
    }
    pthread_exit(NULL); 
    return 0;
}
