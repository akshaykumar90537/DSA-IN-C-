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
    
   search(int val)
   {
    if(head == NULL) cout<<"Empty list!!\n";
    Node* temp;
    temp = head;
    while(temp != NULL)
    {
        if(temp->data == val) 
        {
            cout<<"\nElemnet found in linked list: "<<temp->data;
            break;
        }
        else{
            temp = temp->next;
        }
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
   
   ll.push_back(3);
   ll.push_back(2);
   ll.push_back(6);
   ll.push_back(7);
   
   ll.printLL();

   ll.search(6);

return 0;
}