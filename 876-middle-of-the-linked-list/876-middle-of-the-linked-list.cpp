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
    int length(ListNode* head)
    {
        ListNode* temp= head;
        int cnt=0;
        while(temp!=NULL)
        {
            cnt++;
        temp=temp->next;
    }
        return cnt;
    }
public:
    ListNode* middleNode(ListNode* head) {
        int x= length(head);
        int c=0;
        ListNode* t= head;
        while(c<x/2)
        {
            t= t->next;
            ++c;
        }
        return t;
    }
};