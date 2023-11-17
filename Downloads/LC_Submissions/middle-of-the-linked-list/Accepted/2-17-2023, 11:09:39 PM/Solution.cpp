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
     ListNode* temp=head;
     int cnt=0;
     while(temp !=NULL){
         temp = temp->next;
         cnt++;
     }   
     cout<<cnt;
      if(cnt%2==0){
          cnt=cnt/2;
      }else cnt= cnt/2;
        ListNode* temp2=head;
        while(cnt--){
            temp2=temp2->next;
        }
        return temp2;
    }
};