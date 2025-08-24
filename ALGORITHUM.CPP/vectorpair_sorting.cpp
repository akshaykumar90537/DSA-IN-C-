#include<bits/stdc++.h>
#include<vector>
using namespace std;


bool comparator(pair<int,int>p1, pair<int,int>p2)
{
   if(p1.second<p2.second)  return true;
   else return false;
}
int  main()
{
    vector<pair<int,int>>vec = {{1,20},{5,6},{89,56},{4,5,},{45,78}};

    sort(vec.begin(),vec.end(),comparator);   //sort on the basis of second value.

    for(auto p: vec)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }
return 0;
}