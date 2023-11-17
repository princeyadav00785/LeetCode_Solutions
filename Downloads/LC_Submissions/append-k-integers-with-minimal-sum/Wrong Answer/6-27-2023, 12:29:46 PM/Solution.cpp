// https://leetcode.com/problems/append-k-integers-with-minimal-sum

class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k) {
        map<int,int>mp;
        int cnt=0;
        long long ans=0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(int i=1;i<100000;i++){
            if(cnt==k){break;}
            if(mp.find(i)==mp.end()){
                cout<<i<<" ";
                ans+=i;
                cnt++;
            }
        }
        return ans;
    }
};