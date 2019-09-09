#include <stdio.h>

#include <string.h>

#include<stdlib.h>

char * mystrndup(char *str,int n)
{

char * p;
p=malloc(n); //returns address of first memory allocation
memcpy(p,str,n);
return p;
}

int main(int argc,char ** argv)
{
char * dup;
for(int i=1;i<=argc;i++)
{
dup=mystrndup(argv[i],strlen(argv[i]));
printf("\n Duplicate string is %s \n",dup);
}
free(dup);
}
