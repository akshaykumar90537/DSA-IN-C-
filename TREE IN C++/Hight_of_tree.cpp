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


    int Hight(Node* root)
    {
        if(root == NULL) return 0;
        int left = Hight(root->left);
        int right = Hight(root->right);
        return max(left,right)+1;
    }


int main()
{
vector<int>preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
Node* root = BuiltTree(preorder);

cout<<"Hight of the tree : "<<Hight(root)<<endl;
return 0;
}