#include<iostream>
#include<map>
using namespace std;
int main()
{   // multimap is simillar to the map but in multimap we can print duplicate key

   multimap<string,int>m;

    // in multimap  we can not use m[key] = vallue to inser in map .

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
    cout<<"after erase :->"<<endl;
    
    for(auto p:m)
    {
        cout<<p.first<<" "<<p.second<<endl;

    }


    return 0;
}