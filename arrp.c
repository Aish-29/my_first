#include<stdio.h>

int main()
{
    int arr[5][5];
    int n,i,j;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements to the array: ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           scanf("%d",&arr[i][j]); 
        }
    }
    printf("Diagonals are:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           if(i+j==0||i+j==2||i+j==4)
           {
               printf("%d",arr[i][j]);
           } 
           else 
               printf(" ");
        }
        printf("\n");
    }
    return 0;
}
