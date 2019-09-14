#include<iostream>

using namespace std;

class point 
{
    private :
        int x;
        int y;
    public :
        point(int x1,int y1)
        {
            x=x1;
            y=y1;
        }
        int getX()
        {
            return x;
        }
        int getY()
        {
            return y;
        }
};

int main()
{
    int x1,y1;
    int res1,res2;
    cout<<"Enter x and y values:"<<endl;
    cin>>x1>>y1;
    point p(x1,y1);
    res1= p.getX();
    res2= p.getY();
    cout<<"x = "<<x1<<endl<<"y = "<<y1<<endl;
    return 0;
}
