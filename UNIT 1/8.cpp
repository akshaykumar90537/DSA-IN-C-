#include<iostream>
using namespace std;
int main()
{
    int n,f,f0 = 0,f1 = 1;
    cout<<"no of term: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        f= f0+f1;
        cout<<f0<<endl;
        f0 = f1;
        f1 = f;
    }
    cout<<"missing terms:";


}