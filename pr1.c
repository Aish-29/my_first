#include<stdio.h>

int main(){
    int arr[]={1,2,3,4,5};
    int i,n=5;
    for(i=0;i<n-1;i++){
        printf("Square of %d is : %d\n",arr[i],arr[i]*arr[i]);       
    }
    return 0;
}
