// https://leetcode.com/problems/kth-largest-element-in-a-stream

class KthLargest {
public:
    priority_queue<int>q;
    int K=0;
    KthLargest(int k, vector<int>& nums) {
    K=k;
        
        for(int i=0;i<nums.size();i++){
            q.push(nums[i]);
        }
        
    }
    
    int add(int val) {
        q.push(val);
     
       priority_queue<int>p;
        p=q;
        int n=K,m=q.size();
        if(n>m)return -1;
        else          
         {      
            n--;
            while(n--){
            p.pop();
                
        }
          return p.top();
        }
           
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */


// 2 3 4 5 5 8 9 10