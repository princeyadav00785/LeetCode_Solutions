// https://leetcode.com/problems/linked-list-components

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
    int numComponents(ListNode* head, vector<int>& nums) {
        ListNode* temp= head;
        vector<int> v;
        while(temp){
            v.push_back(temp->val);
            temp=temp->next;
        }
        int cnt=0;
        map<int,int>mp;
        for(auto x:nums){mp[x]++;}
        for(auto x: v){
            if(!mp[x])cnt++;
        }
        return cnt+1;
    }
};