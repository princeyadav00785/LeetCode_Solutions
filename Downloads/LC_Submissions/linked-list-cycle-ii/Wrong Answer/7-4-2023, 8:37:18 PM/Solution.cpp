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
         if(slow != fast) return NULL;
          slow=head;
      while(fast!=NULL&&fast->next!=NULL){
          slow=slow->next;
          fast=fast->next;
          if(slow==fast)return slow;
      }
          return NULL;
        
    //      ListNode *slow = head, *fast = head;   
    // while(fast && fast->next) {
    //     slow = slow->next;
    //     fast = fast->next->next;
    //     if(slow == fast) break;
    // }
    // if(slow != fast) return NULL;
    // fast = head;
    // while(fast && fast->next) {
    //     if(slow == fast) return slow;
    //     slow = slow->next;
    //     fast = fast->next;
    // }
    // return NULL;
       
    }
};