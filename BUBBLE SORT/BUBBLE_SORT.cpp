#include<iostream>
using namespace std;
int main()
{
	int arr[100],n;
	cout<<"enter the size of an array"<<endl;
	cin>>n;
	cout<<"enter the elements of an array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
    // BUBBLE SORT
	for(int i=0;i<n-1;i++)
	{
		bool isswap=false;  // swapping nai huai;
		for(int j=0;j<n-i-1;j++)    // n-i-1 becouse each time last elelment is sort or correct 
		{
			if(arr[j]>arr[j+1])
			swap(arr[j],arr[j+1]);
		    bool isswap = true; // swapping ho rai ha ;
		}
		if(isswap == false) break;
	}

	cout<<"shorted array is: ";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
