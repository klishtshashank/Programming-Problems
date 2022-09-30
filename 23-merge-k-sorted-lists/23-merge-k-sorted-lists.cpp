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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0) return NULL;
        
        priority_queue<int, vector<int>, greater<int>>pq;
        
        for(int i=0;i<lists.size();i++)
        {
            ListNode* t= lists[i];
            while(t)
            {
                pq.push(t->val);
                t= t->next;
            }
        }
        ListNode* dummy= new ListNode(0);
        ListNode* h=dummy;
        while(!pq.empty())
        {
            int top= pq.top();
            pq.pop();
            ListNode* temp= new ListNode(top);
            h->next= temp;
            h= h->next;
        }
        return dummy->next;
    }
};