#include<iostream>
using namespace std;
int buble(int arr[],int x,int size)
{
    int start = 0;
    int end = size-1;
    while(start<=end)
    {
        int mid = (start+end)/2;

        if(x == arr[mid]) return mid;

        if(x > arr[mid]){
            start = mid+1;
        }
        else end = mid-1;
    }
    return -1;
}

int main()
{
    int arr[]  = {1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);
     int x = 6;
    int p=  buble(arr,x,size);
    if(p==-1) cout<<"not found!!";
    else cout<<p;
     return 0;
}