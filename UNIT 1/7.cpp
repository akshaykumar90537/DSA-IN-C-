#include<iostream>
using namespace std;

class Room{
int l,b,h;
public:
Room(){
    cin>>l>>b>>h;
}
void calculatearea()
{
    cout<<(l*b)<<endl;
}
void calculatevolume()
{
    cout<<(l*b*h);
}
};

int main()
{
    Room obj;
    obj.calculatearea();
    obj.calculatevolume();
}