#include<unistd.h>
#include<errno.h>
#include<pthread.h>
#include<stdio.h>

void* f1(void*);
void* f2(void*);

int main()
{
    pthread_t tid1,tid2;
    pthread_create(&tid1,NULL,f1,NULL);
    pthread_create(&tid2,NULL,f2,NULL);
    pthread_join(tid1,NULL);
    pthread_join(tid2,NULL);
    printf("\nBye bye from the main thread\n");
    return 0;
}

void* f1(void* arg){
    for(int i=0;i<1000;i++){
	fprintf(stderr,"%c",'x');
	sleep(5);
    }
    pthread_exit(NULL);
}

void* f2(void* arg){
    for(int i=0;i<1000;i++){
        fprintf(stderr,"%c",'o');
	sleep(5);
    }
    return NULL;
}

