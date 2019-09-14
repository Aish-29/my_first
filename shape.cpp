using namespace std;
#include<iostream>
#define PI 3.142
class Shape{

public:

Shape(double s=1)
{
cout<<"Area of square= "<<s*s<<" sq. units"<<endl;
}
Shape(int l=1,int b=1)
{
cout<<"Area of rectangle= "<<l*b<<" sq. units"<<endl;
}
Shape(float r=1.0f)
{
cout<<"Area of circle= "<<(PI*r*r)<<" sq. units"<<endl;
}	

};
int main()
{
Shape s(2.9);
Shape s1(2,4);
Shape s2(2.0f);
return 0;
}
