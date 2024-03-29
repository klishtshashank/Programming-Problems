/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
/*       if(root==NULL) return NULL;
        
        if(root->val ==p->val || root->val== q->val) return root;
        
        TreeNode* left= lowestCommonAncestor(root->left, p,q);
        TreeNode* right = lowestCommonAncestor(root->right, p,q);
        
        if(left==NULL && right==NULL)
        {
            return NULL;
        }
        else if(left==NULL && right!= NULL)
        {
            return right;
        }
        else if(left!=NULL && right==NULL)
            return left;
        else
            return root;
  */      
         if(root==NULL) return NULL;
        
        if(root->val ==p->val || root->val== q->val){
            return root;
        }
      else  if(p->val > root->val && q->val> root->val)
        {
            return lowestCommonAncestor(root->right, p,q);
        }
        else if(p->val< root->val && q->val < root->val)
        {
       return lowestCommonAncestor(root->left, p,q);
        }
        return root;
    }
};