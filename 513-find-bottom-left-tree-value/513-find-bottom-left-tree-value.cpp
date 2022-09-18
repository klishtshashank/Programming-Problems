/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int findBottomLeftValue(TreeNode* root){
    
        queue<TreeNode* > q;
        q.push(root);
        int ans=root->val;
        while(!q.empty())
        {
                int sz= q.size();
            int i=0;
            for(int i=0;i<sz;i++)
            {
                if(i==0) ans= q.front()->val;
                TreeNode* front= q.front();
                q.pop();
                if(front->left) q.push(front->left);
                if(front->right) q.push(front->right);
            }
        }
        
        return ans;
    }
};