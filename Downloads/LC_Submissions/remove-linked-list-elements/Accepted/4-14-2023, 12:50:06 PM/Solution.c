// https://leetcode.com/problems/remove-linked-list-elements

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val){
  struct ListNode* current = head;

    while (head && head->val == val)
        head = head->next;
    
    while (current && current->next) {
        if (current->next->val == val)
            current->next = current->next->next;
        else
            current = current->next;
    }

    return head;
}