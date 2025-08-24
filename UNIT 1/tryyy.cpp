#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    bool found = false;
    cin>>n;
    vector<pair<string,string>> arr(n);
    for(int i=0;i<n;i++)
    {
       cin>>arr[i].first>>arr[i].second;
    }
    //cout<<"enter your input to search: ";
    string input;
    cin>>input;
    for(int i=0;i<n;i++)
    {
      if(arr[i].first == input)
      {
        cout<<"Name: "<<arr[i].second;
        found = true;
        break;
      }
      else if(arr[i].second == input)
      {
        cout<<"Number: "<<arr[i].first;
        found = true;
        break;
      }
    }
    if(!found)
    {
        cout<<"not found!!"; 
    }

}