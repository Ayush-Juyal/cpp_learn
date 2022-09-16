#include<iostream>
using namespace std;
int main()
{
    string name;
    cout<<"enter the name:";
    cin>>name;
    cout <<"hi"<<""<<name<<"\n";
    cout<<"welcome to gfg"<<"\n";

//  above program ignores the words after space
//  correct program is
    string name1;
    cout<<"enter the name";
    getline(cin,name1);
    cout<<"welcome"<<name1;
    return 0;
}