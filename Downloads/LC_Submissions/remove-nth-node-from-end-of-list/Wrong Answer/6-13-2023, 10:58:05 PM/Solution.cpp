// https://leetcode.com/problems/remove-nth-node-from-end-of-list

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
     if(head==NULL)return head;
        if(head->next==NULL&&n==1)return NULL;
         if(head->next==NULL&&n==0)return head;
        
        int cnt=0;
        ListNode* temp=head;
         ListNode* temp2=head;
        while(temp!=NULL){
            temp=temp->next;
            cnt++;
        }
        cout<<cnt<<" "<<cnt-n;
        int k= cnt-n;
        while(k>1){
            temp2=temp2->next;k--;
        }
        temp2->next=temp2->next->next;
        return head;
    }
};