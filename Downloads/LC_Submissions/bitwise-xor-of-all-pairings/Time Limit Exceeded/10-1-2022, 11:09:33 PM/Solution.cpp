// https://leetcode.com/problems/bitwise-xor-of-all-pairings

class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums3;
        for(int i = 0; i<nums1.size(); i++){
            for(int j =0; j<nums2.size(); j++){
                nums3.push_back(nums1[i]^nums2[j]);
            }
        } 
        int ans =0;
        for(int k = 0; k< nums3.size(); k++){
            ans ^= nums3[k];
        }
        
        return ans;
    }
    
};