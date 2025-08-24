#include <bits/stdc++.h>
using namespace std;
bubble(int arr[],int size)
{
    for(int i=0;i<size-1;i++)
 {
    for(int j = 0;j<size-i-1;j++)
    {
        if(arr[j] > arr[j+1])
        {
            swap(arr[j],arr[j+1]);
        }
    }
 }
for(int i=0;i<size;i++)
{
    cout<<arr[i]<<" ";
}
}
int main()
{
int arr[] = {1,6,3,5,8,9,2,4,7};
int size = sizeof(arr)/sizeof(arr[0]);

bubble(arr,size);
return 0;
}