#include<stdio.h>

int add(int a,int b);

int main(){
    int num1,num2;
    printf("Enter num1 and num2 :");
    scanf("%d %d",&num1,&num2);
    int res =add(num1,num2);
    printf("Addition is :%d\n",res);
    return 0;
}
int add(int a,int b){
    if(!a)
        return b;
    else
        return add(a&b<<1,a^b);

}

