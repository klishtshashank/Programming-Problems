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
    /*
//     void help(TreeNode* root, int sum,vector<vector<int>>& ans, vector<int> &temp )
//     {
//         if(root ==NULL)return;
        
//         if( root->left==NULL && root->right==NULL))
//         { 
//             temp.push_back(root->val);
//             ans.push_back(temp);
         
//         }
//       if(root)  temp.push_back(root->val);
//        help(root->left, sum- root->val, ans, temp);        
//        help(root->right, sum- root->val, ans, temp);
        
//        temp.pop_back();
        
//     }
*/
    void help(TreeNode* root, int targetSum, vector<vector<int>> & ans, vector<int> temp, int sum)
    {
        if(root==NULL) return;
     //   if(sum>targetSum) return;
        if(sum + root->val==targetSum  && root->left==NULL && root->right==NULL)
        {
            temp.push_back(root->val);
            ans.push_back(temp);
            temp.clear();
            return;
        }
         temp.push_back(root->val);
    if(root->left)    help(root->left, targetSum, ans, temp, sum+root->val);
       
    if(root->right)    help(root->right, targetSum, ans, temp, sum+root->val);
       temp.pop_back();
        
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> temp;
        help(root, targetSum, ans, temp, 0);
        return ans;
    }
};