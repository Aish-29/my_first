#include<iostream>

using namespace std;

class box
{
    private:
        int height;
        int width;
        int length;
    public:
        box();
        void boxVol(int h,int w,int l);
        void print();
};

box::box()
{
    height=0;
    width=0;
    length=0;
}
void box::boxVol(int h=20,int w=20,int l=20)
{
    height=h;
    width=w;
    length=l;
    
}
void box::print()
{
    cout<<"The Length of the box is: "<<length<<endl<<"The Height of the box is: "<<height<<endl<<"The Width of the box is: "<<width<<endl;
}
int main()
{   
    int he,wi,lw;
    box b;
    cout<<"Enter the height, width and length for the box:"<<endl;
    cin>>he>>wi>>lw;
    b.boxVol(he,wi,lw);
    b.print();
    return 0;
}
