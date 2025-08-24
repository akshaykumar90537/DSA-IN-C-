#include <bits/stdc++.h>
using namespace std;


void evenodd(vector<int>&arr)
{
    vector<int>even,odd;
    for(auto val:arr)
    {
        if(val%2 == 0)
        even.push_back(val);
        else
        odd.push_back(val);
    }

    sort(even.begin(),even.end());
    sort(odd.begin(),odd.end());
     int i = 0 ;
     for(auto val:even)
        arr[i++] = val;
     for(auto val:odd)
        arr[i++] = val;
     

}

int main()
{
   vector<int>arr;
   int n;
   cin>>n;
   for(int i=0;i<n;i++)
   {
    int x;
    cin>>x;
    arr.push_back(x);
   }

   evenodd(arr);

   cout<<"sorted array: \n";
   for(auto val: arr)
   {
    cout<<val<<" ";
   }

return 0;
}