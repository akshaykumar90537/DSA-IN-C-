#include<iostream>
using namespace std;

namespace first{
    void fun()
    {
        cout<<"akshay kumar 1st";
    }
 }

 namespace second{
        void fun()
    {
        cout<<"akshay kumar 2nd";
    }
 }
 using namespace second;
 int main()
 {
    fun();
 }