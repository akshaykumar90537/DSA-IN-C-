#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class ALL{
    public:
    void all(){
            cout<<"I AM ALL IN ONE "<<endl<<endl;
    }
};



class A:public ALL{
    public:
    void function1(){
        cout<<" I AM CLASS A"<<endl;
    }
};

class B:public ALL{
    public:
    void function2(){
        cout<<" I AM CLASS B"<<endl;
    }
};

class C:public ALL{
    public:
    void function3(){
        cout<<" I AM CLASS C"<<endl;
    }
};

int main()
{
    C obj3;
    obj3.function3();
    obj3.all();

    A obj1;
    obj1.function1();
    obj1.all();
   
   B obj2;
   obj2.function2();
   obj2.all();
    return 0;
}