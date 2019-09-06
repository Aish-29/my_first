#include<stdio.h>

int main(){
    char c;
    printf("Enter a small alphabet: ");
    scanf("%c",&c);
    int digit = c;
    int res = digit-32+1;
    printf("The character is :%c\n",(char)res);
    return 0;
}
