// https://leetcode.com/problems/merge-two-sorted-lists

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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL){
            return list2;
        }
         if(list2==NULL){
            return list1;
        }
        ListNode* temp = list1;
        
        if(list2->val<list1->val){
            temp=list2;
            list2=list2->next;
        }else list1=list1->next;
        ListNode* ans = temp;


// while(list1 &&  list2)
//         {
//             if(list1 -> val < list2 -> val){
//                 temp->next = list1;
//                 list1 = list1 -> next;
//             }
//             else{
//                 temp->next = list2;
//                 list2 = list2 -> next;
//             }
//             curr = curr -> next;
                
//         }

        while(list1 &&  list2){
           if(list2->val<list1->val){
            temp->next=list2;
            list2=list2->next;
        } else {
            temp->next=list1;
            list1=list1->next;
        } 
        temp=temp->next;
        }
        // if(list1!=NULL){
        //     while(list1->next!=NULL){
        //        temp->next=list1;
        //     list1=list1->next;
        //     }
        // }
        //  if(list2!=NULL){
        //     while(list2->next!=NULL){
        //        temp->next=list2;
        //     list2=list2->next;
        //     }
        // }
        if(!list1)
            temp -> next = list2;
        else
            temp -> next = list1;

        return ans;

    }
};