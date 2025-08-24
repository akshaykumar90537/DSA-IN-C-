#include <bits/stdc++.h>
using namespace std;

int binarytodecimal(string a)
{
    int decimal = 0;

    reverse(a.begin(),a.end());

    int size = a.size();
    for(int i=0;i<size;i++)
    {
        if(a[i]  == '1') decimal += pow(2,i);
        else
        continue;
    }

    return decimal;
}
int main()
{

    string s;
    cin>>s;

    cout<<binarytodecimal(s);
return 0;
}