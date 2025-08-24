#include<iostream>
#include<bits/stdc++.h>
#include<list>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int value)
    {
       data = value;
       next = NULL;
    }
};



int main()
{

   // insert the node at the begning;

     int arr[] = {1,5,3,8,9};
     Node* Head;
     Head = NULL;
     
     for(int i=0;i<5;i++)
     {
          //linked list does not exist;

    if(Head == NULL)
    {
        Head = new Node(arr[i]);
    }

         //linked list exist;

   else {
    Node* Temp;
    Temp = new Node(arr[i]);
    Temp->next = Head;
    Head = Temp;
   }
    }
   
       // print the value;
    
    while(Head!=NULL){
     cout<<Head->data<<endl;
     Head = Head->next;
    }

   return 0;
}