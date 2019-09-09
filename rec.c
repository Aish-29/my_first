#include<stdio.h>

void A(int n)
{
    if(n>0)
    {
        printf("%d\n",n);
        A(n-1);
        printf("%d\n",n);
    }
            
}
int main()
{
    int n;
    printf("Enter a value for n:");
    scanf("%d",&n);
    A(n);
    return 0;
}
