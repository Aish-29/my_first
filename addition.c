#include<stdio.h>
int add(int a,int b)
{
	if(!a)
		return b;
	else
		return add((a&b)<<1,a^b);
}
void main()
{
	int a,b,sum;
	printf("Enter two values");
	scanf("%d%d",&a,&b);
	sum=add(a,b);
	printf("Sum=%d",sum);
}

