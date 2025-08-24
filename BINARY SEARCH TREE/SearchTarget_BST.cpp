#include <bits/stdc++.h>
using namespace std;


    class Node{
        public:
        int data;
        Node* left;
        Node* right;
        

        Node(int val)
        {
            data = val;
            left = right = NULL;
        }
    };


      bool search(Node* root,int tar)
    {
        if(root == NULL) return false;

        if(tar == root->data) return true;
        else if(tar > root->data) return search(root->right,tar);
        else return search(root->left,tar);
    }


    Node* insert(Node* root,int val)
    {
        if(root == NULL) return new Node(val);

        if(val < root->data) root->left = insert(root->left,val);
        else root->right = insert(root->right,val);

        return root;
    }
   
    Node* BuiltBST(vector<int>&arr)
    {
       Node* root = NULL;

       for(auto val : arr)
       {
        root = insert(root,val);
       }
        return root;
    }  

    void inorderTerevesal(Node* root)
    {
       if(root == NULL) return;
        inorderTerevesal(root->left);
        cout<<root->data<<" ";
       inorderTerevesal(root->right);   
    }

int main()
{
   vector<int>arr = {3,2,1,5,6,4};

   Node* root = BuiltBST(arr);

//    inorderTerevesal(root);
int n;
cout<<"enter no to searh in BST : ";
cin>>n;
if(search(root,n)) cout<<"Found"<<endl;
else cout<<"NOT Found"<<endl;

return 0;
}