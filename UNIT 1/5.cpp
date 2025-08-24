#include<iostream>
#define pi 3.14
using namespace std;

class shape{    //base class
    protected:
    float area;
    int r;
};

class circle:protected shape{
public:
    circle()
    {
        cout<<"enter the radius : ";
        cin>>r;
    }

    void calculatearea()
    {
        
         area = 2*(pi*r*r);
    }
    void display()
    {
       cout<<area;
    }
};


int main()
{
    circle obj;
    obj.calculatearea();
    obj.display();
}
