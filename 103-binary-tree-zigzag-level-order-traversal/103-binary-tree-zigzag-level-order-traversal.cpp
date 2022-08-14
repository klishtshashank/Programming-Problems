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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        stack<TreeNode*> s1,s2;
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        s1.push(root);
        while(!s1.empty() || !s2.empty())
        {
            vector<int> ans1;
            while(!s1.empty())
            {
            
                TreeNode* top1= s1.top();
                s1.pop();
                if(top1->left) s2.push(top1->left);
                if(top1->right) s2.push(top1->right);
                ans1.push_back(top1->val);
                
            }
       if(!ans1.empty())     ans.push_back(ans1);
            vector<int> ans2;
            while(!s2.empty())
            {
                TreeNode* top2= s2.top();
                s2.pop();
                if(top2->right) s1.push(top2->right);
                if(top2->left) s1.push(top2->left);
                
                ans2.push_back(top2->val);
            }
            if(!ans2.empty())    ans.push_back(ans2);

        }
        return ans;
    }
};