#include<iostream>
using namespace std;

 class shape{
   public:
   float r,side;
   void getdatacircle()
   {
    cout<<"enter the radius: ";
    cin>>r;
   }
   
   void getdatasquare()
    {
        cout<<"\nenter side: ";
        cin>>side;
    }
};

class circle: public shape{
    public:
    void area()
    {
       float area;
       area = 3.14*r*r;
       cout<<"area of circlr is : "<<area;

    }
};

class square: public shape{
    public:
   void area()
   {
    float area;
    area = side*side;
    cout<<"area of square: "<<area;
   }
};

int main()
{
     circle obj1;
     obj1.getdatacircle();
     obj1.area();
     square obj2;
     obj2.getdatasquare();
     obj2.area();
}