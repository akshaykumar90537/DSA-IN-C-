#include<iostream>
#include<bits/stdc++.h>
using namespace std;



class GrandFather{
    public:
    grandfather()
    {
        cout<<" I AM GRANDFATHER."<<endl;
    }

};

// Derived Class.
class Father:public GrandFather{
    public:
    father()
    {
        cout<<" I AM FATHER."<<endl;
    }

};

// Derived Class.
class Child:public Father{
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
obj.grandfather();

Father obj2;
obj2.father();
obj2.grandfather();

return 0;
}