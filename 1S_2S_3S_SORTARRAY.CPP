#include<iostream>
using namespace std;
int main()
{
    int arr[] = {0,1,0,1,0,2,0,2,1,0,2,0,1,2,0};
    int n = arr.size();
    int low =0,mid =0,hig =n-1;
    if(mid == 0)
    {
        swap(arr[mid],arr[low]);
        mid++,low++
    }
    else if(arr[mid] == 1) mid++;
   
    return 0;
}