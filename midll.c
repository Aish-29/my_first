#include<stdio.h>
#include<stdlib.h>
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

int main()
{
    int n,d,i;
    struct s* head=NULL;
    struct s* rear=NULL;
    struct s* temp=NULL;
   // struct s* newtemp=NULL;
    head=(struct s*)malloc(sizeof(struct s));
    rear=(struct s*)malloc(sizeof(struct s));
    temp=(struct s*)malloc(sizeof(struct s));
    //newtemp=(struct s*)malloc(sizeof(struct s));
    printf("Enter the number of elements you want to insert:");
    scanf("%d",&n);
    printf("Enter the data to insert in first element:");
    scanf("%d",&d); 
    rear->data=d;
    rear->ptr=NULL;
    head=rear;
    temp=rear;
    if(n>1){
    for(i=0;i<n-1;i++){
        printf("Enter the data to insert element:");
        scanf("%d",&d); 
        rear-> data=d;
        rear->ptr=NULL;
        rear=temp->ptr;
        temp=temp->ptr;
    }
    }
    print(head);
    return 0;
}
