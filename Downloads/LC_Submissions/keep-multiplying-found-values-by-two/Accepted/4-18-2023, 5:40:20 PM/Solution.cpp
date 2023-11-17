// https://leetcode.com/problems/keep-multiplying-found-values-by-two

class Solution {
public:
    int findFinalValue(vector<int>& nums, int k) {
        int find=0;
        while(true){
            for(int i=0;i<nums.size();i++){
                if(nums[i]==k){
                    find=1;
                   break;
                }
            }
            if(find==0){
                return k;
            }
            if(find==1){
                k=2*k;
                find=0;
            }
        }
        return k;
    }
};