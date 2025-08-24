#include <bits/stdc++.h>
using namespace std;
void insert(vector<int>&vec)
{
    for(int i=1;i<vec.size();i++)
    {
        int j = i;
      while(vec[j] < vec[j-1] && j>0)
      {
        swap(vec[j],vec[j-1]);
        j--;
      }
    }
    cout<<"After sorting: ";
    for(auto val:vec)
{
    cout<<val<<" ";
}

}
int main()
{
vector<int>vec;
int n;
cout<<"enter the numbers of elements: ";
cin>>n;
cout<<"\nEnter the elements of vector or array: ";
for(int i=0;i<n;i++)
{
    int x;
    cin>>x;
    vec.push_back(x);
}
insert(vec);
return 0;
}