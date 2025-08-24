#include <bits/stdc++.h>
using namespace std;

void leftshift(int n,int a)
{
    cout<<"Left Shift : ";
    cout<<(n<<a)<<endl;
    cout<<(n*pow(2,a));
}

int main()
{

    cout<<"Enter number and no of times left shift: ";
    int n,a;
    cin>>n>>a;
    

    leftshift(n,a);

return 0;
}