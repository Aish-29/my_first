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
    struct s* first=NULL;
    struct s* second=NULL;
    struct s* third=NULL;
    first=(struct s*)malloc(sizeof(struct s));
    second=(struct s*)malloc(sizeof(struct s));
    third=(struct s*)malloc(sizeof(struct s));
    first-> data=1;
    first->ptr=second;
    second-> data=2;
    second->ptr=third;
    third-> data=3;
    third->ptr=NULL;

    print(first);
    return 0;
}
