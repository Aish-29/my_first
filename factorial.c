#include<stdio.h>
void fact(int n);
void main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	fact(n);
}

void fact(int n)
{
	int num=1;
	for(int i=1;i<=n;i++)		
		num=num*i;	
	printf("%d!=%d",n,num);
}
