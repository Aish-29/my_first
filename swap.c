#include<stdio.h>

int main(){
    int num1,num2;
    printf("Enter Number 1 and Number 2 :");
    scanf("%d %d",&num1,&num2);
    printf("The numbers are :%d,%d\n",num1,num2);
    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;
    printf("The swapped numbers are :%d,%d\n",num1,num2);
    return 0;
}
