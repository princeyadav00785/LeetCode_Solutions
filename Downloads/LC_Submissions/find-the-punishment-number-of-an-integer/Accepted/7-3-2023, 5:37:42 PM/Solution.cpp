// https://leetcode.com/problems/find-the-punishment-number-of-an-integer

class Solution {
public:
    bool canPartitionSubstring(string& input, int k, int index, int currentSum) {
        if (index >= input.length()) {
            return currentSum == k;
        }
    
        int num = 0;
        
        for (int i = index; i < input.length(); i++) {
            num = num * 10 + (input[i] - '0');
            
            if (canPartitionSubstring(input, k, i + 1, currentSum + num)) {
                return true;
            }
        }
    
        return false;
    }

    int punishmentNumber(int n) {
        int ans = 0;
        
        for (int i = 1; i <= n; i++) {
            int sq = i * i;
            string v = to_string(sq);
            bool k = canPartitionSubstring(v, i, 0, 0);
            
            if (k) {
                ans += sq;
            }
        }
        
        return ans;
    }
};
