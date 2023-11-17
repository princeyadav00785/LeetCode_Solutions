// https://leetcode.com/problems/split-linked-list-in-parts

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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int n =1;
        ListNode* temp=head;
        while(temp->next){
         n++;
         temp=temp->next;
        }
        vector<ListNode*>v(k,NULL);
        temp=head;
        int i=0,t=min(k,n);
        while(i<t){
            int a=n%k;
            if(a!=0){a=n/k+1; n=n-1;}
            else if(a==0)a=n/k;
           
            cout<<i<<" ";
            if(temp)v[i]=temp;
            
            i++;
            if(a)a--;
           while(a--){
               if(temp)
               temp=temp->next;
           }
            ListNode* dummy=temp;
            if(temp)
           dummy= temp->next;
            if(temp)
            temp->next=NULL;
            if(dummy)
                temp=dummy;
        }
        return v;
    }
};