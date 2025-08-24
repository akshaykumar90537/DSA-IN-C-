#include<iostream>
using namespace std;
int main()
{
    int n;
    int rem = 0,rev = 0;
    cin>>n;
    while(n!=0){
        rem = n%10;
        if(rev  > INT_MAX/10  || rev < INT_MIN/10)  return 0;
        rev = (rev*10)+rem;
        n = n/10;  
    } 
    cout<<rev;
}  