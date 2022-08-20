#include<iostream>
using namespace std;
int main()
{
    //using normal loop
    int arr[5]={10,20,30,40,50};
    cout<<sizeof(arr)/sizeof(arr[0])<<"\n";
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }

    //using range based 
    for(int x:arr)
    {
        cout<<x<<" ";
    }

    return 0;
}