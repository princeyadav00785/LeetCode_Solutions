// https://leetcode.com/problems/minimum-sum-of-four-digit-number-after-splitting-digits

class Solution {
public:
    int minimumSum(int num) {
        vector<int> v(4,0);
        for(int i=0;i<4;i++){
            int digit=0;
            digit= num%10;
            v[i]=digit;
            num =num/10;
        }
        sort(v.begin(),v.end());
         int a,b;
         a= v[0]*10+v[3];
         b= v[1]*10+v[2];
         cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<" "<<v[3];
         return a+b;
        
    }
};