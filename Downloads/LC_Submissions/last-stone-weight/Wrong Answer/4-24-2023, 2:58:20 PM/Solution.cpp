// https://leetcode.com/problems/last-stone-weight

class Solution {
public:
    int lastStoneWeight(vector<int>& nums) {
        if(nums.size()==1){return nums[0];}
        // int cnt=0;
        sort(nums.begin(),nums.end());
        // for(int i=1;i<nums.size();i++){
        //     if(nums[i]==nums[i-1]){
        //         cnt++;
        //     }
        // }
        // if(cnt==n){return 0;}
       // long long  int ans =nums[nums.size()-1];
        long long int ans =0;
int n = nums.size()-1;
        ans = nums[n-1];
        for(int i=n-2;i>-1;i--){
            ans = abs(ans -nums[i]);
        }
        return ans;
    }
};

// 1 1 2 4 7 8
// 2 4 70 8
// 2 4 62
// 2 58
// 56
