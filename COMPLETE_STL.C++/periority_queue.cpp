#include<iostream>
#include<queue>
using namespace std;

int main()
{
//    // priority queue me gargest element first print hota ha and dellete hota;
//    // they print in assending order
//    priority_queue<int>pq;
//    pq.push(5);
//    pq.push(9);
//    pq.push(6);
//    pq.push(4);
   

//   while(!pq.empty())
//   {
//     cout<<pq.top()<<" ";
//     pq.pop();
//   }

  priority_queue<int, vector<int>, greater<int> >pq;

   pq.push(5);
   pq.push(9);
   pq.push(6);
   pq.push(4);

 while(!pq.empty())
  {
    cout<<pq.top()<<" ";
    pq.pop();
  }

return 0;
}