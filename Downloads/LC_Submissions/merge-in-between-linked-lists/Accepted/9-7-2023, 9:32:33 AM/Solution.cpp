// https://leetcode.com/problems/merge-in-between-linked-lists

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
    ListNode* mergeInBetween(ListNode* head, int a, int b, ListNode* list2) {
        
       ListNode* temp=head;
          ListNode* temp2=head;
                  ListNode* temp3=list2;
     int i=1,j=1;
        while(i<a){
            temp=temp->next;
            i++;
        }
         while(j<b){
            temp2=temp2->next;
             j++;
        }
        
        temp2=temp2->next->next;
           while(temp3->next)temp3=temp3->next;
        temp->next=list2;
        temp3->next=temp2;
        
        return head;
    }
};