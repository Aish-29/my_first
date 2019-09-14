#include<iostream>
#include<string>

using namespace std;

class foo
{
    private:
        float salary;
        string name;
        float sales;
        string empid;
    public:
        foo();
        void getDetails(float sal,string nam,float sale,string eid);
        void empCal();
        void print();
};
foo::foo()
{
    salary=0.0;
    name="Vijay Dinanath Chauhan";
    sales=0.0;
    empid="0";
}
void foo::getDetails(float sal,string nam,float sale,string eid){
    salary=sal;
    name=nam;
    sales=sale;
    empid=eid;
}
void foo::empCal(){
    float hra,ctc;
    int temp=100000;
    hra=0.3*salary;
    if(sales>2000000)
        ctc=(0.1*sales)+salary+hra;
    if(hra+salary>500000)
        ctc=salary+hra+temp; 
    else 
        ctc=salary+hra;
    cout<<"CTC is= "<<ctc;
  }
void foo::print(){
    cout<<"Employee Name= "<<name<<"\n"<<"Basic Salary ="<<salary<<"\n"<<"Employee ID ="<<empid<<"\n"<<"Sales= "<<sales<<"\n"<<endl;
}

int main()
{
    float sal,sale;
    string eid,nam;
    foo f;
    cout<<"Initial Details are:"<<endl;
    f.print();
    cout<<"Enter salary,name,empid and sales:"<<endl;
    cin>>sal>>nam>>eid>>sale;
    f.getDetails(sal,nam,sale,eid);
    cout<<"Entered Details are:"<<endl;
    f.print();
    f.empCal();
    return 0;
}
