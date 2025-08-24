#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
       int data;
       Node* next;
       Node(int n)
        {
            data = n;
            next = NULL;
       }

};

class List{
    Node* head;
    Node* tail;
    public:

    List()
    {
        head = tail = NULL;
    }

    

    void push_back(int val)
   {
       Node* newnode = new Node(val);
       if(head==NULL)
       {
        head=tail=newnode;
       }
       else{
        tail->next = newnode;
        tail = newnode;
       }

   }

   void pop_back()
   {
    Node* temp = head;
    while(temp->next != tail)
    {
        temp = temp->next;
    }
    temp->next = NULL;
    tail = temp;
   }
  
   void pop_front()
   {
    Node* temp = head;
    head = head->next;
    temp->next = NULL;
    delete temp;
   }



    void printLL()
    {
        cout<<"Elements of linked list: ";
        Node* temp;
        temp = head;
        while(temp != NULL)
        {
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
        
    }

};
int main()
{
   List ll;
   

   ll.push_back(3);
   ll.push_back(2);
   ll.push_back(5);
   ll.push_back(9);
   ll.printLL();
   
   ll.pop_back();
   ll.pop_back();

   ll.printLL();

   ll.pop_front();
   ll.pop_front();

   ll.printLL();
   

return 0;
}