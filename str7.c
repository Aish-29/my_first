#include<stdio.h>

void my_fun(char *p,char*q)
{
    while(*q++=*p++);
    for(int i=0;i<5;i++)
    printf("%c",*(q+i));
}
int main()
{
    char arr1[] ="hello";
    char arr2[5];
    char *p1=arr1;
    char *p2=arr2;
    my_fun(p1,p2);
return 0;
}
