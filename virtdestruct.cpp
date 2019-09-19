#include<iostream>
using namespace std;

class base{
    public:
	base(){cout<<"Constructing base "<<endl;}
        ~base(){cout<<"Destructing Base"<<endl;}
};
class derived :virtual public base{
    public:
	derived(){cout<<"Constructing derived "<<endl;}
        ~derived(){cout<<"Destructing derived "<<endl;}
};
int main(void)
{
    derived *d=new derived();
    base *b=d;
    delete b;
    return 0;
}
