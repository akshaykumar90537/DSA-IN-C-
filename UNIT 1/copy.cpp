#include <bits/stdc++.h>

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
    //cout<<"enter the employee name:";
    cin>>name;
   // cout<<"enter the age of the employee: ";
    cin>>age;
   // cout<<"enter the degination(post) of the employee: ";
    getline(cin,degination);
   // cout<<"entre the salary of the employee: ";
    cin>>salary;
};

void employee::outputs()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
     cout<<"Degination: "<<degination<<endl;
    cout<<"Salary: "<<salary<<endl;
   
};



int main()
{
    int n;
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