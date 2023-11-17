// https://leetcode.com/problems/swapping-nodes-in-a-linked-list

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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp=head;
         ListNode* temp2=head;
         ListNode* temp3=head;
        int cnt=1;
        
        while(temp->next!=NULL){cnt++; temp=temp->next;}
        if(k>cnt)return head;
        for(int i=1 ;i<k;i++){
            temp2=temp2->next;
        }
        for(int i=1;i<=cnt-k;i++){
            temp3=temp3->next;
        }
        int a= temp2->val;
        temp2->val= temp3->val;
        temp3->val=a;
        
        
        
        return head;
    }
};