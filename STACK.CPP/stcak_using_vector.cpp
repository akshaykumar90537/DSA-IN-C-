#include <bits/stdc++.h>
using namespace std;

class stackk{
    vector<int>v;

    public:

    void push(int val)
    {
        v.push_back(val);
    }

    void pop()
    {
        v.pop_back();
    }

    void top()
    {
        cout<<"Top element in stack is : ";
        cout<<v[v.size()-1]<<endl;
    }
 
    bool empty()
    {
        return v.size() == 0;
    }

};
int main()
{
    stackk ss;
    int n;
    cout<<"Enter the size of elements in stack: ";
    cin>>n;
    cout<<"enter the elements of stack: ";
    for(int i=0;i<n;i++)
    {
       int x;
       cin>>x;
       ss.push(x);
    }

    ss.pop();
    ss.pop();

    while(!ss.empty())
    {
        ss.top();
        ss.pop();
    }
    
    ss.empty();
return 0;
}