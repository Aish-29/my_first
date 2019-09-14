#include<stdio.h>

int main()
{
    int a=20;
    int* p=&a;
    int** pp=&p;
    printf("%d",sizeof(pp));
    return 0;
}
