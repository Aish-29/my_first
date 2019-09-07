#include<stdio.h>

int main()
{
    int x = 5;
    int *y =&x;
    printf("%d\n",x); //5
    printf("%d\n",y); //address
    printf("%u\n",y); 
    printf("%u\n",&x);
    printf("%d\n",*y); //5
    return 0;
}
