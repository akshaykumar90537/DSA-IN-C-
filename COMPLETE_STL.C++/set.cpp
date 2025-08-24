#include<iostream>
#include<set>
using namespace std;
int main()
{

    // SET IS USED TO STORE TO UNIQUE ELEMENTS OR A VALUE AND THE VALUE STORE IN A PARTICULAR ORDER.
    set<int>s;

    s.emplace(1);
    s.emplace(6);
    s.emplace(68);
    s.emplace(16);
    s.emplace(12);

    s.emplace(1);
    s.emplace(1);
    s.emplace(6);
    s.emplace(68);

    for(auto val:s)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    
     cout<<" count: "<<s.count(1)<<endl;
     cout<<" size: "<<s.size()<<endl;
     

    return 0;
}