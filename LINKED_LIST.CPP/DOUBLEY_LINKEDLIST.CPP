#include<iostream>
using namespace std;


class NODE{
    public:
    int data;
    NODE* next;
    NODE* prev;

    NODE(int value){
       data = value;
       next = NULL;
       prev = NULL;
    }

};

class doublylist{

   NODE* Head;
   NODE* Tail;
   public:
   doublylist()
   {
    Head =  NULL;
    Tail = NULL;
   }
   
   void push_back(int value)
   {
    if(Head == NULL)
    {
        Head = new NODE(value);
    }
    else{
           NODE* temp = new NODE(value);
           temp->next = Head;
           Head->prev = temp;
           Head = temp;
    }
    
   }

   void print()
   {
    NODE *first = Head;
    while(first)
    {
          cout<<first->data<<" ";
          first = first->next;
    }
    
   }
};

int main()
{
   doublylist dll;
   dll.push_back(1);
   dll.push_back(2);


    dll.print();
}