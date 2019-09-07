#include<stdio.h>
#include<string.h>

int main()
{
    char a[]="Hello";
    char b[];
    memset(b,'\0',5);
    char * str1=a;
    char * str2=b;
    strncpy(str2,str1,2);
    printf("%s",str2);
    return 0;
}
