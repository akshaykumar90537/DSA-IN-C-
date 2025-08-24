#include <bits/stdc++.h>
using namespace std;

void BucketSort(vector<float> &arr ,int n)
{
    vector<vector<float>>Bucket(n); // Make a bucket arr to store the ele.

     // push element in their correct pos in bucket array.
    for(int i=0;i<n;i++)
    {
        int indx = n*arr[i];
        Bucket[indx].push_back(arr[i]);
    }

    for(int i=0;i<Bucket.size();i++)
    {
       sort(Bucket[i].begin(),Bucket[i].end());  // we can also use the insertion sort function insertionsort(Bucket[i]);
    }

    int k =0;
    for(int i=0;i<Bucket.size();i++)
    {
        for(int j=0;j<Bucket[i].size();j++)
        {
            arr[k++] = Bucket[i][j];
        }
    }

}
int main()
{
    vector<float>arr = {0.78, 0.17, 0.39, 0.26, 0.72, 0.94, 0.21, 0.12, 0.23, 0.68};

    int n  = arr.size();

    cout<<"Array befor Sorting : ";
    for(auto  x : arr)
    {
        cout<<x<<" ";
    }

    BucketSort(arr,n);

    cout<<"\nArray after Sorting using Bucket Sort : ";
    for(auto x : arr)
    {
        cout<<x<<" ";
    }

return 0;
}