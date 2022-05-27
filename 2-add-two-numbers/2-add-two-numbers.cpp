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
//     ListNode * reverse(ListNode* head)
//     {
//         if(head==NULL || head->next== NULL)
//         {
//             return head;
//         }
//         ListNode* ans= reverse(head->next);
        
//         head->next->next= head;
//         head->next= NULL;
        
//         return ans;
//     }
     ListNode* reverse(ListNode* head)
    {
        if (head == NULL || head->next == NULL)
            return head;
 
        /* reverse the rest list and put
          the first element at the end */
        ListNode* rest = reverse(head->next);
        head->next->next = head;
 
        /* tricky step -- see the diagram */
        head->next = NULL;
 
        /* fix the head pointer */
        return rest;
    }
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
     // int sum= l1->val + l2-> val + 0;
     //    int putvalue= sum%10;
     //    int carry= sum/10;
        ListNode *temp= new ListNode();
        ListNode* tail= temp;
         int carry=0;
        
        while(l1!=NULL && l2!=NULL)
        {
            int sum=0;
            sum= l1->val + l2-> val + carry;
        int putvalue= sum%10;
       carry= sum/10;
        ListNode *t= new ListNode(putvalue);
            tail->next= t;
            tail= tail->next;
            l1=l1->next;
            l2= l2->next;
        }
        while(l1!=NULL)
        {
            int sum=0;
            sum= l1->val + carry;
        int putvalue= sum%10;
       carry= sum/10;
        ListNode *t= new ListNode(putvalue);
            tail->next= t;
            tail= tail->next;
            l1=l1->next;
        }
         while(l2!=NULL)
        {
            int sum=0;
            sum= l2-> val + carry;
        int putvalue= sum%10;
       carry= sum/10;
        ListNode *t= new ListNode(putvalue);
            tail->next= t;
            tail= tail->next;
            l2=l2->next;
        }
        if(carry){
             ListNode *t= new ListNode(1);
            tail->next= t;
        }
       return temp->next;
        
    
    }
};