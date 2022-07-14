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
    // private:
    // ListNode* merge(ListNode* small, ListNode* large)
    // {
//         ListNode* head= small;
//         ListNode* temp= small;
//         small= small->next;
        
//         while(small!=NULL && large!=NULL)
//         {
            
//             if(small->val<large->val)
//             {
//                 temp->next= small;
//                 temp= temp->next;
//                 small= small->next;
//             }
//             else if(small->val> large->val)
//             {
//                 temp->next=large;
//                                   temp= temp->next;
              

//                 large= large->next;
//             }
//             else{
//                 temp->next= small;
//                                 temp= temp->next;

//                 temp->next=large;
//                                 temp= temp->next;

//                 small= small->next;
//                 large= large->next;
//             }
//         }
        
//         while(small!=NULL)
//         {
//             temp->next= small;
//                             temp= temp->next;

//             small= small->next;
//         }
//         while(large!=NULL)
//         {
//             temp->next= large;
//                             temp= temp->next;

//             large= large->next;
//         }
//         return head;
//     }
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//         if(list1->val> list2->val)
//         {
//             return merge(list2,list1);
            
//         }
//         else
//             return merge(list1, list2);
         ListNode* newnode= NULL;
        if(list1==NULL)
            return list2;
        else if(list2==NULL)
            return list1;
        if(list1->val <= list2-> val)
        {
            newnode= list1;
            newnode-> next= mergeTwoLists(list1->next, list2);
        }
          else
        {
            newnode= list2;
            newnode-> next= mergeTwoLists(list1, list2-> next);
        }
        return newnode;
    }
};