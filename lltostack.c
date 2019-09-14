#include<stdio.h>
#include<stdlib.h>
int arr[10],n,i;
struct st
{
    int data;
    struct st* ptr;
};
struct st* top=NULL;
void push(int el)
{
    struct st* temp; 
    temp=(struct st*)malloc(sizeof(struct st));
    temp=top;
    if(!temp)
         printf("Stack overflow\n");
    else
    {
         temp->data=el;
         temp->ptr=top;
         top=temp;
    }
}
void display()
{
    struct st* temp;
    //temp=(struct st*)malloc(sizeof(struct st));
    if(top==NULL)
        printf("Stack underflow\n");
    else
    {
        temp=top;
        while(temp->ptr!=NULL)
            {
                 printf("%d\n",temp->data);
                 temp=temp->ptr;
            }
    }

}
void pop()
{
    struct st* temp;
    //temp=(struct st*)malloc(sizeof(struct st));
     if(top==NULL)
        printf("Stack underflow\n");
    else
    {
        temp=top;
        top=temp->ptr;
        temp->ptr=NULL;
        free(temp);
    }

}
int main()
{
    int ch,ele,n;
    int i=0;
    top=(struct st*)malloc(sizeof(struct st));
    printf("Enter an option:\n");
    printf("1.push an element\n2.Display elements\n3.pop an element\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:printf("How many elements do you want to push:");
               scanf("%d",&n);
               while(i<n){
                   printf("Enter the element to be pushed:");
                   scanf("%d",&ele);
                   push(ele);
                   i++;
               }
              break;
        case 2:display();
               break;
        case 3: pop();
                break;
        default: printf("Wrong option!"); 
    }
    return 0;
}
