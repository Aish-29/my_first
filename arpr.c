#include<stdio.h>

int main()
{
    char* name[]={"ravi","ravindra","ravinralala"}; 
    printf("%s",*(name+1));
    return 0;
}
