#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

string reverseword(string s)
 {
    int n = s.length();
    string ans;
   reverse(s.begin(),s.end());
   for(int i=0;i<n;i++)
   {
      string word;
      while(i<s.length() && s[i]!= ' ')
      {
        word+=s[i];
        i++;
      }
     reverse(word.begin(),word.end());
     if(word.length()>0)  ans+= " "+word;
   }
  return ans.substr(1);
 }

int main()
{
    string s;
    getline(cin,s);
    string a = reverseword(s);
    cout<<a;
    return 0;
}


