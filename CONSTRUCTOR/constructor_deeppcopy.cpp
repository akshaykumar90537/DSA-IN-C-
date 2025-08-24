#include<iostream>
using namespace std;

class number{

   int a,*p;
   public:

   number(int x,int y)
   {
        a = x;
        p = new int;
        *p = y;
   }


   number(number &obj)
   {
      a = obj.a;
      p = new int;
      *p = *(obj.p);
   }

   void update()
   {
      a = a+1;
      *p = *p+1;
   }


   void display()
   {
    cout<<a<<" "<<*p<<endl;
   }
   
};


int main()
{
   number obj1(2,5);
   number obj2(obj1);
   obj1.update(); 
    obj1.display(); // shallow copy of constructor. attomatic copy constructor made in class by diffult.
   obj2.display();
return 0;
}