#include <bits/stdc++.h>
using namespace std;


binsry(int arr[] , int size,int tar)
{
    int strt = 0,end = size-1;
    while(strt <= end)
    {
        int mid = strt+(end-strt)/2;
        if(arr[mid] == tar) return mid;
        else if(tar > arr[mid]) strt = mid+1;
        else if(tar < arr[mid]) end = mid-1;
    }
    return 0;
}
int main()
{

    int arr[] = {1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    int tar = 3;
    int a = binsry(arr,size,tar);
    if(a == 0)
    {
        cout<<"no ele found";
    }
    else{
        cout<<"found at index "<<a;
    }

return 0;
}