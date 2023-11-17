// https://leetcode.com/problems/number-of-beautiful-pairs

class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
        int cnt=0,n=nums.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                string a= to_string(nums[i]);
                    string b= to_string(nums[j]);
                int x= a[0]-'0';
                int y= b[b.size()-1]-'0';
                if(gcd(x,y)==1)cnt++;
            }
        }
        return cnt;
    }
};