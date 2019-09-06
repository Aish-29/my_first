#include<stdio.h>
void main()
{
	int score;
	char name[25];
	printf("Enter your name: ");
	scanf("%s",name);
	printf("Enter your cool: ");
	scanf("%d",&score);
	if(score>7)
		printf("Hey %s! You are cool..",name);
	else
		printf("Sorry %s! Better luck next time..",name);
}
