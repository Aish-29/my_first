#include<stdio.h>
 int top=-1;
 int arr[7],size;
void pop()
{
    printf("The element being popped is :%d\n",arr[top]);
    top--;
}
void display(int t)
{
    int i;
    for(i=t;i>=1;i--)
        printf("%d\n",arr[i]);

}
int main()
{
    int i,j,ele;
    printf("Enter the number of elements you want to push");
    scanf("%d",&size);
    for(i=0;i<size;i++){
        if(top==size)
            printf("stack overflow!\n");
        else {
            printf("Enter the element to push\n");
            scanf("%d",&ele);
            arr[++top]=ele;
        }
    }
    display(top);
    pop();
    display(top);
    pop();    
    display(top);
    return 0;
}
