#include<iostream>
#include<vector>
using namespace std;


 void merge(int arr[],int start,int mid,int end)
 {
    vector<int>temp;
    int left = start,right = mid+1;
    while(left <= mid && right <= end)
    {
        if(arr[left]<=arr[right])
        {
          temp.push_back(arr[left]);
          left++;
        } 
        else
        {
          temp.push_back(arr[right]);
          right++;
        } 
    }
    while(left<=mid)    // used if any element left in left side array then push back
    {
      temp.push_back(arr[left]);
          left++;
    }
    while(right<=end)// used if any element left in right side array then push back
    {
      temp.push_back(arr[right]);
          right++;
    }

    for(int i=start;i<=end;i++)
    {
      arr[i] = temp[i-start];
    }

 }

void mergesort(int arr[],int start,int end)
{
    if(start<end)
    {
       int mid = start+(end-start)/2;
     mergesort(arr,start,mid);   // left. 
     mergesort(arr,mid+1,end); // right.
     merge(arr,start,mid,end);   // to merg the arry of left and right ;
    }
   
}



int main()
{
    int arr[] = {9,2,4,6,3,8,1,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int start =0,mid,end = n-1; 
    mergesort(arr,start,end);
    cout << "Sorted array: ";
    for(int i=0;i<=end;i++)
    {
      cout<<arr[i]<<" ";
    }
    return 0;
}