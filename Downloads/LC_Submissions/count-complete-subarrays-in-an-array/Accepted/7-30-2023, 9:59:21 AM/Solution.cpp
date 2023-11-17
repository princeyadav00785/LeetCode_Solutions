// https://leetcode.com/problems/count-complete-subarrays-in-an-array

class Solution {
public:
    set<int>s;
    int countCompleteSubarrays(vector<int>& nums) {
        int cnt=0;
        for(int i=0;i<nums.size();i++)s.insert(nums[i]);
        int n = s.size();
        cout<<n;
        for(int i=0;i<nums.size();i++){
            set<int>s2;
            for(int j=i;j<nums.size();j++){
                s2.insert(nums[j]);
                if(s2.size()==n)cnt++;
            }
        }
        
        
        return cnt;
    }
};