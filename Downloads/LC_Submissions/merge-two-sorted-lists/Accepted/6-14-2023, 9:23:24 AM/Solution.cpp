// https://leetcode.com/problems/merge-two-sorted-lists

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == NULL)
            return list2;
        if (list2 == NULL)
            return list1;

        ListNode* temp = new ListNode(-1);
        ListNode* dummy = temp;

        while (list1 || list2) {
            if (list2 && (!list1 || list2->val < list1->val)) {
                temp->next = list2;
                list2 = list2->next;
            } else {
                temp->next = list1;
                list1 = list1->next;
            }
            temp = temp->next;
        }

        return dummy->next;
    }
};
