#include <bits/stdc++.h>
using namespace std;

class stackk
{
  int arr[5];
  int top;
  public:
   stackk()
   {
    top = -1;
   }
  
  void push(int val)
  {
    int n = sizeof(arr)/sizeof(arr[0]);

    if(top >= n-1)
    {
        cout<<"Stack overflow\n";
        return;
    }
    else{
       arr[++top] = val;
       cout<<val<<" pushed into stack\n";
    }
  }

  void pop()
  {
    if(top < 0)
    {
        cout<<"Stack underflow\n";
        return;
    }
     else{
        cout<<arr[top]<<" popped from the stack\n";
        top--;
     }
  }

  void peek()
  {
    cout<<"Peek element of the stack: "<<arr[top]<<endl;
  }

  void empty()
  {
    if(top<0)
    {
      cout<<"stack is empty\n";
      return;
    }
  }

  void display()
  {
    cout<<"Elements of stack is: ";
    for(int i=top;i>=0;i--)
    {
      cout<<arr[i]<< " ";
    }
  }

};
int main()
{
   stackk ss;
   ss.empty();
   ss.push(5);
   ss.push(6);
   ss.push(8);
   ss.push(9);
   ss.push(54);
   ss.push(23);

   ss.pop();
   ss.peek();

   ss.empty();

   ss.display();
return 0;
}