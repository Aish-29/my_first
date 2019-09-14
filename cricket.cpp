#include<iostream>

using namespace std;

class cric
{
    private :
	int runs;
	int wickets;
    public :
	cric(int r, int w)
	{
            runs = r;
            wickets = w;
	}
        cric()
        {
	    runs =15;
            wickets =15;
	}
	cric(const cric &c)
	{
	    runs =c.runs;
            wickets =0;
	}
        void print()
	{
	    cout<<"Runs :"<<runs<<" Wickets :"<<wickets<<endl;
	}
};
int main()
{
    cric a,b(25,10),c,d(12,24),e(5,10);
    a.print();
    b.print();
    d.print();
    c=b();
    c.print();
    e.print();
    return 0;
}
