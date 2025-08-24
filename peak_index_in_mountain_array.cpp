#include<iostream>
using namespace std;
int main()
{
    int arr[] = {0,3,8,9,5,2};
    int start =1,end = 4 ;//(n-2);
    while(start<=end)
    {
       int mid = start+(end-start)/2;
       if(arr[mid] >arr[mid-1] && arr[mid] > arr[mid+1])
       {
        cout<<"pek index is :"<<mid<<endl;
        break;
       }
       else if(arr[mid]>arr[mid-1]) start = mid+1; // element in right side;
       else end = mid-1;

    }
    return 0;
}
