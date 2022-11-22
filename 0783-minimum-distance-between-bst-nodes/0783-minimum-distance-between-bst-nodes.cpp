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
    void solve(TreeNode* root, vector<int>&ans)
    {
        if(root==NULL) return;
        solve(root->left,ans);
        ans.push_back(root->val);
        solve(root->right, ans);
    }
public:
    int minDiffInBST(TreeNode* root) {
        vector<int>ans;
        solve(root, ans);
        sort(ans.begin(), ans.end());
        vector<int>res;
        for(int i=1;i<ans.size();i++) res.push_back(ans[i]-ans[i-1]);
                sort(res.begin(), res.end());

        return res[0];
    }
};