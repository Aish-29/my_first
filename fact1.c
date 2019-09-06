#include<stdio.h>
int fact(int n);
void main()
{
	int n,res;
	printf("Enter the number: ");
	scanf("%d",&n);
	res=fact(n);
	printf("%d!=%d\n",n,res);
}

int fact(int n)
{
	if(n==0 || n==1)
		return 1;
	else
		return n*fact(n-1);
}
