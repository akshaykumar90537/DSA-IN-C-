#include<iostream>
#include<string>
using namespace std;
int main()
{
    /*  char str[100];
    cout<<"enter char arr: ";
    cin>>str;           // can not take input in space; ex = akshay kumar
    cout<<str; */



    //   char str[12];
    //   cout<<"enter the char array: "; 
    //   cin.getline(str,12);    // syntax = cin.getline(str,len,delimiter);   delimiter mean any value whwere you want to stop the string to print;

    // for(char ch:str)
    // {
    //     cout<<ch<<" ";
    // }


    char st[100];
    cout<<"enter the char: ";

    cin.getline(st,100,'$');   // enter dolar in a string to stop the string .

    cout<<"output : "<<st;

     cout<<endl;

     char a[] = "akshay kumar";
    int len=0;
     for(int i=0;i<a[i]!='\0';i++)
     {
        len++;
     }
     cout<<"length of a sttring is: "<<len<<endl;

     for(int i=0;i<len;i++)
     {
        cout<<a[i]<<" "; 
     }








    
     





 return 0;
}