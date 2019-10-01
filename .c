#include<stdio.h>
void main()
{
	int a=5,b=2;
	a^=b^=a;

	printf("%d  %d",a,b);
}
