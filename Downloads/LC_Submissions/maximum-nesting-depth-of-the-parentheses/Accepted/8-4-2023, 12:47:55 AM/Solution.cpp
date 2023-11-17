// https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses

class Solution {
public:
    int maxDepth(string s) {
        int ans=0,cnt=0;
        for(auto x:s){
            if(x=='('){
                cnt++;
                ans=max(cnt,ans);
            }else if(x==')')cnt--;
        }
        return ans;
    }
};