#include <bits/stdc++.h>
using namespace std;


void countsort(vector<int>& arr)
{
    int max = *max_element(arr.begin(),arr.end());

    //  creating  a vector of size maxelement in array;

    vector<int>sorted(max+1,0);
    for(int i=0;i<arr.size();i++)
    {
        sorted[arr[i]]++;
    }

    int j=0;
    int i =0 ;

    while(i <  max)
    {
        if(sorted[i] > 0){
        arr[j++] = i;
        sorted[i]--;
        }
        else i++;
    }
}
int main()
{

    int a;
    cout<<"Enter the Number of elements in array: ";
    cin>>a;

    vector<int>arr(a);
    cout<<"Enter elements of array :" ;
    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
    }

    countsort(arr);

    cout<<"Sorted array after using counting sort: ";
    for(auto a : arr)
    {
        cout<<a<<" ";
    }

return 0;
}