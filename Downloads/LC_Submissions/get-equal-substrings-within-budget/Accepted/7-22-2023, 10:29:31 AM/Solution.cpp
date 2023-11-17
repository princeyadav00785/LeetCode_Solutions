// https://leetcode.com/problems/get-equal-substrings-within-budget

class Solution {
public:
    vector<int>cost;
    int equalSubstring(string s, string t, int maxCost) {
        for(int i=0;i<s.length();i++){
            int k = abs(s[i]-t[i]);
            cost.push_back(k);
        }
  int i=0,j=0,ans=0,sum=0,n=s.length();
        while(j<n){
            sum+=cost[j];
            
            if(sum<=maxCost){
                ans=max(ans,j-i+1);
            }
            
            while(sum>maxCost){
                sum-=cost[i++];
            }
            j++;
        }
        return ans;
        
        
    }
};

