#include<stdio.h>

int main()
{
    char address[15];
    char arr1[5],arr2[5],arr3[5],arr4[5];
    char* ptr;
    printf("Enter the address:");
    gets(address);  
    ptr=address;
    for(int i=0;i<3;i++){
        if(*(ptr+i)!='.'){
            arr1[i]=*(ptr+i);
        }
    i++;       
    for(int i=4;i<7;i++){
        if(*(ptr+i)!='.'){
            arr2[i]=*(ptr+i);
        }
    i++;
    for(int i=8;i<11;i++){
        if(*(ptr+i)!='.'){
            arr3[i]=*(ptr+i);
        }
    for(int i=12;i<15;i++){
        if(*(ptr+i)!='.'){
            arr4[i]=*(ptr+i);
        }
        
    }
    int num1 = atoi(arr1);
    int num2 = atoi(arr2);
    int num3 = atoi(arr3);
    int num4 = atoi(arr4); 
    if((num1<=0&&num1>255)&&(num2<=0&&num2>255)&&(num3<=0&&num3>255)&&(num4<=0&&num5>255)){
        printf("Invalid ip");
        break();
    }
    if(num4==255)
        printf("Broadcast address");
    if(num4==1||num4==0)
        printf("Gateway address");
    if(num1>=1&&num1<=126)
        printf("the ip belongs to Class A\n");
    if(num1==127)
        printf("Loop back address");
    if(num1>=128&&num1<=191	)
        printf("the ip belongs to Class B\n");
    if(num1>=192&&num1<=223)
        printf("the ip belongs to Class C\n"); 
    if(num1>=224&&num1<=255)
        printf("the ip belongs to Class D\n");

    return 0;
}
