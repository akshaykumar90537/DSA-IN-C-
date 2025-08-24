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
    
    //print lined list;
    Node* temp;
    temp = Head;
    while(temp){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
return 0;
}