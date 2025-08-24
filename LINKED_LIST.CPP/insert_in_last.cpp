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
Node* Tail;
Head = NULL;
Tail = NULL;

int arr[] = {5,6,3,2,13,7,8};
//insert elements in the last;

for(int i=0;i<7;i++)
{
//if linked list is empty;
if(Head == NULL){
    Head = new Node(arr[i]);
    Tail = Head;
}
// if linked list is not empty;
else{
      Tail->next = new Node(arr[i]);
      Tail = Tail->next;
}

}

Node* temp;
temp = Head;
while(temp)  //while temp not null;
{
   cout<<temp->data<<endl;
   temp = temp->next;
}
return 0;
}