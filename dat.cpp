using namespace std;
#include<iostream>

class date
{
    public:
        date(int d = 1,int m = 1,int y = 1990)
        {
            day =d;
            month =m;
            year =y;
        }
        date(const date &d1)
        {
           day =d1.day;
           month= d1.month;
           year= d1.year;
        }
        void print()
        {
            cout<<"Date is: "<<day<<"/"<<month<<"/"<<year<<endl;
        }

        
    private:
        int day;
        int month;
        int year;
};
int main()
{
    date d1(4,5,2017);
    d1.print();
    date d(d1);    
    d.print();
    return 0;
}


