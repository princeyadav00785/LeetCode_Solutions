// https://leetcode.com/problems/sign-of-the-product-of-an-array

class Solution {
public:
    int arraySign(vector<int>& nums) {
        long long int p=1;
        for(int i=0;i<nums.size();i++){
            p *=nums[i];
        }
        if(p>0){return 1;}
        if(p<0)return -1;else return 0;
    }
};