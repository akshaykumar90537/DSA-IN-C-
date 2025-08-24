#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cout<<"enter string: ";
    cin>>s;

// precompute

int hash[256] = {0};
for(int i=0;i<s.size();i++)
{
    hash[s[i]]+=1;
}

// fatch
int q;
cout<<"enter num of quaryes : ";
cin>>q;  // no. of quaries.
while(q--)
{
    char num;
    cout<<"\nhow many time num exist: ";
    cin>>num;   // find the num in array how many time it exist.
    cout<<hash[num]<<" ";
}

return 0;
}