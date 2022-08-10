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
 /*  int len(ListNode* head)
   {
       ListNode * q= head;
       int count=0;
       while(q!=NULL)
       {
           count++;
           q= q->next;
       }
       return count;
   }
   */
    /*
    TreeNode* sortedListToBST(ListNode* head) {
        if(head==NULL) return NULL;
      ListNode* temp= head;
        int n= len(head);
       
        int mid= (n+1)/2;
        while(mid-2>0)
        {
            temp=temp->next;
            mid--;
        }
        ListNode* root= temp->next;
    //    cout<< root->val<<endl;
        temp->next=NULL;
        int x;
    
        if(root) {
            x= root->val;
            cout<<x;
        }
        
         TreeNode* ans= new TreeNode(x);
        
        ans->left= sortedListToBST(head);
    //    ans->right= sortedListToBST(root->next);
        return ans;
       // return NULL;
    }
    */
public:
    
    int length(ListNode* head) {
        if(head == NULL) return 0;
        return length(head->next) + 1;
    }
    
    TreeNode* sortedListToBST(ListNode* head) {
       
        if(head == NULL) return NULL;
        if(head->next == NULL) {
            TreeNode * root = new TreeNode(head->val);
            return root;
        }
        int n = length(head);
        int mid = (n+1)/2;
        ListNode* temp = head;
        int ind = 1;
        while(ind < mid-1){
            ind ++;
            temp = temp->next;
        }
        
        TreeNode * root = new TreeNode(temp->next->val);
        
        root->right = sortedListToBST(temp->next->next);
        temp->next = NULL;
        root->left = sortedListToBST(head);
        
        return root;
        
    }
};