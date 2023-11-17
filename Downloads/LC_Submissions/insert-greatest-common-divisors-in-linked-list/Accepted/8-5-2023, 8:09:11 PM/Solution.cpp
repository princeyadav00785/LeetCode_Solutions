// https://leetcode.com/problems/insert-greatest-common-divisors-in-linked-list

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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head==NULL||head->next==NULL)return head;
        ListNode* dummy=head;
        ListNode* temp=head;
        ListNode* temp2=head->next;
        while(temp2){
            int a=temp->val;
            int b= temp2->val;
            int c= __gcd(a,b);
            ListNode* node = new ListNode(c);
            temp->next=node;
            node->next=temp2;
            temp2=temp2->next;
            temp=temp->next->next;
        }
        return dummy;
    }
};