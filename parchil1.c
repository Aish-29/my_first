#include<stdio.h>
#include<unistd.h>

int main()
{
    int i,cpid;
    static int ctr=0;
    cpid = fork();
if(cpid == 0)
    for(i=0; i<3; i++)
    printf("Child counter is :: %d\n",ctr++);
else 
    for(i=0; i<3; i++)
    printf("Parent counter is :: %d\n",ctr++);
return 0;
}
