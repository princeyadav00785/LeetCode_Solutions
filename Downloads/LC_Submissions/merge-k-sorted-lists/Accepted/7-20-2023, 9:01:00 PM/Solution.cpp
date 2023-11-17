// https://leetcode.com/problems/merge-k-sorted-lists

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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
      vector<int>v;
      for (ListNode* head : lists) {
            while (head) {
                v.push_back(head->val);
                head = head->next;
            }
        }
        sort(v.begin(),v.end());
        ListNode* dummy = new ListNode(0);
          ListNode* dummy2 = dummy;
        for(int i=0;i<v.size();i++){
            ListNode* temp= new ListNode(v[i]);
            dummy->next=temp;
            dummy=temp;
        }
        dummy->next=NULL;
        return dummy2->next;
    }
};