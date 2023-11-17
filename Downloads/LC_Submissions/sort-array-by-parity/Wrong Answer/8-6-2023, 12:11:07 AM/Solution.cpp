// https://leetcode.com/problems/sort-array-by-parity

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        sort(nums.begin(),nums.end(),[&](auto a,auto b){
            return a%2==0 ?a :b;
            // a % 2 < b % 2;
        });
        return nums;
    }
    
};

