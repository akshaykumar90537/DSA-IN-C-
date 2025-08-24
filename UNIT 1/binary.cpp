#include <bits/stdc++.h>
using namespace std;
int binary(vector<int>arr)
{
    
    int b;
    cout<<"enter target: ";
    cin>>b;
    int str = 0,end = arr.size()-1;
   
    while(str <= end)
    {
        int mid = (str+end)/2;
        if(arr[mid] == b) return mid;
        else if(b < arr[mid]) end = mid-1;
        else str = mid+1;
    }
    return -1;
}
int main()
{
    int n;
cout<<"size: ";
cin>>n;
vector<int>vec(n);

for(int i=0;i<n;i++)
{
    cin>>vec[i];
}

sort(vec.begin(),vec.end());
int ans = binary(vec);
if(ans != -1) cout<<"find at pos = "<<ans+1;
else cout<<"\n not find: ";
return 0;
}