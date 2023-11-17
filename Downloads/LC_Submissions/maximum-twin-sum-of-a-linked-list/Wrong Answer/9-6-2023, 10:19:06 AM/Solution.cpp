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
        ListNode* newhead= reverse(head);
        int mxm=INT_MIN;
        while(head){
            int a= head->val+newhead->val;
            mxm=max(a,mxm);
            head=head->next;
            newhead=newhead->next;
        }
        return mxm;
    }
};