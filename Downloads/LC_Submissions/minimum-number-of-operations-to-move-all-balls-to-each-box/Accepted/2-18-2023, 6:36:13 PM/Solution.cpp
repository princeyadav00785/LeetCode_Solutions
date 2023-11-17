// https://leetcode.com/problems/minimum-number-of-operations-to-move-all-balls-to-each-box

class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> ans;
        for(int i=0;i<boxes.length();i++){
            int sum =0;
            for(int j=0;j<boxes.length();j++){
                if(boxes[j]=='1'){
                    sum+=abs(i-j);
                }
            }
            ans.push_back(sum);
        }
        return ans;
    }
};