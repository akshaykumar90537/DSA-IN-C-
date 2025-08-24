#include <bits/stdc++.h>
using namespace std;

class bank{
    long int acno;
    string name;
     double balance;

    public:

    bank()
    {
        acno = 12419768;
        name = "Akshay kumar";
        balance = 9001002;
    }

    void deposite();
    void display();
    void withdraw();
};

void bank::deposite()
{
cout<<"enter amount to deposite : ";
long int a;
cin>>a;
balance = balance + a;
cout<<a << "Rupees amount deopsite in your account: \n";

}

void bank::withdraw()
{
    cout<<"enter amount to withdraw : ";
long int a;
cin>>a;
if(balance < a)
{
    cout<<"insufficient balance: \n";
    return;
}
balance = balance - a;
cout<<a << "Rupees  amount withdraw in your account: \n";

}

void bank::display()
{   
    cout<<"Name of the person"<<name<<endl;
    cout<<"Account number of the person :"<<acno<<endl;
    cout<<"amount in your bank is : "<<balance;

}

int main()
{

    bank b;
    b.deposite();
    b.withdraw();
    b.display();



return 0;
}