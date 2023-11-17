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
     int cnt=0;
     ListNode* temp= head;
     ListNode* temp2= head;
        while(temp!=NULL){
            temp=temp->next;
            cnt++;
        }
        int mid=cnt/2;
        while(mid--){
          temp2= temp2->next;}
        return temp2;
    }
};