#include <bits/stdc++.h>
using namespace std;
selection(vector<pair<string,string>>&arr)
{
    int n = arr.size();
    for(int i=0;i<n-1;i++)
    {
        int j=i;
        for(int k=i+1;k<n;k++)
        {
            if(arr[k].first < arr[j].first)
            {
                swap(arr[k] , arr[j]);
            }
        }
    }
    cout<<"print\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i].first<<" = "<<arr[i].second<<"\n";
    }
}
int main()
{
    int a;
    cin>>a;
vector<pair<string,string>>arr(a);
cout<<"enter aappno ans aapname: ";
for(int i=0;i<a;i++)
{
    string appno;
    string appname;
    cin>>appno>>appname;
    arr[i] = {appno,appname};
}

selection(arr);
return 0;
}