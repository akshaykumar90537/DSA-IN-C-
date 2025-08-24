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

    void kthlevel(Node* root ,int k)
    {
        if(root == NULL) return;

        if(k==1)
        {
            cout<<root->data<<" ";
            return;
        }

        kthlevel(root->left,k-1);
        kthlevel(root->right,k-1);

    }



int main()
{
   vector<int>preorder = {1,2,7,-1,-1,-1,3,4,-1,-1,5,-1,-1};

   Node* root = BuiltTree(preorder);
   
   kthlevel(root,3);


return 0;
}