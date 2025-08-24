class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>>ans;
        if(root == nullptr) return ans;

        queue<TreeNode*>q;

        q.push(root);
        while(!q.empty())
        {
            vector<int>smallans;
            int size = q.size();
            for(int i=0;i<size;i++)
            {
                   TreeNode* curr = q.front();

                    q.pop();
                    smallans.push_back(curr->val);
                    if(curr->left != nullptr) q.push(curr->left);
                    if(curr->right != nullptr) q.push(curr->right);
            }
            
             ans.push_back(smallans);
        }

        return ans;
    }
};