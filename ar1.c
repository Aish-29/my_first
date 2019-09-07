#include<stdio.h>

void swap(int *p1,int*p2)
{
    *p1=*p1^*p2;
    *p2=*p1^*p2;
    *p1=*p1^*p2;
    printf("Value of var1 :%d\n",*p1);
    printf("Value of var2 :%d\n",*p2);
}
int main()
{
    int *ptr1,*ptr2;
    int var1,var2;
    printf("Enter the value of var1 and var2:");
    scanf("%d %d",&var1,&var2);
    ptr1=&var1;
    ptr2=&var2;
    printf("Value of var1 :%d\n",*ptr1);
    printf("Value of var2 :%d\n",*ptr2);
    swap(ptr1,ptr2);
    return 0;
}
