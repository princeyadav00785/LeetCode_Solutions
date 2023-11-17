// https://leetcode.com/problems/maximum-number-of-integers-to-choose-from-a-range-i

class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        map<int,int>mp;
        for(int i=0;i<banned.size();i++){
            mp[banned[i]]++;
        }
        int cnt=0,sum=0,i=1;
        while(sum<=maxSum&&i<=n){
            if(mp.find(i)==mp.end()){
                sum+=i;
                if(sum<=maxSum)
                cnt++;
                // cout<<i<<" ";
            }
            i++;
        }
        return cnt;
    }
};