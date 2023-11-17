// https://leetcode.com/problems/reverse-linked-list

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
//         if(head==NULL||head->next==NULL){return head;}
//         ListNode* prev=NULL;
//         ListNode* temp= head;
//        while(temp!=NULL){
//            ListNode* nxt= temp->next;
//            temp->next=prev;
//            prev=temp;
//            temp=nxt;
//        }
//         return prev;
        if(head==NULL|| head->next==NULL)return head;
        int n=INT_MAX;
        if(n==1||n==0)return head;
        ListNode* prev= NULL;
        ListNode* curr = head;
        int i=0;
        while(curr&&i<n)
        {
            ListNode* nxt = curr->next;
            curr->next=prev;
            prev=curr;
            curr= nxt;
            i++;
        }
        return prev;
       
    }
};