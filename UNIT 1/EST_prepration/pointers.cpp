#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[] = {1,2,3,6,4,5,8};
    int* ptr = arr;

    for(int i=0;i<7;i++)
    {
        cout<<*(ptr+i)<<" ";
    }
return 0;
}