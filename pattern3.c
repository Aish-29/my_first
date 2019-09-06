#include<stdio.h>
void main()
{
	int n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
			printf(" ");
		for(int k=1;k<=i;k++)
			printf("*");
		printf("\n");	
	}
	
}
