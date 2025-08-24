#include<iostream>
#include<utility>
#include<vector>
using namespace std;
int main()
{
    pair<int,int>p = {1,2};   //pair 
    cout<<p.first<<" "<<p.second<<endl;

    pair<int,pair<int,int>>pa = {1,{5,6}};
    cout<<pa.first<<" "<<pa.second.first<<" "<<pa.second.second<<endl;

    vector<pair<int,int>>a= {{1,2},{2,5},{5,9}};  //use vector for mulitiple pair;
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i].first<<" "<<a[i].second<<endl;
    }

     vector<pair<int,int>>pai;
     pai.push_back({1,1});   // in push_back() we make pair inside bracket to push;
     
     for(int i=0;i<pai.size();i++)
     {
        cout<<pai[i].first<<" "<<pai[i].second<<endl;
     }


    return 0;
    
}