#include<stdio.h>

int main()
{
    int num=100;
    int* ptr=&num;
    int** p=&ptr;
    char res=p-ptr;
    printf("%c",res);
    return 0;
}
