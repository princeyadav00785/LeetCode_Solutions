// https://leetcode.com/problems/maximal-score-after-applying-k-operations

class Solution {
public:
     priority_queue<int>q;
            long long int ans=0;
    long long maxKelements(vector<int>& nums, int k) {
         
        for(int i=0;i<nums.size();i++){
            q.push(nums[i]);
        }

        while(k--){
            int t=q.top();
            ans+=t;
            q.pop();
            if(t%3!=0){t=t/3+1;}else t=t/3;
            
            q.push(t);
        }
        return ans;
    }
};