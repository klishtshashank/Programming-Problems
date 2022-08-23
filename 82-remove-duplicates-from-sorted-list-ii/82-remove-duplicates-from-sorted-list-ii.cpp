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
//     ListNode* remove(ListNode* root)
//     {
//         if(root==NULL || root->next==NULL) return root;
        
//         if(root->val== root->next->val)
//         {
//             root->next= remove(root->next->next);
//         }
//         return root->next= remove(root->next);
//     }
    ListNode* deleteDuplicates(ListNode* head) {
     // return   remove(head);
        ListNode* dummy= new  ListNode(0);
        dummy->next= head;
        ListNode* prev= dummy;
        
        while(head)
        {
            if(head->next!=NULL && head->val==head->next->val)
            {
                while(head->next && head->val==head->next->val)
                    head= head->next;
                
                prev->next= head->next;
            }
            else
                prev= prev->next;
            
            head= head->next;
        }
        return dummy->next;
    }
};