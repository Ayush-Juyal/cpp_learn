#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,20,30};   //since interger size of each is 4 bit//
    cout<<sizeof(arr)<<"\n";

/*to find no of values*/
cout<<sizeof(arr)/sizeof(arr[0]);     //this is not always correct see the notebook
}