#include <bits/stdc++.h>
using namespace std;

int main()
{
  int arr[] = {1,2,6,3,5,4,9,7,8};
  int sz = sizeof(arr)/sizeof(arr[0]);

  for(int i=0;i<sz-1;i++)
  {
    int j = i+1;
    while( j >= 0 && arr[j] < arr[i])
    {
        swap(arr[j] , arr[i]);
        j--;
        i--;
    }
  }

  for(int i=0;i<sz;i++)
  {
    cout<<arr[i]<<" ";
  }
return 0;
}