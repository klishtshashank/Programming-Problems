/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* helper(vector<int> &nums, int i, int j)
    {
        if(i>j)
        {
            return NULL;
        }
        
        int mid= (i+j)/2;
        TreeNode* root= new TreeNode(nums[mid]);
        
        root->left= helper(nums, i, mid-1);
        root->right= helper(nums, mid+1, j);
        
        return root;
        
    }
    // TreeNode* sortedArrayToBST(vector<int>& nums) {
    //     int n= nums.size();
    //         return helper(nums, 0, n-1);
    // }
public:
    TreeNode* sortedListToBST(ListNode* head) {
        ListNode* temp= head;
        vector<int> ans;
        while(temp!=NULL)
        {
            ans.push_back(temp->val);
            temp= temp->next;
        }
        int n= ans.size();
        return helper( ans, 0, n-1);
    }
};