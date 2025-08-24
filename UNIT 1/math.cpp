#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
    int n = 36;
    int count = 0;
    for(int i = 1;i <= sqrt(n);i++)
    {
        if(n%i == 0) 
        {
            count++;
            if(n/i != i)
            {
                count++;
            }
        }

    }
    cout<<count;
}
