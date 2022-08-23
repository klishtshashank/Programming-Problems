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
class Solution {
public:
    ListNode* reverse(ListNode* root)
    {
        if(root ==NULL || root->next==NULL)
            return root;
        
        ListNode*  small= reverse(root->next);
        
        root->next->next= root;
        root->next= NULL;
        
        return small;
    }
    int pairSum(ListNode* head) {
        ListNode* slow= head;
        ListNode* fast= head;
                ListNode* prev= slow;

        while(fast && fast->next)
        {
            prev= slow;
            slow= slow->next;
            fast= fast->next->next;
        }
        prev->next=NULL;
        ListNode* r= slow;
        ListNode* another= reverse(r);
        int maxi=0;
        while(another!=NULL)
        {
            int x= another->val + head->val;
            maxi= max(maxi, x);
            another= another->next;
            head= head->next;
        }
        return maxi;
    }
};