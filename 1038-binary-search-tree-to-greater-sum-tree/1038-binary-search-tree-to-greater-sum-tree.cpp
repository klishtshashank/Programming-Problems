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
    int ans=0;
    int sum=0;
    TreeNode* bstToGst(TreeNode* root) {
        
//         if(!root)return 0;
//         bstToGst(root->right); // rightmost root tk pahucnge
//         sum+=root->val;
//         root->val = sum; // right se top pr chd rhe h apan
//         bstToGst(root->left); // left ki aur chl rhe h
//         return root;
        if(root==NULL)
            return 0;
      
        bstToGst(root->right);
        
        ans= ans+ root->val;
        
        root->val= ans;
        
        bstToGst(root->left);
        
        
        return root;
    }
};