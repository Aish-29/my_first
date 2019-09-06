#include<stdio.h>

void input(int a[][2])
{
    int i,j;
    printf("Enter the elements of the matrix:");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

}
void mult(int a[][2],int b[][2])
{
    int i,j,k;
   int res[2][2];
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            res[i][j]=0;
            for(k=0;k<2;k++)
                res[i][j]+=a[i][k]*b[k][j];
        }
    }
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
        printf("%d\t",res[i][j]);
    printf("\n");
}
}

int main(){
    int arr1[2][2],arr2[2][2];
    input(arr1);
    input(arr2);
    mult(arr1,arr2);
    return 0;
}
