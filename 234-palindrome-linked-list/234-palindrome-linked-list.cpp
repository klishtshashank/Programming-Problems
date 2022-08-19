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
//     ListNode* reverse(ListNode* head)
//     {
//         if(head==NULL ||head->next==NULL)
//             return head;
        
//         ListNode * small= reverse(head->next);
        
//         head->next->next= head;
//         head->next=NULL;
        
//         return small;
//     }
    bool isPalindrome(ListNode* head) {
    //    ListNode* temp= head;
//         ListNode* rev= reverse(head);
//         while(head!=NULL)
//         {
//             if(rev->val == head->val)
//                 continue;
            
//             else
//              return false;

//             head= head->next;
//             rev= rev->next;
//         }
//         return true;
        
        stack<ListNode*> s;
        ListNode* temp= head;
        while(temp)
        {
            s.push(temp);
            temp= temp->next;
        }
        //ListNode* top= s.top();
        while(!s.empty())
        {
            if(s.top()->val!= head->val)
                return false;
            
            s.pop();
            head= head->next;
        }
        return true;
    }
};