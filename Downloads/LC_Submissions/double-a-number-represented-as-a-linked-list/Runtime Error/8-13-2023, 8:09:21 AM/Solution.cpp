// https://leetcode.com/problems/double-a-number-represented-as-a-linked-list

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
    ListNode* doubleIt(ListNode* head) {
        long long  ans =0;
        ListNode* temp=head;
        while(temp!=NULL){
            ans= ans*10+temp->val;
            temp=temp->next;
        }
        ans=ans*2;
        string s= to_string(ans);
        int n= s.length();
        
        ListNode* dummy = new ListNode(-1);
        ListNode* a= dummy;
        int i=0;
        while(n--){
            char c = s[i++];
            string ss="";
            ss= ss+c;
            cout<<c<<" ";
                int a= stoi(ss);
            ListNode* node = new ListNode(a);
            dummy->next =node;
            dummy=dummy->next;
        }
        return a->next;
    }
};