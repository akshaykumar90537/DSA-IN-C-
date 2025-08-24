#include <bits/stdc++.h>
using namespace std;
findpow(int a,int b,int m)
{
    if(b == 0)
    {
        return 1;
    }

    int x = findpow(a,b/2,m);
    int ans =0;
    if(b%2 == 1)
    {
        ans = (x%m*x%m)%m;
        ans = (ans%m*a%m);
        return ans;
    }
    else
    {
        ans = (x%m*x%m)%m;
    }
    return ans;
}
int main()
{
int a,b,m;
cin>>a>>b>>m;
cout<<findpow(a,b,m);
return 0;
}