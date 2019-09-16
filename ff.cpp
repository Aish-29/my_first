#include<iostream>

using namespace std;

class A
{
    public:
        void showB(B &);
};
class B
{
    private:
        int x;
    public:
	B(){x=0;}
	friend void A::showB(B &b);
};

void A::showB(B &b)
{
    cout<<"B::b= "<<b.x<<endl;
}
int main()
{
    A a;   
    B b;
    a.showB(b);
    return 0;
}
