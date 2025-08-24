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
    void reverselist()
    {
         Node* prev  = NULL;
         Node* curr  = head;
         Node* next  = NULL;
           
         while(curr != NULL)
         {
            next = curr->next;  // save next node
            curr->next = prev;  // reverse the pointer
            prev = curr;        // move prev forward
            curr = next;        // move curr forward

         }

         head = prev;
         
         
    }

    void printLL()
    {
        //cout<<"Elements of linked list: ";
        Node* temp;
        temp = head;
        while(temp != NULL)
        {
            cout<<temp->data<<" -> ";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
        
    }

};

int main()
{
  List ll;
  int n;
  cout<<"Enter no of elements: ";
  cin>>n;
  for(int i=0;i<n;i++)
  {
    int x;
    cin>>x;
    ll.push_back(x);
  }
  
   ll.printLL();

   ll.reverselist();
   ll.printLL();


return 0;
}