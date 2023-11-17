// https://leetcode.com/problems/find-players-with-zero-or-one-losses

class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>> ans;
        vector<int> v;
         vector<int> b;
        int a= matches[0].size();
        map<int,int> mp;
        for(int i=1;i<=a;i++){
            mp[i]=0;
        }
        for(auto c:matches)
        {
            int x=c[0];
            int y=c[1];
            if(mp.find(x)==mp.end())
            {
                mp[x]=0;
            }
            mp[y]++;
        }
            
            // for(int j=0;j<a;j++){
            //     mp[matches[i][j][1]]++;
            // }
        
        for(auto x:mp){
            if(x.second==0){
                v.push_back(x.first);
            }
        }
         for(auto x:mp){
            if(x.second==1){
                b.push_back(x.first);
            }
        }
        ans.push_back(v);
        ans.push_back(b);
        return ans;
    }
};