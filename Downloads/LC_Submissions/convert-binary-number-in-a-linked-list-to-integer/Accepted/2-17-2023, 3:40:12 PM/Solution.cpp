// https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer

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
    int getDecimalValue(ListNode* head) {
        vector<int> v;
        ListNode* temp =head;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp = temp->next;
        }
        int ans =0;
        
        int n=v.size()-1;
        for(int i=0;i<v.size();i++){
            ans += v[i]*pow(2,n);
            n--;

        }
       
        if(head==NULL){
            return 0;
        }else return ans;

    }
};