#include <bits/stdc++.h>
using namespace std;


int binary(inr arr[],int n)
{
    int strt = 0,end = n-1,ans = n;

    while(strt <= end)
    {
        int mid = strt+(end-strt)/2;

        
        if(arr[mid] > tar) 
        {
            ans = mid;
            end = mid-1;
        }
        else{
             strt = mid+1;
        }
    }
    return ans;
}
int main()
{

    int n;
    cout<<"enter the size of an array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of an array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int tar;
    cout<<"Enter the target to search their index in array: ";
    cin>>tar;

    binary(arr,tar);
return 0;
}