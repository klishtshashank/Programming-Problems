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
    private:
    void helper(TreeNode* root, vector<int>&temp)
    {
        if(root==NULL)
            return;
        
        if(root->left==NULL && root->right==NULL)
        {
            temp.push_back(root->val);
        }
        
        helper(root->left, temp);
        helper(root->right, temp);
    }
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> temp1;
                vector<int> temp2;
        
        helper(root1, temp1);
        //sort(temp1.begin(), temp1.end());
        helper(root2, temp2);
           //     sort(temp2.begin(), temp2.end());

        return temp1==temp2;

    }
};