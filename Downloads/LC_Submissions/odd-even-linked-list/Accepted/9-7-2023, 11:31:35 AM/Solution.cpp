// https://leetcode.com/problems/odd-even-linked-list

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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL||head->next==NULL){return head;}
      ListNode* odd = new ListNode(-1);
ListNode* temp1 = odd;
ListNode* even = new ListNode(-1);
ListNode* temp2 = even;
ListNode* traversal = head;
int cnt = 1;

while (traversal) {
    if (cnt % 2 != 0) {
        odd->next = traversal;
        odd = traversal;
    } else {
        even->next = traversal;
        even = traversal;
    }
    cnt++;
    traversal = traversal->next;
}

// Terminate both lists
odd->next = nullptr;
even->next = nullptr;

// Combine the odd and even lists
odd->next = temp2->next;

return temp1->next;

    }
};