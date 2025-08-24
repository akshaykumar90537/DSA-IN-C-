#include<iostream>
#include<stack>
using namespace std;
int main()
{
    // stack me  hota ha (LIFO);
     // stack me push_back use nai hota ha only push() use hota ha;
     // stack ka elements always assending order ma print hota ha;
     //A stack follows the Last In, First Out (LIFO) principle, meaning the last element inserted is the first one to be removed.
     
    stack<int> s;
    s.push(5);
    s.push(6);
    s.push(2);
    s.push(4);


     stack<int> ok;
    ok.swap(s);

    cout<<"size of ok: "<<ok.size()<<endl;
    cout<<"size of s: "<<s.size();

    // cout<<s.top();
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
   
    return 0;
}