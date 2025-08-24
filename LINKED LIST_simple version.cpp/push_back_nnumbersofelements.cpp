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
    

    void printLL()
    {
        //cout<<"Elements of linked list: ";
        Node* temp;
        temp = head;
        while(temp != NULL)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
        
    }

};
int main()
{
  List ll;
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    int x;
    cin>>x;
    ll.push_back(x);
  }
  
   ll.printLL();


return 0;
}