#include<iostream>
#include<list>
using namespace std;
int main()
{  // in list there is front implementation take place but  may be not pair;
    list<int>li;
    li.push_back(5);
    li.push_front(2);
    li.emplace_back(9);
    li.emplace_front(8);

    for(auto val:li)
    {
        cout<<val<<" ";
    }

      li.pop_back(); 
      cout<<endl;
       for(auto val:li)
    {
        cout<<val<<" ";
    }
    

    return 0;

}