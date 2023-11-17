// https://leetcode.com/problems/maximal-score-after-applying-k-operations

class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int>q;
        for(int i=0;i<nums.size();i++){
            q.push(nums[i]);
        }
        long long ans=0;
        while(k--){
            
            int n= q.top();
            cout<<n<<" ";
            q.pop();
            if(n%3==0){ans+=n;
                      n=n/3;}
            else {ans+=n;
                 n=n/3+1;}
            
            q.push(n);
        }
        return ans;
    }
};