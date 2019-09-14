#include<iostream>

using namespace std;

void max(int,int,int);

int main()
{
    int a,b,c;
    cout<<"Enter 3 numbers:"<<endl;
    cin>>a>>b>>c;
    max(a,b,c);
    
}

void max(int num1,int num2,int num3)
{
   ((num1 > num2)&&(num1>num3)) ? cout<<"Num1 is greater than Num2 and Num3" : ((num2>num1) &&(num2>num3)) ? 
                cout<<"Num2 is greater than Num1 and Num3" : ((num3>num1)&&(num3>num2)) ? 
                cout<<"Num3 is greater than Num2 and Num1" : "Num1,Num2,Num3 are equal";

    
}
