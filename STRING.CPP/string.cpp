#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;  //string are dynamic in nature;
    cout<<"enter string: ";
    getline(cin,str);   // string input.
    cout<<str;

    str = "kumar";
    cout<<str;
    cout<<endl;




    string a;
    string b;
    cout<<"enter string a: ";
    getline(cin,a);
    cout<<"enter string b: ";
    getline(cin,b);
    string c = a+b;
    cout<<c<<endl;

    if(a<b) cout<<"true"<<endl;
    else cout<<" no";
    
    
return 0; 
}