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
        map<int,int>mp;
        for(auto x:nums){mp[x]++;}
       int cnt=0;
        while(temp){
            if(mp[temp->val]){
                cnt++;
                while(temp!=NULL&&mp[temp->val]){
                    temp=temp->next;
                }
            }else temp=temp->next;
        }
        return cnt;
    }
};

 // int count = 0;
 //        ListNode node = head;
 //        Set<Integer> set = new HashSet<>();
 //        for (int i : G) {
 //            set.add(i);
 //        }
 //        while (node != null) {
 //            if (set.contains(node.val)) {
 //                count++;
 //                while (node != null && set.contains(node.val)) {
 //                    node = node.next;
 //                }
 //            } else {
 //                node = node.next;
 //            }
 //        }
 //        return count;