// https://leetcode.com/problems/sort-list

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
    ListNode* sortList(ListNode* head) {
        vector<int> v;
        int cnt=0;
        ListNode* p=head;
        while(p!=NULL){
            v.push_back(p->val);
            p=p->next; 
            cnt++;
        }
        sort(v.begin(),v.end());
        p= head;
        for(int i=0;i<cnt;i++){
            p->val=v[i];
        p=p->next;
        }
        return head;
        
//          vector<int> v;
//         ListNode* temp = head;
//         while(temp!=NULL)
//         {
//             v.push_back(temp->val);
//             temp = temp->next; 
//         }
//         sort(v.begin(),v.end());
//         temp = head;
        
//         for(int i = 0;i<v.size();i++)
//         {
//             temp->val = v[i];
//             temp = temp->next;
//         }
//         return head;
    }
};