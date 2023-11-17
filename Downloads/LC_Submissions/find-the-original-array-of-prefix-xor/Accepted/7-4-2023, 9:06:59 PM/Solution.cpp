// https://leetcode.com/problems/find-the-original-array-of-prefix-xor

#include <vector>

class Solution {
public:
    std::vector<int> findArray(std::vector<int>& pref) {
        std::vector<int> arr(pref.size());
        int xorSum = 0;
        for (int i = 0; i < pref.size(); i++) {
            arr[i] = xorSum ^ pref[i];
            xorSum ^= arr[i];
        }
        return arr;
    }
};
