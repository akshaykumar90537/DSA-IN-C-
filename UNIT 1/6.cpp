#include<iostream>
using namespace std;

int main()
{
    float a,b,c,d,e;
    float average;

    cout<<"Enter  marks obtained by a student in five subjects. ";
    cin>>a>>b>>c>>d>>e;
    average = (a+b+c+d+e)/5;
    if(average >= 40)
    {
        cout<<average<<endl;
       cout<<"Passed"<<endl;
    }
    else
    {
        cout<<"Failed";
    }
return 0; 
}