#include<stdio.h>

int mod(int a,int b);
int main(){
    int x,y;
    printf("Enter the values of x and y :");
    scanf("%d %d",&x,&y);
    int res = mod(x,y);
    printf("Modulus of %d and %d is :%d\n",x,y,res);
    return 0;
}
int mod(int a,int b){
    int modulus = a%b;
    return modulus;
}
