#include<iostream>

using namespace std;

class construct
{
    private :
        static int data;
    public:
        construct(int num);
        ~construct();
};
 construct::construct(int num)
{
    data=num;
    cout<<data<<endl;          
}
construct::~construct()
{
    data--;
    cout<<data<<endl;
}

int main()
{
    construct c[10];
    
}
