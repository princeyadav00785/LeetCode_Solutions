// https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list

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
    ListNode* deleteMiddle(ListNode* head) {
            ListNode* temp= head;
        if(head==NULL||head->next==NULL){return head;}
    ListNode* temp2= head;
    int cnt=0;
    while(temp->next!=NULL){
        cnt++;
        temp=temp->next;
    }
    if(cnt%2==0){cnt=cnt/2-1;}else cnt=cnt/2;
    for(int i=0;i<cnt;i++){
        temp2=temp2->next;
    }
    temp2->next=temp2->next->next;
    return head;
    }
};