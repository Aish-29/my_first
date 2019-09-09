#include<stdio.h>


struct st{
    char name[20];
    int age;
    char city[15];
    float salary;
    
}s;
int main(){
    int i;
    printf("Enter name:");
    gets(s.name);
    printf("Enter age:");
    scanf("%d",&s.age);
    printf("Enter city:");
    scanf("%s",s.city);
    printf("Enter Salary:");
    scanf("%f",&s.salary);
    printf("Hi %s. You have entered the following details:\n",s.name);
    printf("Age :%d\n",s.age);
    printf("City :%s\n",s.city);
    printf("Salary :%f\n",s.salary);
    return 0;
}
