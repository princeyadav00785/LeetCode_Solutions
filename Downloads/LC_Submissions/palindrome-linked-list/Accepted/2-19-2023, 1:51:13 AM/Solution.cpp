// https://leetcode.com/problems/palindrome-linked-list

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
    vector<int> traversal(ListNode* head){
        vector<int> v;
        ListNode* temp=head;
        if(head == NULL){
            return v;
        }
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        return v;
    }

    bool isPalindrome(ListNode* head) {
        // ListNode* Temp= head;
        // if(head ==NULL|| head->next==NULL){
        //     return true;
        // }
        // while(temp->next!=NULL){
        //     temp=temp->next;
        // }
        vector<int> v1= traversal(head);
        for(int i=0;i<v1.size();i++){
            cout<<v1[i]<<" ";       }
        for(int i=0;i<v1.size()/2;i++){
           if(v1[i]!=v1[v1.size()-1-i]){
                //  cout<< v1[i]<<" "<<v1[v1.size()-1-i]<<" "<<i;
               return false;
           }    
          
        }
        return true;
       
    }
};