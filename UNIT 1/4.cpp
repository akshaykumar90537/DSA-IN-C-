#include<iostream>
using namespace std;

class opt{
   
    public:
    int n;
     int choice;
     opt()
    {
        cout<<"MENU";
        cout<<"1. even or odd"<<endl;
        cout<<"2. 300 trems divisible by seven"<<endl;
        cout<<"3. 300 sries of fibbonacci"<<endl;
    }

    void choice()
    {
        cout<<"Enter your choice: ";
        cin>>n;
        
    }

};

class even:public opt{

    public:
    void evenorodd()
    {
        if(n%2 == 0) cout<<"EVEN";
        else cout<<"ODD";

    }
};

class divisible:public even{
    public:
    int count = 0;
    void divisible()
    {
        if(n%2 != 0)
        {
           for(int i =n;i<=300;i++)
           {
            if(i%7 == 0) cout<<i<<" ";
            else continue;
            count++;
           }
        }
    }
};

class fibb: public divisible{
    public:

       int n = 300,f,f0 =0,f1 =1;
       cout<<"fibbbo = ";
       void fibbonacci()
       {
             while(n--)
            {
                    f = f0+f1;
                    cout<<fo<<" ";
                     f0 = f1;
                     f1 = f;
            }
       }

};

main()
{
    fibb obj;
    obj.choice;

}