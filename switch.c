#include<stdio.h>
void main()
{
	int ch;
	printf("\nWho is captain of the Indian cricket team?\n1.Virat \n2.Dhoni\n3.Ashwin \n4.Bumrah\nPlease enter your choice...");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: printf("Congratulations! Your answer is right\n");
			break;
		case 2: printf("Sorry! Wrong answer. Dhoni was the ex-captain of the Indian cricket team. Better luck next time!!!");
			break;
		case 3: printf("Sorry! Wrong answer. Ashwin was a spinner. Better luck next time!!!");
			break;
		case 4: printf("Sorry! Wrong answer. Bumrah is a spinner. Better luck next time!!!");
			break;
		default: printf("Invalid choice");
	}
}
