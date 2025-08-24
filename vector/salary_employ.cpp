#include <bits/stdc++.h>
using namespace std;
void binarysearch( vector<pair<string,string>>&arr)
{
    string target;
    cout<<"enter name to print salary: ";
    cin>>target;
    int strt = 0,end = arr.size()-1;
    while(strt <= end)
    {
        int mid = (strt+end)/2;
        if(arr[mid].first == target) 
        {
            cout<<arr[mid].first<<" = "<<arr[mid].second;
            return;
        }
        if(target > arr[mid].first) strt = mid+1;
        else end = end-1;
    }
    cout<<"not found!!";
}
int main()
{
   vector<pair<string,string>>arr;
   int n;
   cout << "Enter number of employees: ";
   cin>>n;
   cout << "Enter name and salary:\n";
    for (int i = 0; i < n; i++) {
        string name, salary;
        cin >> name >> salary;
        arr.push_back({name, salary});
    }
    sort(arr.begin(), arr.end());
   binarysearch(arr);

return 0;
}