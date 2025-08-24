#include<iostream>
#include<queue>
using namespace std;
int main()
{
    //queue work with FIFO meand first in first out .the  ellelment inserted in first remove or pop first;
    queue<int>q;
    q.push(5);
    q.push(9);
    q.push(6);
    q.push(3);
    cout<<" size of q: "<<q.size()<<endl;
    
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }

return 0;
}