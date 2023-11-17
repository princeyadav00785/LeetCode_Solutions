// https://leetcode.com/problems/sum-of-beauty-in-the-array

class Solution {
public:
    int sumOfBeauties(vector<int>& nums) {
        int f=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                f=1;
            }
        }
        vector<int> a(nums.begin(),nums.end());
        sort(a.begin(),a.end());
         vector<int> b(a.begin(),a.end());
        reverse(b.begin(),b.end());
        if(nums==a&&f==0){
            return 2;
        }else if(nums==b||f==1){return 0;}
        else if((nums!=a||nums!=b)&&f==0)return 1;
        return 0;
    }
};