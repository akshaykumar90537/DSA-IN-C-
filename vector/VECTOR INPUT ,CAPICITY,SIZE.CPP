#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n,num;
	cout<<"enter the number of ellements in vector:";
	cin>>n;
	vector<int>numbers;
	cout<<"\nenter the elements of vector: ";
	for(int i=0;i<n;i++)
	{
		cin>>num;
		numbers.push_back(num);
	}
	cout<<"\nyour enterd elements of vector:";
	for(int i=0;i<n;i++)
	{
	cout<<numbers[i]<<" ";
	}
	
	cout<<"\nsize of vector:"<<numbers.size();
	cout<<"\ncapicity of vector is :"<<numbers.capacity();
	return 0;
}
