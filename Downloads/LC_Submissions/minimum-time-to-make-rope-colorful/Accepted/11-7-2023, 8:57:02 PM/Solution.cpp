// https://leetcode.com/problems/minimum-time-to-make-rope-colorful

class Solution {
public:
    int minCost(string c, vector<int>& t) {
        queue<pair<char,int>>q;
        int ans=0;
        q.push({c[0],t[0]});
        for(int i=1;i<c.size();i++){
            char d=q.back().first;
            int a=q.back().second;
            int b=t[i];
            if(c[i]==d){
                if(a<b){
                    q.pop();
                    ans+=a;
                    q.push({c[i],t[i]});
                }else{
                    ans+=b;
                }
            }else q.push({c[i],t[i]});
        }
            
            
            return ans;
    }
};