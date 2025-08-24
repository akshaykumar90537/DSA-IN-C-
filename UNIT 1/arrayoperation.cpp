#include <bits/stdc++.h>
using namespace std;
intsert(int arr[],int &a)
{
    int b;
    cout<<"enter elelment to insert: ";
    cin>>b;
    int pos;
    cout<<"enter the pos of elelment to insert: ";
    cin>>pos;
    if(pos < 0 || pos > a)
    {
        cout<<"invalid posiion!!";
        return 0;
    }
    for(int i= a;i>=pos;i--)
    {
      arr[i] = arr[i-1]; 
    }
    arr[pos-1] = b;
    a++;
    for(int i=0;i<a;i++)
    {
        cout<<arr[i]<<" ";
    }
}
deleteing(int arr[],int &n)
{
    int a;
    cout<<"\nenter the pos to deelete elements :";
    cin>>a;
    for(int i=a;i<n;i++)
    {
        arr[i-1] = arr[i];
    }
    n--;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
int n;
cout<<"enter the size of arary: ";
cin>>n;
int arr[n];
cout<<"\nenter the elements of arary: ";
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}

intsert(arr,n);
deleteing(arr,n);
return 0;
}