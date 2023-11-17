// https://leetcode.com/problems/account-balance-after-rounded-purchase

class Solution {
public:
    int accountBalanceAfterPurchase(int n) {
        int a= n%10;
        if(a>=5){n=n-a+10;}else n=n-a;
        return 100-n;
    }
};