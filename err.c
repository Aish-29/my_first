#include<stdio.h>

int main()
{
    int arr[]={1,2,3,4,5};
    int n = 5,i;
    for(i=0;i<n;i++)
    {
        printf("%d\n",*(arr+i));
    }
    printf("%d\n",arr++);
    return 0;
}
