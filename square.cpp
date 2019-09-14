#include<iostream>

using namespace std;

int square(int x){ return x*x;}
double square(double y){ return y*y;}

int main()
{
    cout<<"The square of integer 7 is: "<<square(7)<<endl;
    cout<<"The square of floating 9.00 is: "<<square(9.00)<<endl;
}
