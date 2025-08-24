#include<iostream>
using namespace std;
int main()
{
    int arr[] = {2,0,1,0,6,0,3,0,0,5,0,3};
int n = sizeof(arr)/sizeof(arr[0]);
// BUBBLE SORT
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
          if(arr[j] == 0)
          swap(arr[j],arr[j+1]);
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}