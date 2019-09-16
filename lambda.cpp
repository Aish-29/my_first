#include<iostream>

using namespace std;

int main()
{
    auto sum = [](auto a,auto b)
    {
        return a + b;
    };
    cout<<sum(1,6)<<endl;
    cout<<sum(1.0,5.6)<<endl;
    cout<<sum(string("Geeks"),string("ForGeeks"))<<endl;
    return 0;
}
