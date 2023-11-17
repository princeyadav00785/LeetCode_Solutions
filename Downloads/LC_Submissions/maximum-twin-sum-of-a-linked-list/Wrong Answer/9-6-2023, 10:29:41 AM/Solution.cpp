// https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list

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
    ListNode* reverse(ListNode* head){
        ListNode* prev=NULL;
        ListNode* curr = head;
        while(curr){
            ListNode* nxt = curr->next;
            curr->next=prev;
            prev=curr;
            curr= nxt;
            
        }
        return prev;
    }
  int pairSum(ListNode* head) {
    ListNode* newhead = reverse(head);
    int mxm = INT_MIN;
    ListNode* curr1 = head;
    ListNode* curr2 = newhead;
    
    while (curr1) {
        int a = curr1->val + curr2->val;
        mxm = max(a, mxm);
        curr1 = curr1->next;
        curr2 = curr2->next;
    }
    
    // You can optionally reverse the list back to its original state if needed.
    // reverse(newhead);
    
    return mxm;
}

};