#include<iostream>

using namespace std;

template<class T,class U=char>
class A
{
    public:
	T x;
	U y;
	A(){ cout<<"Constructor called"<<endl;}
};

int main()
{
    A<char> a; //calls A(char,char)
    return 0;       
}
