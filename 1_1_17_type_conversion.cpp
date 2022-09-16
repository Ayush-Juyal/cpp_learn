#include<iostream>
using namespace std;
int main()
{
    //implicit conversion
    int x=10;
    char y= 'A';
    cout<<(x+y)<<"\n";
    float z=5.5;
    cout<<(x+z);
    
    //explicit function
    int p=10;
    int q=5;
    double r=p/q;
    double n=double(p)/q; //c style
    double m=static_cast<double>(x)/y; //c++style must use
    cout<<r<<"\n"<<n<<"\n"<<m<<"\n";
    return 0;

}