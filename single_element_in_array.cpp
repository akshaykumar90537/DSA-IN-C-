#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] ={1,1,2,3,3,4,4,8,8};
    int n = arr.size();
    if(n==1) cout<<arr[0]<<endl;
    int start =0,end = n-1;
    while(start<=end)
    {
        int mid = start+(end-start)/2;
        if(mid==0 && arr[0]!=arr[1]) cout<<mid<<endl;
        if(mid == n && arr[n]!=arr[n-2]) cout<<mid<<endl;
        if(arr[mid]!=arr[mid+1] && arr[mid]!=arr[mid-1]) 
        {
            cout<<mid<<endl;
            break;
        }
        else if(mid%2==0) // mid is between even elelments;
        {
            if(arr[mid]==arr[mid-1])  //right 
            {
                end = mid-1;
            }
            else start = mid+1;
        }
        else  //odd array arr = {1,1,2,2,10,11,11};
        {
            if(arr[mid]==arr[mid-1]) start = mid+1 ;//search in right
            else end = mid-1;
        }
        return 0;
}
