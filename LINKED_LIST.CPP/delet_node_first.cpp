#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int value){
        data = value;
        next = NULL;
    }

};





int main()
{
   Node* Head;
   Node* temp;
   Head = NULL;
   int arr[] = {3,2,6,5,4,1,9,8};

   // delete a node;

   for(int i=0;i<8;i++)
   {
     if(Head!=NULL)
      {
       temp = Head;
       Head = Head->next;
       delete temp;
      }
      
   }
   
return 0;
}