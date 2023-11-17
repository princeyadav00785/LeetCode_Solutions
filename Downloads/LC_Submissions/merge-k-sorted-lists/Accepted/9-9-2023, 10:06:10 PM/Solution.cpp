// https://leetcode.com/problems/merge-k-sorted-lists

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
   // ListNode *mergeKLists(vector<ListNode *> &lists) {
    // if(lists.empty()){
    //     return nullptr;
    // }
    // while(lists.size() > 1){
    //     lists.push_back(mergeTwoLists(lists[0], lists[1]));
    //     lists.erase(lists.begin());
    //     lists.erase(lists.begin());
    // }
    // return lists.front();
// }
// ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
//     if(l1 == nullptr){
//         return l2;
//     }
//     if(l2 == nullptr){
//         return l1;
//     }
//     if(l1->val <= l2->val){
//         l1->next = mergeTwoLists(l1->next, l2);
//         return l1;
//     }
//     else{
//         l2->next = mergeTwoLists(l1, l2->next);
//         return l2;
//     }
// }
    
       ListNode *mergeKLists(vector<ListNode *> &lists) {
        if(lists.size()==0)return NULL;
           if(lists.size()==1)return lists[0];
           
           while(lists.size()>1){
              lists.push_back(fxn(lists[0],lists[1]));
               lists.erase(lists.begin());
               lists.erase(lists.begin());
           }
           return lists[0];
       }
    ListNode* fxn(ListNode* l1, ListNode* l2){
                if(l2==NULL)return l1;
                if(l1==NULL)return l2;
                if(l1->val>=l2->val){
                    l2->next=fxn(l1,l2->next);
                    return l2;
                }
                else{
                    l1->next= fxn(l1->next,l2);
                    return l1;
                }
    }
};