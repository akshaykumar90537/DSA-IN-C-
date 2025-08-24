#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(5);
    v.push_back(8);
    v.emplace_back(6);  // simiplar to push_back and faster then push_back;

    vector<pair<int,int>>vec;
    vec.push_back({5,6});   // in push _back we send a pair in push_back;
    vec.emplace_back(8,5);   // in emplace no need to send a pair ;

    vector<int>ok = {6,5,6,3,5,1,2,5,1,6,1};
    vector<int>a(ok);  // coping of vector in another vector;
    // vector<int>::iterator it;
    for(auto it = a.begin();it<a.end();it++)  // it points to the address of ellements;
    {
        cout<<*(it)<<" ";
    }

   cout<<endl;

    for(auto it = a.rbegin();it<a.rend();it++)  // it points to the address of ellements;
    {
        cout<<*(it)<<" ";
    }

    cout<<endl;

    for(auto it:a)
    {
        cout<<it<<" ";
    }
     
     cout<<endl;

    a.erase(a.begin()+2);  // to erase the ellement in an vector;
    a.erase(a.begin()+5);

     for(auto it:a)
     {
        cout<<it<<" ";
     }
     cout<<endl;

     a.pop_back(); // erase or delete last ellelment in vector;
     for(auto it:a)
     {
        cout<<it<<" ";
     }
     cout<<endl;

     cout<<"size of a vector :"<<a.size()<<endl;
     cout<<"size of ok vector :"<<ok.size()<<endl;

     a.insert(a.begin(),100);
     a.insert(a.begin()+2,2,90);   //two times 90 after pos in a.begin()+2;
     for(auto it:a)
     {
        cout<<it<<" ";
     }
     a.swap(ok);
     cout<<endl;
     for(auto it:a)
     {
        cout<<it<<" ";
     }







}