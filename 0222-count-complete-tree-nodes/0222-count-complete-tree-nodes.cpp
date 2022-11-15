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
    int countNodes(TreeNode* root) {
        if(root==NULL) return 0;
        
        queue<TreeNode*> q;
        q.push(root);
        int ans=1;

        while(!q.empty())
        {
            int sz= q.size();
            TreeNode* front= q.front();
            q.pop();
            if(front->left)
            {
                q.push(front->left);
                ans++;
            }
            if(front->right)
            {
                q.push(front->right);
                ans++;
            }
            
        }
        return ans;
        
    }
};