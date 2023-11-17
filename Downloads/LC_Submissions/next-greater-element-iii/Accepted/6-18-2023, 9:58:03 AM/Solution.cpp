// https://leetcode.com/problems/next-greater-element-iii

class Solution {
public:
    int nextGreaterElement(int n) {
        string num = to_string(n);
        
        // Find the first decreasing digit from the right
        int i = num.size() - 2;
        while (i >= 0 && num[i] >= num[i + 1])
            i--;
        
        // If no decreasing digit found, return -1
        if (i < 0)
            return -1;
        
        // Find the smallest digit greater than the digit at index i
        int j = num.size() - 1;
        while (j > i && num[j] <= num[i])
            j--;
        
        // Swap the digits at index i and j
        swap(num[i], num[j]);
        
        // Reverse the digits after index i to get the smallest permutation
        reverse(num.begin() + i + 1, num.end());
        
        // Convert the string back to an integer
        long long ans = stoll(num);
        
        // Check for 32-bit integer overflow
        if (ans > INT_MAX)
            return -1;
        
        return ans;
    }
};
