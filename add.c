#include<stdio.h>
void add(int v1,int v2);
void sub(int v1,int v2);
void mul(int v1,int v2);
void div(int v1,int v2);
int main()
{
	int v1,v2;
	char ans;
	int ch;
	do{
		printf("Enter the operation\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
		scanf("%d",&ch);		
		printf("Enter the first value : ");
		scanf("%d",&v1);
		printf("Enter the second value : ");
		scanf("%d",&v2);
	
		switch(ch)
		{
			case 1: add(v1,v2);
				break;
			case 2: sub(v1,v2);
				break;
			case 3: mul(v1,v2);
				break;
			case 4: div(v1,v2);
				break;
			default: printf("Invalid Operation");
		}		
		printf("Do you want to continue? y/n  ");
		scanf(" %c",&ans);
	}while(ans!='n'||ans!='N');
	return 0;
}

void add(int v1,int v2)
{
	printf("Sum of the 2 numbers is %d\n", v1+v2);
}

void sub(int v1,int v2)
{
	printf("Difference of the 2 numbers is %d\n", v1-v2);
}

void mul(int v1,int v2)
{
	printf("Product of the 2 numbers is %d\n", v1*v2);
}

void div(int v1,int v2)
{
	if(v2!=0)
		printf("Quotient of the 2 numbers is %d\n", v1/v2);
	else
		printf("Divide by zero error");
}





