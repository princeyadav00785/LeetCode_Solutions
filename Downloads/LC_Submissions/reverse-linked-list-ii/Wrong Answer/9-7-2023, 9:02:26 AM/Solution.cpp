// https://leetcode.com/problems/reverse-linked-list-ii

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
    ListNode* reverse(ListNode* head,int n){
        if(head==NULL|| head->next==NULL)return head;
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
    
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode *dummy = new ListNode(0);
        ListNode *d = new ListNode(0);
        int l=left-1;
        d->next=head;
        while(l--){
            d=d->next;
            
        }
       
        ListNode* a=d->next;
        dummy=head;
        int j=0;
        while(j<right){
            dummy=dummy->next;
            j++;
        }
       
        ListNode* nxt=dummy;
        
     // cout<<dummy->val<<" "<<a->val<<" "<<d->val;
        ListNode* x=reverse(a,right-left+1);
        cout<<x->val;
        d->next=x;
            // reverse(a,right-left+1);
         a->next=nxt;
        return head;
       
        }
            
    
};