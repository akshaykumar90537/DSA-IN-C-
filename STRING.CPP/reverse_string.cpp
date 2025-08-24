#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"enter the string : ";
    getline(cin,str);
    int n = str.length();
     int start =0 ,end = n-1;
     while(start<end)
     {
        swap(str[start],str[end]);
        start++;
        end--;
     }
     cout<<str;
     return 0;
}