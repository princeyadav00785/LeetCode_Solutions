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
   ListNode* reverse(ListNode* l1){
       ListNode* temp=l1;
       ListNode* prev= NULL;
       while(temp){
           ListNode* nxt = temp->next;
           temp->next=prev;
           prev=temp;
           temp=nxt;
       }
       return prev;
   }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* a= reverse(l1);
        ListNode* b= reverse(l2);
        ListNode* ans= new ListNode(-1);
        int cnt=0;
        ListNode* dummy=ans;
        while(a||b||cnt){
            int sum =0;
            sum+= (a?a->val:0)+(b?b->val:0)+cnt;
              cnt=sum/10;
            sum=sum%10;
            ListNode* temp=new ListNode(sum);
            ans->next=temp;
            ans=temp;
            if(a)
            a=a->next;
            if(b)
            b=b->next;
        }
      
        return reverse(dummy->next);
    }
};