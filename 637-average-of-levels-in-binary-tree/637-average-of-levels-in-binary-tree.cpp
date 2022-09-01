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
     vector<double> levelOrderBottom(TreeNode* root) {
        if(root==NULL)return {};
       // if(!root->left && !root->right ) return {root->val};
        vector<double>ans;
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty())
        {
            double sz= q.size();
            double k= sz;
         //   vector<int>p;
            double sum=0;
            while(sz--)
            {
                TreeNode* front= q.front();
                q.pop();
           // p.push_back(front->val);
                sum+= front->val;
                if(front->left) q.push(front->left);
                if(front->right) q.push(front->right);
            }
            double  p= sum/k;
            ans.push_back(p);            
        }
        
        
    //    reverse(ans.begin(), ans.end());
        return ans;
    }
public:
    vector<double> averageOfLevels(TreeNode* root) {
        return levelOrderBottom(root);
    }
};