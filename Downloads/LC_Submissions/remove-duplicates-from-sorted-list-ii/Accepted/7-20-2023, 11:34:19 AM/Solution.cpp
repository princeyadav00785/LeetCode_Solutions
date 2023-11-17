// https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii

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
    ListNode* deleteDuplicates(ListNode* head) {
        map<int,int>mp;
        ListNode* temp=head;
        while(temp){
            mp[temp->val]++;
            temp=temp->next;
        }
        ListNode* dummy= new ListNode(-1);
        ListNode* ans= dummy;
        for(auto x:mp){
            if(x.second==1){
                ListNode* temp= new ListNode(x.first);
                dummy->next=temp;
                dummy=temp;
            }
        }
        dummy->next=NULL;
        return ans->next;
    }
};