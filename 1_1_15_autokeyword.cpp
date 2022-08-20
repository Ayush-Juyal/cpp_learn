#include<typeinfo>
#include<iostream>
using namespace std;
int main()
{
    auto a=10;  //i means integer
    auto b=10.7; // d means double
    cout<<typeid(a).name()<<"\n";
    cout<<typeid(b).name()<<"\n";
    return 0;
}