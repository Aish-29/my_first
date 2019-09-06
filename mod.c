#include<stdio.h>
void findmod(int n1,int n2);
void main()
{
	int n1,n2;
	printf("Enter two numbers\n");
	scanf("%d%d",&n1,&n2);
	findmod(n1,n2);
}
void findmod(int n1,int n2)
{
	if(n2!=0)
		printf("The remainder of %d and %d is %d\n",n1,n2,n1%n2);
	else
		printf("Divide by zero error\n");
}
