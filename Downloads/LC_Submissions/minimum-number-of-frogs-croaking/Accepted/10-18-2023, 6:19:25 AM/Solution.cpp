// https://leetcode.com/problems/minimum-number-of-frogs-croaking

class Solution {
public:
    int minNumberOfFrogs(string s) {
        // Check if the string is not a multiple of 5 or doesn't start with 'c'
        if (s.length() % 5 != 0 || s[0] != 'c') {
            return -1;
        }

        int counts[5] = {0};  // Array to keep track of counts of 'c', 'r', 'o', 'a', 'k'
        int frogs = 0;       // Number of frogs needed

        for (char c : s) {
            if (c == 'c') {
                counts[0]++;
            } else if (c == 'r') {
                if (counts[0] <= counts[1]) return -1;  // Not enough 'c'
                counts[1]++;
            } else if (c == 'o') {
                if (counts[1] <= counts[2]) return -1;  // Not enough 'r'
                counts[2]++;
            } else if (c == 'a') {
                if (counts[2] <= counts[3]) return -1;  // Not enough 'o'
                counts[3]++;
            } else if (c == 'k') {
                if (counts[3] <= counts[4]) return -1;  // Not enough 'a'
                counts[4]++;
            }
            
            frogs = max(frogs, counts[0] - counts[4]);  // Update the number of frogs needed
        }
        
        // All counts should match if it's a valid "croak" combination
        for (int i = 0; i < 5; i++) {
            if (counts[i] != counts[0]) return -1;
        }

        return frogs;
    }
};
