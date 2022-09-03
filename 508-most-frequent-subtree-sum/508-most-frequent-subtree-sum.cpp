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
    int help(TreeNode* root, unordered_map<int, int> &map, int &f )
    {
        if(root==NULL) return 0;
        
        int left= help(root->left, map, f);
        int right= help(root->right, map, f);
        
        int sum= root->val+ left+ right;
        
        map[sum]++;
        
        if(map[sum]>f) f= map[sum];
        
        return sum;
        
    }
    vector<int> findFrequentTreeSum(TreeNode* root) {
        unordered_map<int , int> map;
        int f=0;
       int z= help(root,map, f);
        
        vector<int> ans;
        for(auto i:map)
        {
            if(i.second==f) ans.push_back(i.first);
        }
        return ans;
    }
};