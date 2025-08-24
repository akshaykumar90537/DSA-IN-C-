#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n,count =0,el;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>el;
    for(int i=0;i<n;i++)
    {
        if(arr[i] == el)
        {
            cout<<i;
            count = 1;
        }
        
    }
    if(count==0)
    {
        cout<<"Not found";
    }
return 0;
}