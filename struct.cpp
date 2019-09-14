#include<iostream>

using namespace std;

class Time{
    private:
        int hour;
        int minute;
        int second;
    public:
        Time();
        void setTime(int,int,int);
        void printMilitary();
        void printStandard();
};

Time::Time(){
    hour=minute=second=0;
}
void Time::setTime(int h,int m,int s){
    hour = (h>= 0 && h<24)?h:0;
    minute = (m>=0 && m<=60)?m:0;
    second = (s>=0 && s<=60)?s:0;
}
void Time::printMilitary(){
    cout<<(hour <10 ? "0": "")<< hour<< ":" << (minute <10 ? "0" : "")<< minute;
        
}
void Time:: printStandard(){
    cout<<((hour == 0|| hour ==12 ? 12: hour)<< hour<<":"<< (minute <10 ? "0" :"")<<minute<<":"<<(second<10?"0":"")<<second<<(hour<12?"AM":"PM");
}

int main()
{
    int hr,min,sec;
    Time t;
    /*cout<<"Enter hour/Minute/Seconds:"<<endl;
    cin>>hr>>min>>sec;
    t.setTime(hr,min,sec);*/
    cout<<"The initial military time is:";
    t.printMilitary();
    cout<<"\n The initial standard time is:";
    t.printStandard();
    return 0;    
}
 


