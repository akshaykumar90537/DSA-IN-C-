#include<iostream>
using namespace std;
int main()
{
	int arr[7] = {-1,0,3,4,5,9,12};
	int mid,start=0,end = arr[6];
	int tar = 12;
	while(start<=end)
	{
		mid = (start+end)/2;
		if(tar>arr[mid]) start = mid+1;
		else if(tar < arr[mid]) end = mid-1;
		else if(tar == arr[mid]) 
		{
		cout<<mid<<endl;
		break;	
		}
		else 
		{
			cout<<"element not found"<<endl;
			break;
		}
	}
        
	return 0;
}
