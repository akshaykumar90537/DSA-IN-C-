#include <bits/stdc++.h>
using namespace std;

string decimaltobinary(int n)
{

    string binary = "";
    while(n>0)
    {
        int rem = n%2;
        binary += to_string(rem);
        n /= 2;
    }
    reverse(binary.begin(),binary.end());
    return binary;
}
int main()
{

    int n;
    cin>>n;

    cout<<decimaltobinary(n);
return 0;
}