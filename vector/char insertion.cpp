#include<iostream>
#include<vector>
using namespace std;
int main()
{
	char value;
	vector<char>character;
	
	cout<<"enter the char value:";
	for(int i=0;i<10;i++)
	{
		cin>>value;
		character.push_back(value);
	}
	cout<<" your enterd value of the char :";
	for(int i=0;i<10;i++)
	{
		cout<<character[i];
	}
}
