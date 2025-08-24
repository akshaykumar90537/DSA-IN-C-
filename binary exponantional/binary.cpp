#include <bits/stdc++.h>
using namespace std;
findpow(int a,int b)
{
    if(b == 0)
    {
        return 1;
    }

    int x = findpow(a,b/2);
    int ans =0;
    if(b%2 == 1)
    {
        ans = x*x*a;
    }
    else
    {
        ans = x*x;
    }
    return ans;
}
int main()
{
int a,b;
cin>>a>>b;
cout<<findpow(a,b);
return 0;
}