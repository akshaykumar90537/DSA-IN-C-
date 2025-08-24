#include<iostream>
using namespace std;

class Myroom{
    public:
int len,bred,hight;
 
  void calculatearea()
  {
    cout<<2*((len*bred)+(bred*hight)+(hight*len))<<endl;
  }

  void calculateparameter()
  {
    cout<<4*(len*bred*hight);
  }

};


int main()
{
    Myroom obj;
    obj.len = 25;
    obj.bred = 56;
    obj.hight = 23;

    obj.calculatearea();
    obj.calculateparameter();
return 0;
}