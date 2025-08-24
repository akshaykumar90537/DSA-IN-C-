#include<iostream>

//#include<conio.h>
using namespace std;
 class sample

 {

 

 private:

 float x;

 float y;

 public:

 void get()

 {

 cout<<"enter any two number"<<endl;

 cin >>x>>y;

 }

void disp()

 {

 cout<<"First value = " <<x<<endl;

 cout<<"Second value = "<<y<<endl;

 cout<<"sum = "<<sum()<<endl;

 cout<<"sub = "<<sub()<<endl;

 cout<<"mul = "<<mul()<<endl;

 cout<<"div = "<<div()<<endl;

 }

 float sum()

 {

  return(x+y);

 }

 float sub()

 {

  return(x-y);

 }

 float mul()

 {

  return(x*y);

 }

 float div()

 {

  return (x/y);

 }

 };

int main()

{

 //clrscr();

 sample temp;

 temp.get();

 temp.disp();

}