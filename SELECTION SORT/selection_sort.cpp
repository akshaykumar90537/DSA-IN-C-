#include<iostream>
using namespace std;
int main()
{
    int arr[]={5,6,4,2,1,8,9};
      int n= sizeof(arr)/sizeof(arr[0]);
      // selection sort:-->
    for(int i=0;i<n-1;i++)
    {
        int smallestidx = i;   //unsorted array ka starting element. 
        for(int j=i+1;j<n;j++)
        {
           if(arr[j]<arr[smallestidx])  // to find smallest indexelement in array.
           smallestidx = j;   
        }
        swap(arr[i],arr[smallestidx]);

    }
      for(int i=0;i<n;i++)
      {
        cout<<arr[i];
      }

    return 0;

}