// https://leetcode.com/problems/difference-between-element-sum-and-digit-sum-of-an-array

class Solution {
public:
    void fxn(vector<int>&v,int n){
        while(n>0){
            int a= n%10;
            v.push_back(a);
            n=n/10;
        }
    }
    int differenceOfSum(vector<int>& nums) {
        vector<int>v;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            fxn(v,nums[i]);
        }
        int s2=0;
        for(int i=0;i<v.size();i++){
            s2+=v[i];
        }
        return abs(sum-s2);
    }
};