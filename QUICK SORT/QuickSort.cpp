#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr,int strt,int end)
{
    int indx = strt-1;
    int pivot = arr[end];
    for(int j = strt;j<end;j++)
    {
        if(arr[j] <= pivot)
        {
            indx++;
            swap(arr[indx] , arr[j]);
        }
    }

    indx++;
    swap(arr[indx],arr[end]);

    return indx;
}


void QuickSort(vector<int> &arr , int strt,int end)
{
    if(strt >= end) return;
    int pivot = partition(arr,strt,end);
    QuickSort(arr,strt,pivot-1);
    QuickSort(arr,pivot+1,end);
}
int main()
{
    int n;
    cout<<"Enter the size of an array :";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of an array: ";
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }

    QuickSort(arr,0,arr.size()-1);
 
    cout<<"After Sorting the arr using Qick Sort : ";
    for(auto&  it : arr)
    {
        cout<<it<<" ";
    }

return 0;
}