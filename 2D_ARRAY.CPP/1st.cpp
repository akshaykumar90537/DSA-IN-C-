#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
        int matrix[3][3]= {{2,3,6},{5,84,2},{8,1,9}};
      
       
       
       int maxsum = INT_MIN;
        int sum =0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(j == 2-i)
            {
                 sum+=matrix[j][i];
            }
          
        }
    
    //    maxsum = max(maxsum,sum);
    }
    cout<<sum;

return 0;
}