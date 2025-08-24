#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>numbers(5);
	cout<<"enter the elements of vector :";
	
	for(int i=0;i<numbers.size();i++)
	{
		cin>>numbers[i];
	}
	cout<<"your emterd ellements of vector is :";
	for(int i=0;i<numbers.size();i++)
	{
		cout<<numbers.at(i)<<" ";
	}
	numbers.at(3)=12;
	cout<<"\n\n num at first index:"<<numbers.front();
	cout<<"\n num at last index:"<<numbers.back();
	cout<<"\n\n number at index 3 is: "<<numbers.at(3);
	cout<<"\nnumer at index 7 is: "<<numbers.at(7);  //show bound index or give some instructon;

	
	return 0;
}
