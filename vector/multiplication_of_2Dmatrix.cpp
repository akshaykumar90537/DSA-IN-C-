#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r1,r2,c1,c2;
    cout<<"enter the row of first matrix :";
    cin>>r1;
    cout<<"\nenter the no of coloums for firs matrix: ";
    cin>>c1;
    cout<<"\nenter the row of second matrix :";
    cin>>r2;
    cout<<"\nenter the no of coloums for second matrix: ";
    cin>>c2;

    vector<vector<int>>v1(r1,vector<int>(c1));
    cout<<"Enter the elements for first matrix: \n";
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cin>>v1[i][j];
        }
    }
    cout<<"\nelements of first matrix :\n";
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cout<<v1[i][j]<<" ";
        }
        cout<<endl;
    }
    vector<vector<int>>v2(r2,vector<int>(c2));
    cout<<"\nEnter the elemnts for second matrix: \n";
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cin>>v2[i][j];
        }
    }

    cout<<"\nelements of second matrix :\n";
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cout<<v2[i][j]<<" ";
        }
        cout<<endl;
    }
    vector<vector<int>>v3(r1, vector<int>(c2));
    cout<<"\nmultiplication of matrix :";
    if(c1 != r1) cout<<"\nmultiplication not possible: ";

    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            for(int k=0;k<c1;k++)
            {
                v3[i][j] += v1[i][k]*v2[k][j];
            }
        }
    }
    cout<<"\nafter multiplication of two matrix :-->\n";
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cout<<v3[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}