#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int n,q;
    cin>>n>>q;
    vector<vector<int>>vec(n);
    for(int i=0;i<n;i++)
    {
        int size;
        cin>>size;
        vec[i].resize((size));
        
        for(int j=0;j<size;j++)
        {
            cin>>vec[i][j];
        }
        
    }
    for(int i=0;i<q;i++)
    {
        int arrindex,elementindx;
        cin>>arrindex>>elementindx;
        cout<<vec[arrindex][elementindx]<<"\n";
    }
   
    
     
    return 0;
}
