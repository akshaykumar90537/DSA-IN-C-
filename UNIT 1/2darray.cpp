#include <bits/stdc++.h>
using namespace std;

int main()
{
   int m,n;
   cout<<"enter number of row and coloums: ";
   cin>>m>>n;
   int arr[m][n];
   cout<<"enter the elements of array: ";
   for(int i=0;i<m;i++)
   {
    for(int j=0;j<n;j++)
    {
        cin>>arr[i][j];
    }
   }
   cout<<"MATRIX = \n";
   for(int i=0;i<m;i++)
   {
    for(int j=0;j<n;j++)
    {
        cout<<arr[i][j]<<"  ";
    }
    cout<<"\n";
   }

return 0;
}