#include<iostream>
#include<deque>
using namespace std;
int main()
{
    /*deque is used for random acces elements but not in list;
    deque stands for double ended queue;*/

    deque<int>d;
    d.push_back(5);
    d.push_back(2);
    d.push_back(6);
    d.push_back(7);
    d.push_front(1);

    cout<<d[2]<<" "<<d[3]<<endl;

    d.pop_back();
     cout<<"after pop_back:";
    for(auto it:d)
    {
        cout<<it<<" ";
    }
    return 0;

}