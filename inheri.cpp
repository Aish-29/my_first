#include<iostream>

using namespace std;

class Parent
{
    public:
        int id_p;
};
class child:public Parent
{
    public:
        int id_c;
};

int main()
{
    child obj1;
    obj1.id_p=7;
    obj1.id_c=21;
    cout<<"Child ID is :"<<obj1.id_c<<endl;
    cout<<"Parent ID is :"<<obj1.id_p<<endl;
    return 0;
}
