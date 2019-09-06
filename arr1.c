#include<stdio.h>

void input(int a[][2]){ 
    int i,j;
    printf("Enter the elements into 2x2 matrix :");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&a[i][j]);
        }
    }
   

}
void add(int a[][2],int b[][2]){
    int i,j;
    printf("The addition of the 2 matrices is:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d\t",a[i][j]+b[i][j]);

        }
        printf("\n");
    }
}
int main(){
    int arr1[2][2],arr2[2][2];
    input(arr1);
    input(arr2);
    add(arr1,arr2);
    return 0;
}
