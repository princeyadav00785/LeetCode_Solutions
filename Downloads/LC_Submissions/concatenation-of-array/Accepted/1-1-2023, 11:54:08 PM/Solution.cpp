// https://leetcode.com/problems/concatenation-of-array

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(2*n,0);
        for(int i =0; i<n; i++){
            v[i]=nums[i];

        }
        for(int j =n;j<2*n;j++){
            v[j]=nums[j-n];
        }
        return v;
    }
};