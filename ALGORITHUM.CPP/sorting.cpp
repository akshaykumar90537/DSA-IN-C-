#include<bits/stdc++.h>
#include<vector>

using namespace std;
int  main()
{
    vector<int> vec = { 5,4,6,1,3,6,7,9};

    sort(vec.begin(),vec.end());
    //sort(vec.begin(),vec.end(), greater<int>());  //for desinding order.

    for(auto val:vec)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    
    return 0;

   


//   int arr[]= { 5,4,6,1,3,6,7,9};

//     sort(arr,arr+8);    // for desinding ordr sort(arr,arr+8.greater<int>());

//     for(auto val:arr)
//     {
//         cout<<val<<" ";
//     }
//     return 0;


}
