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
    void help(TreeNode* root, int s, int & sum)
    {
        if(root==NULL) return;
        if(root->left== NULL && root->right==NULL)
        {
            s= 10*s+ root->val;
            sum+=s;
            s=0;          
        }
         help(root->left,10*s + root->val , sum);
          help(root->right,10*s + root->val , sum);

    }
    int sumNumbers(TreeNode* root) {
        int s=0, sum=0;
         help(root, 0, sum);
        return sum;
    }
//      temp = 10* temp + root->val;
//         sum+=temp;
//         temp=0;
//       }
      
//       temp = 10* temp + root->val;
      
//       solve(root->left,sum,temp);
//       solve(root->right,sum,temp);
      
//       return;
};