#include<iostream> 
using namespace std;



void searchelement(int arr[] ,int n)
{
    int el,count = 0;
    cout<<"enter the element to search in array: ";
    cin>>el;
    for(int i=0;i<n;i++)
    {
        if(el == arr[i])
           {
             cout<<"position of the element is: "<<i+1;
              count++;
            }
    }
    if(count == 0)
     {
        cout<<"not find!!";
    }
}

void insertelement(int arr[], int n)
{
       int a,p;
         cout<<"\n enter the element you want to insert: ";
        cin>>a;
         cout<<"\nenter the position where you want to insert: ";
          cin>>p;
     for(int i = n;i>=p-1;i--)
    {
           arr[i+1] = arr[i];
    }
       arr[p-1] = a;
         for(int i = 0;i<n+1;i++)
{
cout<<arr[i]<<" ";
}

}

void deleteelement(int arr[],int n)
{
    int a,b = 0;
    cout<<"enter the element to delete in array: ";
    cin>>a;
    for(int i =0 ;i<n;i++)
    {
        if(a == arr[i])
        {
            for(int k =i;k<n;k++)
            {
                arr[k] = arr[k+1];
            }
            b = 1;
            break;
        }
        
    }
    if(b == 0)
    {
        cout<<"Enterd element not found in array: ";
    }
    n--;
    cout<<"array after deletion: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }


}

 void displayelement(int arr[],int n)
{
    cout<<"Elements of an array is: ";
    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
int arr[50],n,ch;
cout<<"enter the number of elements in an array: ";
cin>>n;
cout<<"\nenter the elements of an array: ";
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
cout<<"enter your choise: -->\n1. search element in array.\n2. insert element in array.\n3. Delete an element in an array.\n4. Display the array element.";
cin>>ch;
switch(ch)
{
case 1:
searchelement(arr,n);
break;
case 2:
insertelement(arr,n);
break;
case 3:
deleteelement(arr,n);
break;
case 4:
displayelement(arr,n);
break;
default:
cout<<"Enter the valid choice!!";
}
return 0;
}

