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
{// sahllow copy.

// in shallow copy constructor automatically make in class by difaut in compiler.
    number obj1(5,9);
    number obj2(obj1);
    obj1.update();   // shallo copy ha becouse obj1 ka update hua ha but obj2 ka nai per isliya obj2 ki values same honi chayia but p ki value change ho gayi due to pointer . 
    obj1.display();
    obj2.display();

}