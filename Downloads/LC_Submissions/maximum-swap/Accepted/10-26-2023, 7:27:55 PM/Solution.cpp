// https://leetcode.com/problems/maximum-swap

class Solution {
public:
    int maximumSwap(int num) {
        string numStr = to_string(num);
        vector<int> lastIdx(10, -1);  // Store the last index of each digit (0 to 9).

        // Populate lastIdx with the last index of each digit in numStr.
        for (int i = 0; i < numStr.size(); i++) {
            lastIdx[numStr[i] - '0'] = i;
        }

        // Iterate through the digits of numStr and find the maximum digit to swap.
        for (int i = 0; i < numStr.size(); i++) {
            for (int d = 9; d > numStr[i] - '0'; d--) {
                if (lastIdx[d] > i) {
                    swap(numStr[i], numStr[lastIdx[d]]);
                    return stoi(numStr);  // Return the result as an integer.
                }
            }
        }

        return num;  // If no swap is needed, return the original number.
    }
};
