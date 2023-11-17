// https://leetcode.com/problems/distribute-money-to-maximum-children

class Solution {
public:
    int distMoney(int m, int c) {
        m = m-c;
        int a =0,b=0,ans=-1;
        a= m/7;
        b=m%7;
        if(c>m){
            return -1;
        }
        // cout<<a<<" "<<b<<" "<<endl;
        if(b!=3){
            ans =a;
            // cout<<"yadav";
        }else ans =a-1;
        return ans;
    }
};