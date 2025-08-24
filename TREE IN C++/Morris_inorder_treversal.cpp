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

   void morris_traversal(Node* root)
   {

    Node* curr = root;
     while(curr != NULL)
        {

            if(curr->left == NULL) 
            {
                cout<<(curr->data)<<" ";
                curr = curr->right;
            }
            else
            {
                // Find INOrder Preceder;
                Node* IP = curr->left;
               while(IP->right != NULL && IP->right != curr)
               {
                IP  =  IP->right;
               }

               if(IP->right == NULL)
               {
                IP->right = curr;
                curr= curr->left;
               }

               else
               {
                   IP->right = NULL;
                   cout<<(curr->data)<<" ";
                   curr = curr->right;
               }
            }


            
        }

   }


int main()
{
vector<int>preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
Node* root = BuiltTree(preorder);

morris_traversal(root);
return 0;
}