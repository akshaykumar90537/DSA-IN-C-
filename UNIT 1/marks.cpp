#include <bits/stdc++.h>
using namespace std;

#define Max 50
void insert(int arr[],int n)
{
    if (n >= Max) {
        cout << "Array full, cannot insert more marks.\n";
        return;
    }
    int a;
    cout<<"enter mark to indert : \n";
    cin>>a; 
    arr[n++] = a;
    cout<<a<<"  marks  inserted!\n";

}

void deletemark(int arr[],int n)
{
    int a;
    cout<<"enter mark to delete from array\n";
    cin>>a;
    int b = 0;
    for(int i=0;i<n;i++)
    {
    
        if(arr[i] == a)
        {
            
            for(int j=i;j<n-1;j++)
            {
                arr[j] = arr[j+1];
            }
            n--;
            cout<<a<<" marks delete from array!!\n";
        }
        else
        {
           b = 1;
        }
    }
    if(b)
    {
        cout<<"enterd marks not present in array!!\n";
    }

}


void search(int arr[],int n)
{
    int a;
    cout<<"enter marks for search: ";
    cin>>a;
    bool ok = false;
    for(int i=0;i<n;i++)
    {
        
        if(arr[i] == a)
        
        {
            cout<<"marks present at indrx  "<<i<<endl;
              ok = true;
            break;
        }
    }
    if(!ok)
        {
            cout<<"marks not present:\n";
        }
}

void display(int arr[],int n){
    cout<<"student marks : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i] <<" ";
    }
}
int main()
{
int n;
cout<<"enter student :";
cin>>n;
int arr[n];
cout<<"enter maeks of student";
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}

insert(arr,n);
deletemark(arr,n);
search(arr,n);
display(arr,n);

return 0;
}