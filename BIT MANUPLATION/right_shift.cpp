#include <bits/stdc++.h>
using namespace std;


void rigthift(int n,int a)
{
    cout<<"Right Shift : ";
    cout<<(n>>a)<<endl;
    cout<<(n/pow(2,a));
}
int main()
{

    cout<<"Enter number and no of times right shift: ";
    int n,a;
    cin>>n>>a;
    
    rigthift(n,a);
return 0;
}