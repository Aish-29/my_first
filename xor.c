#include<stdio.h>
void main()
{
	int a=5,b=2;
	printf("%d  %d\n",a,b);
	a^=b^=a^=b;
	printf("%d  %d",a,b);
}
