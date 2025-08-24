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

    static int ans = 0; 
    int Diameter(Node* root)
    {
        if(root == NULL) return 0;

        int left = Diameter(root->left);
        int right = Diameter(root->right);

        ans = max(ans, left + right);
        return max(left,right)+1;
    }


int main()
{
vector<int>preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
Node* root = BuiltTree(preorder);

cout<<"diameter of the tree : "<<ans<<endl;
return 0;
}