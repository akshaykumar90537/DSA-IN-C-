#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n,num;
	vector<int> numbers;
	cout<<"enter the num of ellements of vector:";
	cin>>n;
	cout<<"enter the elements of vector";
	for(int i=0;i<n;i++)
	{
	    cin>>num;
	    numbers.push_back(num);
	}  
	for(int i=0;i<numbers.size();i++)
	{
		cout<<numbers[i]<<" ";
	}
	vector<int>numbers1(numbers.begin(),numbers.end());
		for(int i=0;i<numbers.size();i++)
	{
		cout<<numbers1[i]<<"\n ";
	}
	cout<<"\n size of vector1 :"<<numbers.size();
	cout<<"\n size of capacity1 :"<<numbers.capacity();
	cout<<"\n size of vector2 :"<<numbers1.size();
	cout<<"\n size of capacity2 :"<<numbers1.capacity();
	
	return 0;
}
