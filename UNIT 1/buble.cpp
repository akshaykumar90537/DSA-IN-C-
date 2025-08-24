#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void bublesort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
       for(int j=1;j<=n-i-1;j++)
       {
        if(arr[j] < arr[j-1])
        {
            swap(arr[j],arr[j-1]);
        }
        
       }
    }
    cout<<"After bublesort: ";
    for(int k=0;k<n;k++)
    {
        cout<<arr[k]<<" ";
    }
}
int main()
{
    int n;
    cout<<"enter thr numbers of elements: ";
    cin>>n;
    int arr[n];
    cout<<"\nenter elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bublesort(arr,n);
    return 0;
}