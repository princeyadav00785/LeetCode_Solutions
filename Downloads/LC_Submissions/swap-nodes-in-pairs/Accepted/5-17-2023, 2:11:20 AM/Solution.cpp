// https://leetcode.com/problems/swap-nodes-in-pairs

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
    ListNode* swapPairs(ListNode* head) {
      if(head==NULL||head->next==NULL){
            return head;
        }
        ListNode* temp = head;
        ListNode* temp1= head->next;
        ListNode* temp2 = temp1->next;
        temp1->next= temp;
        temp->next= swapPairs(temp2);
          return temp1;
        
        
        
//         if(head == NULL)
//             return NULL;
//         if(head->next == NULL)
//             return head;
        
//         ListNode* next = head->next;
//         head->next = swapPairs(next->next);
//         next->next = head;
        
//         return next;
        
        
        
        
    }
};