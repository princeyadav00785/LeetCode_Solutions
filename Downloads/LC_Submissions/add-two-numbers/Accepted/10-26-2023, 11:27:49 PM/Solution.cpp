// https://leetcode.com/problems/add-two-numbers

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy= new ListNode(-1);
        ListNode* ans=dummy;
        int carry=0;
        ListNode*temp1=l1;
        ListNode*temp2=l2;
        while(temp1||temp2||carry){
            int sum= (temp1?temp1->val:0)+(temp2?temp2->val:0)+carry;
            carry=sum/10;
        sum=sum%10;
            ListNode* Node= new ListNode(sum);
            dummy->next=Node;
            dummy=Node;
            if(temp1)
            temp1=temp1->next;
            if(temp2)
            temp2=temp2->next;
     
        }
        if(temp1){
                
            dummy->next=temp1;
        }
        if(temp2)dummy->next=temp2;
        return ans->next;
    }
};