#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

gcd(int a,int b)
{
    while(a>0 && b>0)
    {
    if(a>b)  a = a%b;      // let a=20 and b = 28 then hcf or gcd is 4 .
    else if(b>a)  b = b%a;
    }
    if(a==0)  return b;
    else if(b==0)  return a;
    else return a;

}


int main()
{
   int a,b;
   cin>>a>>b;
   gcd(a,b);
   cout<<gcd(a,b);
   return 0;
}