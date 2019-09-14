#include<iostream>

using namespace std;

int main()
{
    int num1,num2;
    cout<<"Enter two numbers"<<endl;
    cin>>num1>>num2;
    if(num1>num2)
        cout<<"num1: "<<num1<<" is greater than num2\n";
    if(num2>num1)
        cout<<"num2: "<<num2<<" is greater than num1\n";
    if(num1==num2)
        cout<<"num1 is equal to num2\n";
    if(num1!=num2)
        cout<<"num1 is not equal to num2\n";
    if(num1<=num2)
        cout<<"num1 is less than or equal to num2\n";

    return 0;

}
