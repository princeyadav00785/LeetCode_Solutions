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
//         ListNode* a=head;
//         ListNode* b= head;
//      if(head == NULL)
// 		return false;
//         while(b!=NULL&&b->next!=NULL){
//              a=a->next;
//             b=b->next->next;
          
//             if(a==b){
//                 return true;
//             }
          
//         }
//         return false;
                ListNode* slow=head;
        ListNode*  fast= head;
        while(fast&&fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)return true;
        }
	return false;
    }
};