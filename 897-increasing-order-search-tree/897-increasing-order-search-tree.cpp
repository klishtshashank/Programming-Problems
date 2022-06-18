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
   //  TreeNode* q;
    void  convert(TreeNode* root, vector<int> & temp)
    {
        if(root==NULL)
        {
            return;
        }
        convert(root->left, temp);
        temp.push_back(root->val);
        convert(root->right, temp);
        }
    
     TreeNode* res(vector<int> temp)
     {
         TreeNode* head= new TreeNode(temp[0]);
         TreeNode* y= head;
         
        int n= temp.size();
         int i=1;
         while(i<n)
         {
             TreeNode* z= new TreeNode(temp[i]);
             y->right= z;
             y=z;
             i++;
         }
        return head; 
     }
    TreeNode* increasingBST(TreeNode* root) {
      
        vector<int> temp;
        convert(root, temp);
    TreeNode* ans= res(temp);
        return ans;
    }
};