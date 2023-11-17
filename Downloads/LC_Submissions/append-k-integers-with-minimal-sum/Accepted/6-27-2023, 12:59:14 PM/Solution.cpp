// https://leetcode.com/problems/append-k-integers-with-minimal-sum

class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k) {
        long long ans = (long(k)*(long(k+1)))/2;        
        set<int>st(nums.begin(),nums.end());    // use unique numbers from nums
        for(auto i:st){            
            if(i<=k)    ans += (1+ k++) - i;    // if a number was added that already existed in nums, remove that and add next number (k+1)
            else    break;
        }
        return ans;
    }
};