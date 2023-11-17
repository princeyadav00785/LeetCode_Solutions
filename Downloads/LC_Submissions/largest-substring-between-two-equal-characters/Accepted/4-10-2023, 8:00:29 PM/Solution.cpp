// https://leetcode.com/problems/largest-substring-between-two-equal-characters

class Solution {
public:
    int maxLengthBetweenEqualCharacters(string nums) {
     unordered_map<int,int> mp;
        int diff=0,mxm=0;
        for(int i=0;i<nums.length();i++){
            if(mp.count(nums[i])){
                diff= i-mp[nums[i]];
            }else mp[nums[i]]=i;
            mxm=max(diff,mxm);
        }
        if(mxm!=0){
            return mxm-1;
        }else return -1;
    }
};