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

    int MaxWidth(Node* root)
    {
        queue<pair<Node*,long long>>q;

        q.push({root,0});
        int maxwidth = 0;
        
        while(q.size() > 0)
        {
            int size = q.size();
            long long strtindx = q.front().second;
            long long endindx  = q.back().second;

            maxwidth = max(maxwidth,(int)(endindx-strtindx+1));

            for(int i=0;i<size;i++)
            {
                auto curr = q.front();
                q.pop();

                if(curr.first->left != NULL) q.push({curr.first->left,2*curr.second+1});
                if(curr.first->right != NULL) q.push({curr.first->right,2*curr.second+2});


            }
        }

        return maxwidth;
    }


int main()
{
vector<int>preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
Node* root = BuiltTree(preorder);

cout<<"Width of the tree : "<<MaxWidth(root)<<endl;
return 0;
}