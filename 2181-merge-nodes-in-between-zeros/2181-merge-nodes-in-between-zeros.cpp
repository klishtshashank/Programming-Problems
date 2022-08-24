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
    ListNode* mergeNodes(ListNode* head) {
        
        ListNode* temp= head;
        ListNode* ans= new ListNode(0);
        ListNode* mans= ans;
        temp= temp->next;
        while(temp)
        {
            int sum=0;
            while(temp->val!=0)
            {
                sum+= temp->val;
                temp=temp->next;
            }
            ListNode* x= new ListNode(sum);
            mans->next= x;
            mans= mans->next;
            temp= temp->next;
            
        }
        return ans->next;
    }
};