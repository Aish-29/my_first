#include<stdio.h>

int fact(int n);

int main(){
    int num;
    printf("Enter the number to find the factorial: ");
    scanf("%d",&num);
    int res = fact(num);
    printf("The factorial of %d is :%d\n ",num,res);
    return 0;
}
int fact(int n){
    if(n == 1)
        return 1;
    else if(n == 0)
        return 1;
    else {
        return n*fact(n-1);
    }
}
