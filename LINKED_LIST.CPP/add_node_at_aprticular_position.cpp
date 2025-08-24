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
  
  Node* createlinkedlist(int arr[],int indx,int size){
    if(indx == size)  return NULL;
    Node* temp;
    temp = new Node(arr[indx]);
    temp->next = createlinkedlist(arr,indx+1,size);
    return temp;
  }


int main()
{
     Node* Head;
   Head = NULL;
   int arr[] = {3,2,6,5,4,1,9,8};
    
   Head = createlinkedlist(arr,0,8);
    // insert value in particular poaition;

    int x = 3;// Position to insert after
    int value = 55;
    Node* temp;
    temp = Head;
    x--;
    while(x--)
    {
        temp = temp->next;
    }
    Node* temp2;
    temp2 = new Node(value);
    temp2->next = temp->next;
    temp->next = temp2;
    //print lined list;
    
    temp = Head;
    while(temp){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
return 0;
}