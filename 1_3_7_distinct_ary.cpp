#include<iostream>
using namespace std;
 
 int count_dis(int arr[],int n)
 {
    int count=0;
    bool isdist=true;

    for(int i=0;i<n;i++)
    {
        isdist= true;
        for(int j=i-1;j>=0;j--)
        {
            if(arr[i]==arr[j])
            {
                isdist=false;
                break;
            }
        }
        if(isdist==true)
        {
            count++;
        }
    }
 return count;
 }
 
 int main()
 {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<count_dis(arr,n);
 }

 