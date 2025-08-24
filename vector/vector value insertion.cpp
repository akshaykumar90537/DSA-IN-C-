#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int value;
	vector<int>numbers;
	
	for(int i=0;i<3;i++)
	{
		cout<<"enter the value :";
		cin>>value;
		numbers.push_back(value);
	}
	for(int i=0;i<3;i++)
	{
		cout<<"your enterd value is:";
		cout<<numbers[i]<<endl;
	}
	
	cout<<"size of a vector is :"<<numbers.size();
	return 0;
}
