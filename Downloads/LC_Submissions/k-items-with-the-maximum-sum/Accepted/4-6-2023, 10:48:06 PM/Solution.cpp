// https://leetcode.com/problems/k-items-with-the-maximum-sum

class Solution {
public:
    
    // 2 2 2 5
    int kItemsWithMaximumSum(int o, int z, int n, int k) {
        if(k<=o){
            return k;
        }else if(k>o&&k<=o+z){
            return o;
        }else return o-(k-o-z);
    }
};