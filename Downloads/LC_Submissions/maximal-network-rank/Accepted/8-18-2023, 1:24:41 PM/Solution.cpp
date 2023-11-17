// https://leetcode.com/problems/maximal-network-rank

class Solution {
public:
    #define p1 pair <int,int> 
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        vector<int>degree(n,0);
        set<p1> s;
        for(auto x:roads){
            degree[x[0]]++;
            degree[x[1]]++;
        }
        for(auto x:roads){
            s.insert({x[0],x[1]});
             s.insert({x[1],x[0]});
            
        }
        int mxm=0;
        for(int i=0;i<n;i++){
         for(int j=i+1;j<n;j++){
             int cnt= degree[i]+degree[j];
             if(s.find({i,j})!=s.end()){
                 cnt--;
             }
             mxm=max(cnt,mxm);
         }}
        return mxm;
    }
};

