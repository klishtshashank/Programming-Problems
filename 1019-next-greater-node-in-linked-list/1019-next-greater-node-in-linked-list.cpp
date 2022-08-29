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
    ListNode* reverse(ListNode* head) {
      //  return reverse(head);
         if(head==NULL ||head->next==NULL)
            return head;
        
        ListNode * small= reverse(head->next);
        
        head->next->next= head;
        head->next=NULL;
        
        return small;
    }
    vector<int> nextLargerNodes(ListNode* head) {
    //  ListNode* root= reverse(head);
       vector<int> result;
        stack<int> st;
        head=reverse(head);
        while(head){                                            // traversing the LL from backwards(as we reversed the LL)
            if(st.empty()){                                     
                result.push_back(0);
                st.push(head->val);
                head=head->next;
            }
            else if(st.top()>head->val){
                result.push_back(st.top());
                st.push(head->val);
                head=head->next;    
            }
            else     st.pop();
        }
     // reversing the result vector for getting the resultant output (as we had reversed the LL then found out the greater node to it)
       // reverse(result.begin(),result.end());                  
  //      return result;
      int l=0, e= result.size()-1;
        while(l<=e)
        {
            swap(result[l++], result[e--]);
        }
        return result;
    }
};