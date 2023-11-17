// https://leetcode.com/problems/reverse-linked-list-ii

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
    ListNode* reverse(ListNode* &root,int k){
        ListNode* prev=NULL;
        k=k+1;
        ListNode* curr = root;
        while(k--){
            ListNode* nxt= curr->next;
            curr->next=prev;
            prev= curr;
            curr=nxt;
        }
        return prev;
    }
    
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(right==left)return head;
        int n=0;
        ListNode* a=head;
        while(a!=NULL){
            a=a->next;
            n++;
        }
        cout<<n<<" ";
        if(right-left==n-1){return reverse(head,n-1);}
        int k= right-left;
        int cnt=1,c=0,d=1;
        ListNode* temp= head;
                ListNode* temp2 = head;
        ListNode* temp3 = head;
        while(cnt<left){
          temp=temp->next;
            cnt++;
        }
        
         while(cnt<left){
          temp2=temp2->next;
            cnt++;
        }
        while(d<right+1){
            temp3=temp3->next;
            d++;
        }
        temp2->next=reverse(temp,k);
        temp->next=temp3;
        return head;
    }
};