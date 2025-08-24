#include <bits/stdc++.h>
using namespace std;
#define MAX 1000
class STACK
{
int top;
public:

int a[MAX];
STACK()
{
    top = -1;
}

void push_back(int val)
{
    if(top > MAX-1)
    {
        cout<<"stack oveloded!!\n";
    }
    else
    {
        a[++top] = val;
        cout<<val<<" pushed into stack"<<"\n";
    }
}

int pop()
{
    if(top < 0) cout<<"STACK UNDERFLOW!!\n";
    else{
        return a[top--];;
    }
}

int peek()
{
    if(top < 0) cout<<"NO ELELMENT IN STACK!!\n";
    else{
      return a[top];
    }
}

void empty()
{
    if(top < 0) cout<<"STACK IS EMPTY!!\n";
    else cout<<"STACK IS NOT EMPTY!!\n";
}

};




int main()
{
  STACK s;
  s.push_back(12);
  s.push_back(13);
  s.push_back(14);
  s.push_back(15);
  cout<< s.pop()<<" poped from stack\n";
  cout<< s.peek()<<" is the top element in stack\n";
  s.empty();
return 0;
}