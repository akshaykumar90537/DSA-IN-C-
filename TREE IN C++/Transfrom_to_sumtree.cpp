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


   int sumtrr(Node* root)
   {
      
    if(root == NULL) return 0;

    int leftsum = sumtrr(root->left);
    int rightsum  = sumtrr(root->right);

    root->data =  leftsum+rightsum+root->data;
    return root->data;
   }

    void preordertrversal(Node* root)
   {
    if(root == NULL) return;
    cout<<root->data<<" ";
    preordertrversal(root->left);
    preordertrversal(root->right);

   } 

int main()
{
vector<int>preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
Node* root = BuiltTree(preorder);

cout<<"preorder treversal: ";
preordertrversal(root);
cout<<endl;

sumtrr(root);

cout<<"After conversion of tree : ";
preordertrversal(root);


return 0;
}