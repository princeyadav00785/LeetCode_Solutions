// https://leetcode.com/problems/monotonic-array

class Solution {

    //  9 8 7
public:
    bool isMonotonic(vector<int> A) {
        bool increase = false;
        bool decrease = false;
        
        for (int i = 1; i < A.size(); i++) {
            if (A[i] < A[i - 1]) {
                decrease = true;
            }
            if (A[i] > A[i - 1]) {
                increase = true;
            }
        }
        
        return increase && decrease ? false : true;
    }
};