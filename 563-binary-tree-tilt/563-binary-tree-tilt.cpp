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
    int sum(TreeNode * root)
    {
        if(root==NULL) return 0;
        
        int l= sum(root->left);
        int r= sum(root->right);
        
        return root->val + l+ r;
        
    }
    int findTilt(TreeNode* root) {
         if(root==NULL)return 0;
        
        int x= sum(root->left);
        int y= sum(root->right);
        
        int ab= abs(x-y);
        
        return findTilt(root->left) + findTilt(root->right) + ab;
        
    }
};