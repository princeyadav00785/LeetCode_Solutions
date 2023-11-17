// https://leetcode.com/problems/k-items-with-the-maximum-sum

class Solution {
public:
    int kItemsWithMaximumSum(int o, int z, int n, int k) {
        vector<int> v;
        for(int i=0;i<o;i++){
            v.push_back(1);
            
        }
         for(int i=0;i<z;i++){
            v.push_back(0);
            
        }
         for(int i=0;i<n;i++){
            v.push_back(-1);
            
        }
        int ans =0;
        for(int i=0;i<k;i++){
            ans+=v[i];
        }
        return ans;
    }
};