#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void insertend(vector<int>&arr)
{
    int a;
    cin>>a;
    arr.push_back(a);
}

void insertpos(vector<int>&arr,int &b)
{
    int a,pos;
    cin>>a>>pos;
    if(pos>=arr.size()||pos<0)
    {
       b = 1;
    }
    else{
        arr.insert(arr.begin()+pos,a);
    }
    
}
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    int q,b = 0;
    cin>>q;
    for(int i =0;i<q;i++)
    {
        int x;
        cin>>x;
        if(x == 1)
        {
            insertend(arr);
        }
        else
        {
            insertpos(arr,b);
        }
    }
   
    for(auto num:arr)
    {
        cout<<num<<" ";
    }
    if(b==1)
    {
        cout<<"\nInvalid position";
    }
return 0;
}