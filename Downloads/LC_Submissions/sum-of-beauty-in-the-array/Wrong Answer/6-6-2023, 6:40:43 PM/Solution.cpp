// https://leetcode.com/problems/sum-of-beauty-in-the-array

class Solution {
public:
    int sumOfBeauties(vector<int>& nums) {
        vector<int> a(nums.begin(),nums.end());
        sort(a.begin(),a.end());
         vector<int> b(a.begin(),a.end());
        reverse(b.begin(),b.end());
        if(nums==a){
            return 2;
        }else if(nums==b){return 0;}
        else return 1;
        
    }
};