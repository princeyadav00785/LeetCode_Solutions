// https://leetcode.com/problems/prime-palindrome

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isPrime(int num) {
        if (num < 2)
            return false;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0)
                return false;
        }
        return true;
    }

    bool isPalindrome(int num) {
        string str = to_string(num);
        int left = 0, right = str.length() - 1;
        while (left < right) {
            if (str[left] != str[right])
                return false;
            left++;
            right--;
        }
        return true;
    }

    int primePalindrome(int n) {
        while (true) {
            if (isPalindrome(n) && isPrime(n))
                return n;
            n++;
            // Skip even digits since an even-length palindrome is always divisible by 11.
            if (n > 10 && n % 2 == 0)
                n = (n / 10 + 1) * 10 + 1;
        }
        return -1; // Should never reach here.
    }
};