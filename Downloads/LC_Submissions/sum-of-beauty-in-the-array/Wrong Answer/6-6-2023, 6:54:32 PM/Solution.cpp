// https://leetcode.com/problems/sum-of-beauty-in-the-array

class Solution {
public:
    int sumOfBeauties(vector<int>& nums) { 
        int cnt=0;
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i-1]<nums[i]&&nums[i]<nums[i+1]){
                cnt++;
            }
        }
        if(cnt==nums.size()-2){return 2;}
        if(cnt==0){return 0;}
        return 1;
    }
};

// 1 2 3 4 5 6 