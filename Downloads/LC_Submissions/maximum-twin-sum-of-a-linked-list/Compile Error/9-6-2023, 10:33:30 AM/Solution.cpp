// https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list

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
    int maxTwinSum(ListNode* head) {
        // Count the number of nodes in the linked list.
        int n = 0;
        ListNode* current = head;
        while (current) {
            n++;
            current = current->next;
        }

        // Calculate the maximum twin sum.
        int maxSum = INT_MIN;
        current = head;
        for (int i = 0; i < n / 2; i++) {
            int twinIndex = n - 1 - i;
            ListNode* twinNode = getNodeAt(head, twinIndex);
            int sum = current->val + twinNode->val;
            maxSum = max(maxSum, sum);
            current = current->next;
        }

        return maxSum;
    }

    // Helper function to get the node at a specific index.
    ListNode* getNodeAt(ListNode* head, int index) {
        ListNode* current = head;
        for (int i = 0; i < index; i++) {
            current = current->next;
        }
        return current;
    }
};
