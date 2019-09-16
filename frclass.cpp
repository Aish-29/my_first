#include<iostream>

using namespace std;

class A
{
    private:
        int a;
    public:
	A(){a=0;}
	friend class B;
};
class B
{
    private:
	int b;
    public:
	void showA(A &x)
	{
	    cout<<"A::a= "<<x.a<<endl;
	}
};
int main()
{
    A a1;
    B b1;
    b1.showA(a1);
    return 0;
}
