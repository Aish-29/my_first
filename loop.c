#include<stdio.h>

int main(){
    char name[20];
    int cool;
    printf("Enter your name and score yourself! :\t");
    scanf("%s %d",name,&cool);
    if(cool > 7)
        printf("%s you are cool!!\n",name);
    else
        printf("Better Luck Next Time!\n");
    return 0;
}
