
/// EUCLLIDE ALGORITHUM
 // a*b = gcd(a,b) * lcm(a,b)
// a always grater than b.
#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{  // base case;
    if(b == 0) return a;
    else
    {
        return gcd(b,a%b);
    }
}
int main()
{
int a,b;
cin>>a>>b;
cout<<"GCD: "<<gcd(a,b)<<endl;
cout<<"LCM: "<<(a*b)/gcd(a,b);
return 0;
}