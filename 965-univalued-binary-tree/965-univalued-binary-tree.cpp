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
    bool help(TreeNode* root, int x)
    {
        if(root==NULL) return true;
        bool z= true;
        if(root->val!= x)
          z=false;
        
        bool q= help(root->left,x);
        bool e= help(root->right, x);
        
        return z&& q&&e;
    }
    bool isUnivalTree(TreeNode* root) {
        if(root==NULL) return true;
        
        int x= root->val;
        return help(root, x);
    }
};