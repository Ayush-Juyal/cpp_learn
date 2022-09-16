#include<iostream>
using namespace std;
int main()
{
    int x=10;
    bool b=true;
    float f=10.f;
    cout<<x<<" "<<b<<" "<<f<<" "<<endl;  // here endl works as a functiom, "<<" is the function call, endl flush the buffer
    cout<<(10*5)<<" ";
    cout<<'g';
    return 0;
}