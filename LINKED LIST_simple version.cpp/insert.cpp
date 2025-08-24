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

   void insert(int pos,int val)
   {
    if(pos < 0)
    {
        cout<<"INVALID POSITION\n";
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
            cout<<"INVALID POSITION\n";
            return;
        }
        temp = temp->next;
    }
    Node* newnode = new Node(val);
    newnode->next = temp->next;
    temp->next = newnode;
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
   ll.push_front(5);
   ll.push_front(8);
   ll.push_front(9);

   ll.printLL();
   
   ll.insert(0,3);
   ll.insert(1,7);
   ll.insert(5,88);
   ll.insert(10,65);

   ll.printLL();

return 0;
}