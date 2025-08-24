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

    void push_front(int val)
    {
        Node* newnode = new Node(val);
        if(head == NULL)
        {
            head = tail= newnode;
        }
        else{
            newnode->next = head;
            head = newnode;
        }
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
    delete tail;
    temp->next = NULL;
    tail = temp;
   }
  
   void pop_front()
   {
    if(head == NULL) return;
    Node* temp = head;
    head = head->next;
    temp->next = NULL;
    delete temp;
   }

   void push_atpos(int val,int pos)
   {
    if( pos < 0)
    {
        cout<<"invalid position!!\n";
        return;
    }

    if(pos == 0)
    {
        push_front(val);
        return;
    }
    
    Node* temp = head;
    for(int i=0;i<pos-1;i++)
    {
        if(temp == NULL)
        {
            cout<<"Invalid position!!";
            return;
        }
        temp = temp->next;
    }
    Node* newnode = new Node(val);
    newnode->next = temp->next;
    temp->next = newnode;
    
   }

   void pop_atpos(int pos)
   {
    if(pos < 0)
    {
        cout<<"Invalid position";
        return;
    }

    if(pos == 0)
    {
        pop_front();
        return;
    }

    Node* temp = head;
    for(int i=0;i<pos-1;i++)
    {
        if(temp == NULL)
        {
            cout<<"Invalid position\n";
            return;
        }
        temp = temp->next;
    }
    Node* todelet = temp->next;
    temp->next = temp->next->next;
    delete todelet;
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
   ll.push_front(8);
   ll.push_front(0);
   ll.push_front(56);

   ll.printLL();

   ll.push_back(80);
   ll.push_back(2);

   ll.printLL();

   ll.push_atpos(93,2);
   ll.push_atpos(23,5);
   

   ll.printLL();
   
   ll.pop_back();
   ll.pop_back();


   ll.printLL();

   ll.pop_front();
   ll.pop_front();

   ll.printLL();
   

   ll.pop_atpos(2);
   ll.pop_atpos(1S);
 
   ll.printLL();

return 0;
}