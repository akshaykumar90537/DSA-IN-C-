#include <bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];    //input = 1 2 3 1 4 5 2 4 4 
}

// precompute

int hash[100] = {0};
for(int i=0;i<n;i++)
{
    hash[arr[i]]+=1;
}

// fatch
int q;
cout<<"enter num of quaryes : ";
cin>>q;  // no. of quaries.
while(q--)
{
    int num;
    cout<<"\nhow many time num exist: ";
    cin>>num;   // find the num in array how many time it exist.
    cout<<hash[num]<<" ";
}

return 0;
}