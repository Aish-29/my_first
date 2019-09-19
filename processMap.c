/*
*Author: Aishnaya Jamwal
*Date: 19th Sep 2019
*Description: Understanding process address space
**/

#include<stdio.h>

//Global Variabl Declaration
int gvar_1; //uninitialised global variable
int gvar_2= 10; //initialised global variable

static int svar_1;//uninitialised static global variable
static int svar_2= 20; //initialised static global variable

//Entry Point
int main(int argc,char* argv[]) //function name represents address
{
    int loc =10;

    printf("Main: %p\n",main);
    printf("gvar_2: %p\n",&gvar_2);
    printf("svar_2: %p\n",&svar_2);
    printf("gvar_1: %p\n",&gvar_1);
    printf("svar_1: %p\n",&svar_1);
    printf("loc var: %p\n",&loc); // local/auto variable

} 
