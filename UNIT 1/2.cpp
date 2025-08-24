#include<iostream>
using namespace std;

class Myroom{
    private:
          int length,bredth,hight;
    public:
          
          void calculatearea(int length,int bredth)
          {
            double area = length*bredth;
            cout<<"area of the room is :"<<area<<endl;
          }

          void calculatvolume(int length,int bredth,int hight)
          {
            cout<<"volume of the room is :"<<length*bredth*hight;
          }

};


int main()
{
    Myroom obj;
    int len = 45;
    int bred= 26;
    int vol = 23;
    obj.calculatearea(len,bred);
    obj.calculatvolume(len,bred,vol);
return 0;
}