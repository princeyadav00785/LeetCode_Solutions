class Solution {
public:
    int findJudge(int n, vector<vector<int>>& v) {
     map<int,int>mp1;
        map<int,int>mp2;
        for(int i=0;i<v.size();i++){
            int a=v[i][0];
            int b=v[i][1];
            mp1[a]++;
            mp2[b]++;
        }
        for(int i=1;i<=n;i++){
        if(mp1[i]==0&&mp2[i]==n-1)return i;  
        }
        return -1;
    }
};