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
   // int ans=0;
    private:
    int help(TreeNode* root, int maxi=-1e9)
    {
        if(root==NULL) return 0;
        int sum=0;
        
        if(root->val >= maxi)
        {
            sum++;
            maxi= root->val;            
        }
        
        sum+= help(root->left, maxi);
        sum+= help(root->right, maxi);
        
        return sum;
        
    }
public:
    int goodNodes(TreeNode* root) {
//        int ans=0;
    return           help(root, root->val);
    }
};