#include<iostream>
using namespace std;
int main()
{
    static int x;   // stayed for lifetime of the program
    cout<<x;
    return 0;
}