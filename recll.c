#include <stdio.h> 
#include<stdlib.h>
struct Node{
	int data;
	struct Node* next;
};

void print(struct Node* h)
{
	
	if(h==NULL)
		return;
	else{
	printf("%d",h->data);
	print(h->next);
	}
	
}


void main()
{

	struct Node* head = (struct Node*)malloc(sizeof(struct Node));
	struct Node* second = (struct Node*)malloc(sizeof(struct Node));;
 	struct Node* third = (struct Node*)malloc(sizeof(struct Node));
 	head->data = 1;
 	head->next = second;

 	second->data = 2;
 	second->next = third;

 	third->data = 3;
 	third->next = NULL; 

	print(head);



}
