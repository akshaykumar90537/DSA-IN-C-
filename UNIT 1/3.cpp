#include<iostream>
using namespace std;

class employee{

   string name,degination;
   double salary;
   int age;

   public:
   void inputs();
   void outputs();

};

void employee::inputs()
{
    cout<<"enter the employee name:";
    cin>>name;
    cout<<"entre the salary of the employee: ";
    cin>>salary;
    cout<<"enter the age of the employee: ";
    cin>>age;
    cout<<"enter the degination(post) of the employee: ";
    cin>>degination;
};

void employee::outputs()
{
    cout<<"\n\n\nemployee name: "<<name<<endl;
    cout<<"salary of the employee: "<<salary<<endl;
    cout<<" age of the employee: "<<age<<endl;
    cout<<" degination of the employee: "<<degination<<endl;
};



main()
{
    int n;
    cout<<"enter the number of employee: ";
    cin>>n;
    employee obj[n];
    for(int i= 0;i<n;i++)
    {
        obj[i].inputs();
        
    }
    for(int i= 0;i<n;i++)
    {
       
        obj[i].outputs();
    }
return 0;
}