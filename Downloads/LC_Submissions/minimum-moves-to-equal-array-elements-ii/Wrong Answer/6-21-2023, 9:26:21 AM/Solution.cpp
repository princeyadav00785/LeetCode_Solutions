// https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii

class Solution {
public:
    int minMoves2(vector<int>& nums) {
        long long ans=0,sum=0;
        if(nums.size()==1)return 0;
    sort(nums.begin(),nums.end());
        set<int>s(nums.begin(),nums.end());
        if(s.size()==1)return 0;
        int cnt =1,k=0;
        for(auto x:s){
            // cout<<x;
            cnt--;
            if(cnt<-0){
                k=x;
                break;
            }
            
        }
        cout<<k;
        // long long k = nums[1];
        for(int i=0;i<nums.size();i++){
            ans+=abs(k-nums[i]);
        }
        return ans;
    }
};
// 1 2 9 10
//  1  7  8
//  5 6 9 10
//   1   3 4
//   2 1 2 3