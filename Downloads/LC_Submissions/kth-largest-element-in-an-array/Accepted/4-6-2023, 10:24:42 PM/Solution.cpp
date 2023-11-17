// https://leetcode.com/problems/kth-largest-element-in-an-array

class Solution {
public:
    int findKthLargest(vector<int>& v, int k) {
   priority_queue <int, vector<int>, greater<int> > min_heap;
        int n= v.size(),i=0;
        while(n--){
                min_heap.push(v[i]);
            if(min_heap.size()>k){
                min_heap.pop();

            }
            
            i++;
        }
        return min_heap.top();
        
        // priority_queue<int,vector<int>,greater<int>>pq;
        // int cur=0;
        // for(int i=0;i<k;i++){
        //     pq.push(nums[i]);
        // }
        // for(int i=k;i<nums.size();i++){
        //     if(pq.top()<nums[i]){
        //         pq.pop();
        //         pq.push(nums[i]);
        //     }
        // }
        // return pq.top();
    }
};