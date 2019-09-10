#include<stdio.h>

int front=-1;
int rear=-1;
int size =4;
int arr[4];

void enqueue()
{
    int i;
    printf("Enter the elements into the queue:\n");
    front++;
    rear++;
    for(i=0;i<4;i++){
        scanf("%d",&arr[rear]);
        rear++;
    }
}
void display()
{
    int j;
    for(j=front;j<=rear;j++)
        printf("%d\n",arr[j]);
}
void dequeue()
{
      if(front!=rear){
      printf("Element being dequeued is:%d",arr[front]);
      front++;
      display();
      }
      printf("Element being dequeued is:%d",arr[front]);
      display();
}
int main()
{
     enqueue();
     display();
     dequeue();       
    return 0;
}
