// https://leetcode.com/problems/linked-list-cycle-ii

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {

        ListNode* slow=head;
        ListNode* fast= head;
   
          while(fast!=NULL&&fast->next!=NULL){
              slow=slow->next;
              fast= fast->next->next;
              if(slow==fast)break;
          }
          slow=head;
      while(fast!=NULL&&fast->next!=NULL){
          slow=slow->next;
          fast=fast->next;
          if(slow==fast)return slow;
      }
          return NULL;
       
    }
};