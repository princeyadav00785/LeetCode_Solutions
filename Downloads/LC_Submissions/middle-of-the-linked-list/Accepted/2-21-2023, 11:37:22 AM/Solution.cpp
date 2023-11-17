// https://leetcode.com/problems/middle-of-the-linked-list

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
    ListNode* middleNode(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast = head;
        if(slow ==NULL|| fast ==NULL){return NULL;}
//         1  2  3 4 5 6 NULL
//        sh 
//            s  f
//               s   f
//                 s     f
        while( fast!=NULL|| ( fast!=NULL&& fast->next!=NULL)){
            if(fast==NULL||fast->next ==NULL){
                return slow;
            }
            slow =slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};