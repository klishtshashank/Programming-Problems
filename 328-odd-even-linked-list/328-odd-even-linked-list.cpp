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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        
        ListNode* odd= head;
        ListNode* second= head->next;
        ListNode* even= second;
        
        
        int i=3;
        while(odd->next && even->next)
        {
            if(i%2) odd->next= odd->next->next;
            i++;
            odd= odd->next;
            
            if(i%2==0)  even->next= even->next->next;
            i++;
            even= even->next;
        }
        odd->next= second;
        
        return head;
    }
};