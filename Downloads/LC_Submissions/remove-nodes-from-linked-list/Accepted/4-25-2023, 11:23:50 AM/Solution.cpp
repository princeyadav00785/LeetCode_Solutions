// https://leetcode.com/problems/remove-nodes-from-linked-list

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
    ListNode* reverse (ListNode* head){
        ListNode* curr = head;
        ListNode* prev= NULL;
        ListNode* Next = NULL;
        while(curr!=NULL){
           Next = curr->next;
            curr->next = prev;
            prev=curr;
            curr= Next;
            
           
        }
        return prev;
    }
    
    ListNode* removeNodes(ListNode* head) {
//       ListNode* temp= reverse(head);
//         ListNode* temp2 = temp;
// ListNode* Next =temp->next;
// while(Next!=NULL){
   
//     if(Next->val>temp2->val){
//         temp2->next=Next;
//         temp=Next;
//     } Next=Next->next; 
// }
//         return temp2;
        
        
           ListNode* tmp=head;
        ListNode* node = new ListNode(0);
        ListNode* ans=node;
        
        tmp=reverse(tmp);
        int mx=tmp->val;
        while(tmp)
        {
           mx=max(mx,tmp->val);
            
            if(tmp->val>=mx)
            {
               ListNode* n=new ListNode(tmp->val);
               node->next=n;
                node=node->next;
            }
            tmp=tmp->next;
        }

       tmp=reverse(ans->next);
        return tmp;
    
   }
};