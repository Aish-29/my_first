#include<stdio.h>
#include<stdlib.h>
int top=-1;
struct s
{
    int data;
    struct s* ptr;
};

void print(struct s* f)
{
    while(f!=NULL)
    {
        printf("%d\n",f->data);
        f=f->ptr;

    }

}
void addfront(struct s* n,struct s* f) 
{
    n->data=7;
    n->ptr=f; 
}
void addback(struct s* n,struct s* t) 
{
    n->data=4;
    n->ptr=NULL;
    while(t->ptr!=NULL)
    {
        t=t->ptr;
    }
    t->ptr=n;  
}
struct s* delfront(struct s* t)
{
    struct s* tp=t->ptr;
    t->ptr=NULL;
    free(t);
    return tp;
}
void delend(struct s* t,struct s* n)
{
    while(t!=NULL)
    {
        t=t->ptr;
    }
    if(n!=t){
        n=n->ptr;
    }
    n->ptr=NULL;
    free(t);
}
int main()
{
    int ch;
    printf("Enter your choice to perform an operation:\n");
    printf("1.Display the linked list\n2.Add an element in the front of the linked list\n3.Add an element to the end of the linked list\n4.Delete an element in the  front of the linked list\n5.Delete an element at the end of the linked list\n6.Add an element anywhere inthe linked list\n7.Delete an element from anywhere in the linked list\n");
    scanf("%d",&ch);
    struct s* first=NULL;
    struct s* second=NULL;
    struct s* third=NULL;
    struct s* newtemp=NULL;
    struct s* temp=NULL;
    first=(struct s*)malloc(sizeof(struct s));
    second=(struct s*)malloc(sizeof(struct s));
    third=(struct s*)malloc(sizeof(struct s));

    newtemp=(struct s*)malloc(sizeof(struct s));
    first-> data=1;
    first->ptr=second;
    second-> data=2;
    second->ptr=third;
    third-> data=3;
    third->ptr=NULL;
    temp=first;
    struct s* u;
    switch(ch){
        case 1:print(first);
               break;
        case 2: addfront(newtemp,first);
                first=newtemp;
                print(first);
                break;
        case 3: addback(newtemp,temp);
                print(first);
                break;
        case 4: u=delfront(temp);  
                first=u;
                print(first);
                break;
        case 5: newtemp=first;
                delend(temp,newtemp);  
                print(first);
                break;
        case 6:
        case 7:
       default: printf("Wrong Choice! Select between 1-3");
    }
    return 0;
}
