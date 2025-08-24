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


     Node* getinordersuccessor(Node* root)
     {
        while(root != NULL && root->left != NULL)
        {
            root  = root->left;
        }

        return root;
     }


    Node* deletenode(Node* root,int key)
    {
        if(root == NULL) return NULL;

        if(key  <  root->data)
        {
           root->left  =  deletenode(root->left,key);
        }
        else if(key > root->data)
        {
            root->right = deletenode(root->right,key);
        }

        else{

            if(root->left == NULL)
            {
                   Node* temp = root->right;
                   delete root;
                   return temp;
            }else if(root->right == NULL)
            {
                Node* temp = root->left;
                delete root;
                return temp;
            }
            else
            {
                // find INORDER SUCCESSOR : Right suntree ka leftmost node
                Node* IS = getinordersuccessor(root->right);
                root->data = IS->data;
                root->right = deletenode(root->right,IS->data);
            }
            


        }
    }

    Node* insert(Node* root,int val)
    {
        if(root == NULL) return new Node(val);

        if(val < root->data) root->left = insert(root->left,val);
        else root->right = insert(root->right,val);
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
   
   cout<<"Before: ";
   inorderTerevesal(root);

   deletenode(root,6);
    deletenode(root,2);

   cout<<endl;
   cout<<"After : ";
   inorderTerevesal(root);

return 0;
}