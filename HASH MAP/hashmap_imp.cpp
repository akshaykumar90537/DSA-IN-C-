#include <bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}

// pre coompute
map<int,int>mpp;   //map<string,int>  , map<long long int,int> etc..
for(int i=0;i<n;i++)
{
    mpp[arr[i]]++;
}

// print
for(auto it:mpp)
{
    cout<<it.first<<"-->"<<it.second<<endl;
}
int q;   // num of quaries;
cin>>q;
while(q--)
{
    int num;  // which num check how many time appers;
    cin>>num;

    cout<<mpp[num]<<endl;
}
return 0;
}