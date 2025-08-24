#include <bits/stdc++.h>
using namespace std;


class Node{
    public:
    int data;
    Node* next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};


class CircularLinkedList{

    Node* head;
    Node* tail;
 
    public:

    CircularLinkedList()
    {
        head = tail = NULL;
    }

    void push_front(int val)
    {
        Node* newnode = new Node(val);

        if(head == NULL)
        {
            head = tail = newnode;
            tail->next = head;
        }
        else
        {
            newnode->next = head;
            head = newnode;
            tail->next = newnode;
        }
    }

    void push_back(int val)
    {
        Node* newnode = new Node(val);
        if(head == NULL) 
        {
           head = tail = newnode;
           tail->next = head;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
            tail->next = head;
        }
    }

    void pop_front()
    {
        if(head == NULL) return;
        else if(head == tail)
        {
            delete head;
            head = NULL;
            tail  = NULL;
        }
        else
        {
            Node* temp = head;
            head = head->next;
            tail->next = head;
            delete temp;
        }
    }

    void pop_back()
    {
        if(head == NULL) return;
        else if(head == tail) 
        {
            delete head;
            head = tail = NULL;
        }
        else
        {
            Node* temp = head;

            while(temp->next != tail)
            {
                temp = temp->next;
            }
           
            Node* todelet  = tail;
            tail = temp;
            tail->next = head;
            delete todelet;
        }
    }

    void printCLL()
    {
        if(head == NULL) return;
         
        cout<<head->data<<"->";
        Node* temp = head->next;

        while(temp != head)
        {
            cout<<temp->data<<"->";
            temp = temp->next;
        }

        cout<<temp->data;
    }

};
int main()
{

    CircularLinkedList cll;
    cll.push_front(1);
    cll.push_front(2);
    cll.push_front(3);

    cll.push_back(84);
    cll.push_back(90);
    cll.push_back(100);

    cll.pop_front();

    cll.pop_back();


    cll.printCLL();

return 0;
}