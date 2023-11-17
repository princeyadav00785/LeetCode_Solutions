// https://leetcode.com/problems/rotate-list

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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp = head;
        int n=0;
        while(temp){
            n++;
            temp=temp->next;
        }
        if(n==0||n==1||k==0)return head;
       k= k%n; 
        int x= n-k-1;
        temp = head;
        while(x--){
            temp=temp->next;
        }
        ListNode* nxt= temp->next;
        temp->next=NULL;
        temp=nxt;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next= head;
        return nxt;
    }
};