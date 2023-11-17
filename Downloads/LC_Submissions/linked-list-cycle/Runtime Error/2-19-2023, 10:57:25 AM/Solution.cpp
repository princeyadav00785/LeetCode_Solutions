// https://leetcode.com/problems/linked-list-cycle

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
    bool hasCycle(ListNode *head) {
       
         if(head==NULL){
             return false;}
        ListNode* slow = head;
         ListNode* fast = head;

          while(fast!=NULL||fast->next!=NULL||slow!=NULL){
              if(fast==NULL||fast->next==NULL){
                  return false;
              }
               slow =slow->next;
              fast=fast->next->next;
              
              if(slow==fast){
                     cout<<"hhhhh";
                  return true;
               
              }
             
             
          }
           return true;
    }
};