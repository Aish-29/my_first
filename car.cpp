#include<iostream>

using namespace std;

class fourwheeler
{
    public:
        fourwheeler()
	{
	    cout<<"This is a four wheeler"<<endl;
	}
};
class vehicle
{
    public:
        vehicle()
	{
	    cout<<"This is a vehicle"<<endl;
	}
};
class car:public vehicle,public fourwheeler
{

};

int main()
{
    car c;
    return 0;
}
