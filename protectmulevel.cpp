#include<iostream>

using namespace std;

class A
{
    protected:
	A()
	{
	    cout<<"Class A constructor"<<endl;
	}
        };

class B:protected A
{
    protected:
	B()
	{
	    cout<<"Class B constructor"<<endl;
	}
        
};
class C:protected B
{
    public:
	C()
	{
	    cout<<"Class C constructor"<<endl;
	}
};

int main()
{
    C c;
    return 0;
}
