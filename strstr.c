#include<stdio.h>


void find(char* m,char* n)
{
    int flag=0;
    while(*m!='\0'||*n!='\0')
    {
        if(*m==*n)
        {
            m++;
            n++;
            flag++;
        } 
        else
        {
            m++;
            n++;
        }
    }
    if(flag)
        printf("They are similar");
     else
         printf("They are not similar");
    
}
int main()
{
    char a1[20],a2[20];
    printf("Enter a1:");
    gets(a1);
    printf("Enter a2:");
    gets(a2);
    char* p1=a1;
    char* p2=a2;
    find(p1,p2);
    return 0;
}
