#include<iostream>
#include<map>
using namespace std;
int main()
{
   // map can not print repeated key;
   // elements of map is printed in assending order acc to key;


    map<string,int>m;  // string is key ok map which is uniqe for every element;
    
    m["tv"] = 100;  // insert key and and value in map;
    m["laptop"] = 200; 
    m["home"] = 500; 
    m["phone"] = 10; 
     m["tv"] = 300;

    m.insert({"akshay",100});
    m.emplace("jaat",1800);

    for(auto p:m)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<end<<endl;

    cout<<m.count("laptop")<<endl;
    cout<<m.count("tv")<<endl;

     
   
return 0;
}