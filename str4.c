#include<stdio.h>
#include<string.h>

int main()
{
    char str1[]="Hello",str2[]="Aishnaya";
    //printf("%s\n",strcpy(str2,str1));
    //strncpy(str2,str1,3);
    //printf("%s\n",strncpy(str2,str1,3));
    if(strstr(str2,str1)!='\0')
        printf("Found similar stuff");
    else 
        printf("Nothing is similar");
    return 0;
}
