#include <bits/stdc++.h>
using namespace std;

int getmaX(vector<int>&arr,int n)
{
    int maxele = arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i] > maxele)
        {
            maxele = arr[i];
        }
    }
    return maxele;
}
void countsort(vector<int> & arr,int n,int exp)
{
    vector<int>output(n);
    int count[10] = {0};

    // Count occurrences of digits
    for(int i=0;i<n;i++)
    {
        int digit = (arr[i]/exp)%10;
        count[digit]++;
    }

    // for actual position
    for (int i = 1; i < 10; i++) {
          count[i] += count[i - 1];
      }


     // Build the output array (stable sorting)
    for(int i = n-1;i>=0;i--)
    {
        int digit = (arr[i]/exp)%10;
        output[count[digit]-1] = arr[i];
        count[digit]--;
    }

    // Copy output back to arr
    for(int i=0;i<n;i++)
    {
        arr[i] = output[i];
    }
}
void Radix(vector<int> &arr,int n)
{
    int maxele = getmaX(arr,n);
   
     for(int exp = 1;maxele/exp > 0;exp *= 10)
     {
        countsort(arr,n,exp);
     }

}
int main()
{

    vector<int>arr = {2,3,65,89,569,45,819,715,302};
    int n = arr.size();
    cout<<"Initial Unsorted array : ";
    for(auto x : arr)
    {
      cout<<x<<" ";
    }

    Radix(arr,n);

    cout<<"\nAfter sorting using radix sort : ";
    for(auto x : arr)
    {
      cout<<x<<" ";
    }

return 0;
}