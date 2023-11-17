// https://leetcode.com/problems/count-symmetric-integers

class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count = 0;

    for (int num = low; num <= high; ++num) {
        std::string str = std::to_string(num);
        int n = str.length() ;
        if(n%2!=0)continue;
        n=n/2;
        
        int firstHalfSum = 0;
        int secondHalfSum = 0;

        for (int i = 0; i < n; ++i) {
            firstHalfSum += (str[i] - '0');
            secondHalfSum += (str[n + i] - '0');
        }

        if (firstHalfSum == secondHalfSum) {
            count++;
        }
    }

    return count;

    }
};