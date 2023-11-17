// https://leetcode.com/problems/merge-two-sorted-lists

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
      if(!list1)return list2;
        if(!list2)return list1;
        ListNode* temp = new ListNode(-1);
        ListNode* dummy = temp;
        while(list1&&list2){
            if(list1->val>list2->val){
                temp->next= list2;
                temp = temp->next;
                list2=list2->next;
            }else{
                 temp->next= list1;
                temp = temp->next;
                list1=list1->next;
            }
        }
        
        if(list1){
           temp->next = list1; 
        }
        if(list2){
            temp->next=list2;
        }
        return dummy->next;
    }
};
