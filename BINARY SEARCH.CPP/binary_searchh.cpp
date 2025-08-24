#include<bits/stdc++.h>
using namespace std;

int binary(vector<int>v,int n,int target)
{
    int strt = 0,end = n-1;
   sort(v.begin(),v.end());
    while(strt <= end)
    {
        int mid = strt+(end-strt)/2;
        if(target == v[mid]) return mid;
        else if(target > v[mid]) strt = mid+1;
        else if(target < v[mid]) end = mid-1;
        
    }
    return 0;
}
int main()
{
    int n;
	cout<<"enter number of elements: ";
    cin>>n;
    vector<int>v;
	cout<<"enter the elements: ";
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int target;
    cout<<"enter target: ";
    cin>>target;
    
    if(binary(v,n,target))
    {
		cout<<"element found at index: ";
        cout<<binary(v,n,target);
    }
    else
    {
        cout<<"Not found";
    }
}