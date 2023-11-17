// https://leetcode.com/problems/determine-the-minimum-sum-of-a-k-avoiding-array

class Solution {
public:
    map<int,int>mp;
    int minimumSum(int n, int k) {
        int sum=0;
            int a=1;
        while(n--){
            if(mp[k-a]==0){
                // cout<<a<<" ";
                sum+=a;
                mp[a]++;
                a++;
            }else{
                
                n++;
                a++;
            }
        }
        return sum;
    }
};