#include <bits/stdc++.h>
using namespace std;

#define MAX 5
class queuee{
    int front,rear;
    int arr[MAX];

    public:

    queuee()
    {
        front = -1;
        rear = -1;
    }

    void enqueue(int val)
    {
         if(rear >= MAX-1)
         {
            cout<<"Queue overflow\n";
            return;
         }

         else{
            if(front == -1) front = 0;
            arr[++rear] = val;
            cout<<val<<" enqueued in queue\n";
         }
    }



    void dequeue()
    {
        if(front < 0)
        {
            cout<<"Queue underflow\n";
            return;
        }

        else{
            cout<<arr[front]<<" dequed from the queue\n";
            if(front == rear) 
            {
                front = rear = -1;
            }
            else{
            
                front++;
            }
            
        }
    }

   void triverse()
   {
    if(front < 0)
    {
        cout<<"No element present in queue\n";
        return;
    } 

    else{
        cout<<"element of queue is : ";
      for(int i=front;i<=rear;i++)
      {
        cout<<arr[i]<<"  ";
      }
      cout<<endl;
    }
   }
    

   void dispalystatus()
   {
    cout<<"Status of the Queue is: ";
    if(front < 0) 
    {
        cout<<"queue underflow\n";
        return;
    }

    else if(rear > MAX-1) 
    {
        cout<<"queue overflow\n";
        return;
    }

    else{
        cout<<"queue nither overflow nor ubnderflow\n";
        return;
    }
   }

};
int main()
{

    queuee qq;
    int ch;
    do{
        cout<<"Queue operation menu :-->\n";
        cout<<"1). Insert element in Queue\n";
        cout<<"2). Delete element in Queue\n";
        cout<<"3). Traversing in Queue\n";
        cout<<"4). Status of Queue\n";
        cout<<"5). Exit  \n";
        
        cout<<"Enter your choice:\n";
        
        cin>>ch;

        switch(ch)
        {
            case 1:
            int a;
            cout<<"entre the element to insert in Queue: ";
            cin>>a;
            qq.enqueue(a);
            break;

            case 2:

            qq.dequeue();
            break;

            case 3:
            qq.triverse();
            break;

            case 4:
            qq.dispalystatus();
            break;

            case 5:
            cout<<"Exiting the program:!";
            break;

            default:
            cout<<"\ninvalid choise :!!\n";

        }

    }while(ch != 5);


return 0;
}