// https://leetcode.com/problems/add-two-numbers-ii

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
        ListNode* reverseList(ListNode* head) {        
        if(head==NULL||head->next==NULL){return head;}
        ListNode* prev=NULL;
        ListNode* temp= head;
       while(temp!=NULL){
           ListNode* nxt= temp->next;
           temp->next=prev;
           prev=temp;
           temp=nxt;
       }
        return prev;
        
       
    }
    ListNode* addTwoNumbers(ListNode* head1, ListNode* head2) {
   ListNode* l1 = reverseList(head1);
        ListNode* l2= reverseList(head2);
              ListNode* dummy = new ListNode(-1);
        ListNode* ans = dummy;
        int carry = 0, sum = 0;
        while (l1 || l2 || carry) {
            sum = carry;
            if (l1) {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2) {
                sum += l2->val;
                l2 = l2->next;
            }
            carry = sum / 10;
            dummy->next = new ListNode(sum % 10);
            dummy = dummy->next;
        }
        // return ans->next;  
        return reverseList(ans->next);
    }
};