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
    /*
    ListNode* reverse(ListNode* root)
    {
        if(root==NULL || root->next==NULL)
            return root;
        
        ListNode* small= reverse(root>next);
        
        root->next->next= root;
        root->next= NULL;
        
        return small;
        
    }
    int length(ListNode* root)
    {
        ListNode* temp=root;
        int i=0;
        while(temp)
        {
            i++;
            temp= temp->next;
        }
        return i;
    }
    */
    ListNode* reverseKGroup(ListNode* head, int k) {
//         int n= length(head);
//         ListNode* newTemp= head;
//         if(k>=n)
//             return head;
        
//         int z=0;
//         while(z<=n &&)
//         {
            
//         }
         ListNode* cursor = head;
        for(int i = 0; i < k; i++){
            if(cursor == nullptr) return head;
            cursor = cursor->next;
        }
        ListNode* curr = head;
        ListNode* prev = nullptr;
        ListNode* nxt = nullptr;
        for(int i = 0; i < k; i++){
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        head->next = reverseKGroup(curr, k);
        return prev;
    }
};