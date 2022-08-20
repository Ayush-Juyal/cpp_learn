#include<iostream>
using namespace std;

bool is_sorted(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]<arr[i-1])
        return false;
    }
    return true;
}

int main()
{
    int n;
    cout<<"enter the no of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {cout<<"give the values for the array";
    cin>>arr[i];
    }
    if(is_sorted(arr,n)==false)
    cout<<"not sorted";
    else
    cout<<"sorted";


}