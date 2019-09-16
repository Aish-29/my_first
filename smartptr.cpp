#include<iostream>
using namespace std;

class SmartPtr
{
    int *ptr;
    public:
	explicit SmartPtr(int *p=NULL){ptr=p;} //use explicit keyword; tells indirectly, this is a constructor/ smart pointer
	~SmartPtr(){delete(ptr);} //destructor
 
         int &operator *(){return *ptr;} //overloading dereferencing operator
};

int main()
{
    SmartPtr ptr(new int());
    *ptr=20;
    cout<<*ptr;
}
