#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int p=20;
    int *pp=&p;

    cout<<*pp<<endl;
    free(pp);
    free(pp);
    return 0;
}
