// https://leetcode.com/problems/kth-largest-element-in-a-stream

class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int>>q;
    int K=0,prevmax=INT_MIN;
    KthLargest(int k, vector<int>& nums) {
    K=k;
        
        for(int i=0;i<nums.size();i++){
             q.push(nums[i]);
            if(q.size()>k){
                q.pop();
            }

        }
        
    }
    
    int add(int val) {

        q.push(val);
     if(q.size()>K){
                q.pop();
            }
       
         return q.top();  
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */


// 2 3 4 5 5 8 9 10