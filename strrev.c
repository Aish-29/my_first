#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,j;
    char arr[10];
    char arr1[10];
    char arr2[10];
    char sentence[]="Anubhav is trainer";
    char* cptr=&sentence;
    while(*(cptr+i)!=" "){
        for(j=0;j<7;j++){
            arr[j]=*(cptr+j);
        }  
        i++;
    }
    push(arr);
    i++;
    while(*(cptr+i)!=" "){
        for(j=0;j<2;j++)
            arr1[j]=*(cptr+j);
        i++;
    }
    push(arr1);
    i++;
   while(*(cptr+i)!='\0'){
        for(j=0;j<7;j++)
            arr2[j]=*(cptr+j);
        i++;
    }
    push(arr2);
    char a3[]=pop();
    char a2[]=pop();
    char a1[]=pop();
    
    char res=[a3 ' ' a2 ' ' a1];
    printf("%s",res);
    return 0;
}
