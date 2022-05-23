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
//       if(head==NULL)
//           return NULL;
//         ListNode* small= removeElements(head-> next, val);
//         if(head->val== val)
//         {
//             ListNode* temp= head;
//             head= head-> next;
//             delete(temp);
//         }
//         else{
//             if(small!=NULL)
//             head-> next= small;
//             else if(small==NULL && head-> val== val)
//                 return NULL;
//         }
        
//         return head;
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL)
            return head;
        
        head->next= removeElements(head->next, val);
        
       return  (head->val==val)? head->next: head;
        

    }
};
  // ListNode* removeElements(ListNode* head, int T) {
  //       if(!head) return nullptr;
  //       head -> next = removeElements(head -> next, T);
  //       return head -> val == T ? head -> next : head;
  //   }