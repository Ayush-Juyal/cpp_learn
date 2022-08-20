#include<iostream>
using namespace std;
int main()
{
    const int x=1;
   /* x=x+1; */          // cant not modify x since it is const
    cout<<x;
    return 0;
}