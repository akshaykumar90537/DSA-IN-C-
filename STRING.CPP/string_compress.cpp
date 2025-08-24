#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;


string stringCombination(vector<char> &ele)
 {  
    int idx = 0;
    for(int i=0;i<ele.size();)
    {    
       char ch = ele[i];
        int count = 0;   
       while(ele[i] == ch && i < ele.size())
      {
        count++; i++;
      }
      if(count == 1) ele[idx++] = ch;
      else{
        ele[idx++] = ch;
        string str = to_string(count);
        for(auto dig: str)
        {
            ele[idx++] = dig;
        }
      }

    }
    ele.resize(idx);
    return string(ele.begin(),ele.end());
  
 }


int main()
{
   vector<char> cha;
   char ch;
   for(int i=0;i<5;i++)
   {
    cin>>ch;
    cha.push_back(ch);
   }
    string n = stringCombination(cha);
    cout<<n;
   return 0;
}