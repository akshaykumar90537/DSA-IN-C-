#include <bits/stdc++.h>
using namespace std;

vector<bool>seive(int n)
{
    vector<bool>prime(n+1,true);

    prime[0] = false;
    prime[1] = false;

    for(int i=2;i*i<=n;i++)
    {
        if(prime[i] == true)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                prime[j] = false;
            }
        }
    }
    return prime;
}
int main()
{

    // print prime numbers till n;
    int n;
    cin>>n;

    vector<bool>primes = seive(n);

    for(int i=0;i<=n;i++)
    {
        if(primes[i]) cout<<i<<" is a prime number\n";
        
    }



return 0;
}