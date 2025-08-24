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

   void topview(Node* root)
   {

    // using level treversal.
    queue<pair<Node*,int>> q;
    map<int,int>m;
    q.push({root,0});

    while(q.size() > 0)
    {
         Node* curr = q.front().first;
        int curr_horizontal  =  q.front().second;

         q.pop();

         if(m.find(curr_horizontal) == m.end())
         {
            m[curr_horizontal] = curr->data;
         }

         if(curr->left != NULL)
         {
            q.push({curr->left,curr_horizontal-1});
         }
         if(curr->right != NULL)
         {
            q.push({curr->right,curr_horizontal+1});
         }
    }

        for(auto it : m)
         {
            cout<<it.second<<" ";
         }
   }

int main()
{
vector<int>preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
Node* root = BuiltTree(preorder);

topview(root);
return 0;
}