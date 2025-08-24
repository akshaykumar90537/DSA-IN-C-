#include <bits/stdc++.h>
using namespace std;
int fact(int n)
{
    int p = 1;
    for(int i=1;i<=n;i++)
    {
        p *= i;
    }
    return p;
}

int nCr(int n,int r)
{
   if(r > n) return 0;
   if(n==r || r == 0) return 1;
   
   return fact(n)/(fact(r) * fact(n-r));
}


int main()
{
int n,r;
cin>>n>>r;
cout<<nCr(n,r);
return 0;
}