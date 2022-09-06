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
    void fill(TreeNode* root,unordered_map<int, int>&map)
    {
        if(root==NULL) return;
        
        map[root->val]++;
        fill(root->left, map);
        fill(root->right, map);
    }
 
    vector<int> findMode(TreeNode* root) {
        unordered_map<int, int>map;
        fill(root, map);
        int maxi=INT_MIN;
        for(auto i:map)
        {
            maxi= max(maxi, i.second);
 //           cout<<i.first<<" " << i.second<<endl;
        }
        //cout<<maxi;
        vector<int> ans;
        for(auto x:map)
        {
            if(x.second==maxi)
            {
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};