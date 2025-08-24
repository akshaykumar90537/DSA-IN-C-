#include<iostream>
using namespace std;


void orignal(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

 void bubbesort(int arr[] , int n)
{
    for(int i = 0 ;i<n-1;i++)
    {
        for(int j = 0;j<n-i-1;j++)
        {
            if(arr[j]  > arr[j+1])
            {
                int temp = arr[j];
                arr[j]  =  arr[j+1];
                arr[j+1]   = temp;
            }
        }
    }
   
     cout<<endl;
    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}


int main()
{
    int n;
    cout<<"enter the number of elelment in an array:";
    cin>>n;
    int arr[n];
    for(int  i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"orignal arrray :  ";
    orignal(arr,n);
    bubbesort(arr,n);

}