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
    int size(ListNode* head)
    {
        int c=0;
        ListNode* temp1= head;
        while(temp1!=NULL)
        {
            c++;
            temp1= temp1->next;
        }
        return c;
    }
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int x= size(head);
        if(x==1 && n==1)
            return NULL;
        if(x==n){
            head= head->next;
            return head;
        }
        ListNode* temp= head;
        int i=1;
        while(i<x-n)
        {
            temp= temp->next;
            i++;
        }
        
        temp->next= temp->next->next;
        return head;
    }
};