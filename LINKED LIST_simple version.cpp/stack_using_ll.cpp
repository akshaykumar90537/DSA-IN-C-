#include <bits/stdc++.h>
using namespace std;


class Node{

    public:
    int data;
    Node* next;

    Node(int val){
         data = val;
         next = NULL;
    }
};


class Stack{

    Node* top = NULL;

    public:
    void push(int val)
    {
        Node* newnode = new Node(val);
        newnode->next = top;
        top = newnode;
    }

    void pop()
    {
        if(!top)
        {
            cout<<"Stack is empty!!\n";
            return;
        }

        Node* todelete = top;
        top = top->next;
        delete todelete;
    }

    void peek()
    {
        if(!top) 
        {
            cout<<"Stack is empty!!\n";
            return;
        }
        cout<<"Top of the stack is : "<<top->data;
    }

    void isempty()
    {
         if(!top) 
        {
            cout<<"Stack is empty!!\n";
            return;
        }
    }

    void display()
    {
        Node* curr = top;;
        while(curr)
        {
            cout<<curr->data<<" ";
            curr = curr->next;
        }

        cout<<"\n\n";
    }
};


int main()
{

    Stack stack;
    stack.push(5);
    stack.push(6);
    stack.push(7);
    stack.push(8);
    stack.push(9);
    stack.push(10);

    stack.display();

    stack.pop();
    stack.pop();

    stack.display();

    stack.isempty();


return 0;
}