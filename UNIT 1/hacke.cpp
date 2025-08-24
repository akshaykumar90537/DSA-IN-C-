#include<bits/stdc++.h>
#include<iostream>

using namespace std;
void  deleteelement(int arr[],int &n,int uid)
{
    bool a = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] == uid)
        {
            for(int j = i;j<n-1;j++)
            {
                arr[j] = arr[j+1];
                a = 1;  
            }
            n--;
            i--;
        }
    }
    if(a == 0)
    {
        cout<<"Value not found\n";
    }
}
void deletpos(int arr[],int &n,int pos)
{
    
    if(pos>n||pos<0)
    {
        cout<<"Invalid position\n";
        return;
    }
    for(int k= pos;k<n-1;k++)
    {
        arr[k] = arr[k+1];
    }
    n--;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int q,x;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int x;
        cin>>x;
        if(x == 1)
        {
            int uid;
            cin>>uid;
            deleteelement(arr,n,uid);
        }
        else
        {
            int pos;
            cin>>pos;
            deletpos(arr,n,pos);
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
return 0;
}