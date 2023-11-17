// https://leetcode.com/problems/longest-even-odd-subarray-with-threshold

class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int k) {
        int cnt=0,f=0,ans=0;
        for(int i=0;i<nums.size();i++){
            if(f==0&&nums[i]<=k&&nums[i]%2==0&&cnt==0){
                cnt++;
                f=1;
            }
           else if(cnt!=0){
                if(cnt%2!=0){
                    if(nums[i]%2!=0&&nums[i]<=k)cnt++;
                    else{cnt=0;
                        f=0;
                         if(f==0&&nums[i]<=k&&nums[i]%2==0&&cnt==0){
                cnt++;
                f=1;
            } 
                    }
                }else{
                    if(nums[i]%2==0&&nums[i]<=k)cnt++;
                    else{cnt=0;
                        f=0;
                    } 
                }
            }
            ans=max(ans,cnt);
        }
        return ans;
    }
};