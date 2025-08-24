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

   ll.push_back(3);
   ll.push_back(2);

   ll.printLL();


return 0;
}