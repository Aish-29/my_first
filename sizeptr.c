#include<stdio.h>

int main()
{
    int num1=23;
    float num2=23.32;
    char num3='s';
    int* iptr=&num1;
    float* fptr=&num2;
    char* cptr=&num3;
    printf("%d\n",sizeof(iptr));
    printf("%d\n",sizeof(cptr));
    printf("%d",sizeof(fptr));
    return 0;
}
