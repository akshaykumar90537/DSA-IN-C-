#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{   // in case of unorder_map we can not print duplicate value or a key;

                         // time complexity is O(1).
   unordered_map<string,int>m;

    // in unorderd_map we can not use m[key] = vallue to inser in map .

    m.emplace("tv",100);
    m.emplace("laptop",500);
    m.emplace("phone",600);
    m.emplace("tv",100);
    m.emplace("headphone",500);

    for(auto p:m)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }

    m.erase("tv");
    cout<<endl;
    cout<<"after erase :->"<<endl;
    
    for(auto p:m)
    {
        cout<<p.first<<" "<<p.second<<endl;

    }


    return 0;
}