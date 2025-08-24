#include <bits/stdc++.h>
using namespace std;

class Node
{
    
    int data;
    Node  *next;
    Node *prev;
    Node *head;
    Node *tail;

    public:
    
    Node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }

    Node()
    {
        head = tail = NULL;
    }

   void  push_back(int value)
    {
      Node *newnode = new Node(value);

      if(tail == NULL)
      {
        head = tail = newnode;
      }
      else{
        tail->next = newnode;
        newnode->prev = tail;
        tail = tail->next;
      }
    }


    void display()
    {
        Node *temp;
        temp = head;
        while(temp != NULL)
        {
            cout<<temp->data<<"<->";
            temp = temp->next;
        }
        cout<<"head";
    }
};

int main()
{
  Node ll;
  ll.push_back(23);
  ll.push_back(25);
  ll.push_back(27);
  ll.push_back(29);

  ll.display();

return 0;
}