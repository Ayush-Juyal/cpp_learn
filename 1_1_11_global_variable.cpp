#include<iostream>
using namespace std;
extern int x;         //without extern gives error 
int main()
{
    cout<<x;
    return 0;
}
int x=10; 