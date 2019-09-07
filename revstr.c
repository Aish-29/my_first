#include<stdio.h>

int main(){
    char arr[]="world";
    int i,j;
    for(i=0,j=5;i<j;i++,j--){
        char temp;
        temp = arr[i];
        arr[i] =arr[j];
        arr[j] =temp;
    }
    
    printf("%s\n",arr);
    return 0;
}
