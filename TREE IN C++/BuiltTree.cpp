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

    static int idx = -1;
    Node* BuiltTree(vector<int>&preorder)
    {
        idx++;
        if(preorder[idx] == -1) return NULL;
        Node* root = new Node(preorder[idx]);
        root->left = BuiltTree(preorder);
        root->right = BuiltTree(preorder);

        return root;
    }


    void preorderTreversal(Node* root)
    {
        if(root == NULL) return;
        cout<<root->data<<" ";
        preorderTreversal(root->left);
        preorderTreversal(root->right);
    }

    void inorderTerevesal(Node* root)
    {
       if(root == NULL) return;
        preorderTreversal(root->left);
        cout<<root->data<<" ";
        preorderTreversal(root->right);   
    }

    void postorderTerevesal(Node* root)
    {
       if(root == NULL) return;
        preorderTreversal(root->left);
        preorderTreversal(root->right);   
        cout<<root->data<<" ";
    }

    void levelorderTerevesal(Node* root)
    {
       queue<Node*>q;
       q.push(root);
       while(!q.empty()){
        
       Node* current  = q.front();
       q.pop();
       cout<<current->data<<" ";
       if(current->left != NULL) q.push(current->left);
       if(current->right != NULL) q.push(current->right);
       }


    }




int main()
{
   vector<int>preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};

   Node* root = BuiltTree(preorder);
   cout<<endl<<"PreOrderTreversal -->  ";
   preorderTreversal(root);
   cout<<endl<<"PostOrderTreversal -->  ";
   postorderTerevesal(root);
   cout<<endl<<"InOrderTreversal -->  ";
   inorderTerevesal(root);
   cout<<endl<<"LevelOrderTreversal -->  ";
   levelorderTerevesal(root);


return 0;
}