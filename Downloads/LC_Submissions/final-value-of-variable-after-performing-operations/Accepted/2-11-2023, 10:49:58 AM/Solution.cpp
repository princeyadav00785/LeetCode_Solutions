// https://leetcode.com/problems/final-value-of-variable-after-performing-operations

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        map<string,int> mp;
        char X;
        mp.insert({"++X",+1});
         mp.insert({"X++",+1});
         mp.insert({"--X",-1});
         mp.insert({"X--",-1});
         int ans=0;
        for(int i=0;i<operations.size();i++){
          ans += mp[operations[i]];
        }
        return ans;
    }
};