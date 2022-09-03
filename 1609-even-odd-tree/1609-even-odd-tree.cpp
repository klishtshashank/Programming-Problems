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
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode* > q;
        q.push(root);
        bool t=false;
        
        while(!q.empty())
        {
            int sz= q.size();
            if(!t)
            {
                int k= INT_MIN;
             //   q.pop();
                for(int i=0;i<sz;i++)
                {
                    TreeNode* front= q.front();
                    q.pop();
                    if(front->left) q.push(front->left);
                    if(front->right)q.push(front->right);
                    if(front->val> k && front->val %2 ==1)
                        k= front->val;
                    else
                        return false;
                }
            }
            else{
                int k= INT_MAX;
                for(int i=0;i<sz;i++)
                {
                    TreeNode* front= q.front();
                    q.pop();
                      if(front->left) q.push(front->left);
                    if(front->right)q.push(front->right);
                    if(front->val< k && front->val %2 ==0)
                        {
                    k=front->val;
                    }
                    else
                        return false;
                }
            }
            t= !t;
            
            
        }
        return true;
    }
};