#include <bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;
int arr[n];
float sum = 0,count = 0;
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}

for(int i=0;i<n;i++)
{
    sum += arr[i];
    count++;
}

cout<<"sum = "<<sum;
cout<<"\n average = "<<sum/count<<"\n\n";
int a;
cin>>a;
int c  = 0;
for(int i=0;i<n;i++)
{
    if(arr[i] == a) 
    {
        cout<<"\nyes find at pos: "<<i+1;
        c++;
    }
}
if(c == 0 ) cout<<"\nnot find";

return 0;
}