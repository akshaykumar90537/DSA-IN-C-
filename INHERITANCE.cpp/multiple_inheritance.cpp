#include<iostream>
#include<bits/stdc++.h>
using namespace std;



class Father{
    public:
    father()
    {
        cout<<" I AM FATHER."<<endl;
    }
};

class Mother{
    public:
    mother()
    {
        cout<<" I AM MOTHER."<<endl;
    }
};

 class Child:public Father,public Mother{
    public:
    child()
    {
        cout<<" I AM CHILD."<<endl;
    }
 };


int main()
{
    Child obj;
    obj.child();
    obj.father();
    obj.mother();
return 0;
}