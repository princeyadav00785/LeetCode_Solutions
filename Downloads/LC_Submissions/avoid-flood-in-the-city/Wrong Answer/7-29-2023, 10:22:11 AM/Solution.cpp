// https://leetcode.com/problems/avoid-flood-in-the-city

class Solution {
public:
    map<int ,int>mp;
    vector<int> avoidFlood(vector<int>& r) {
        int n=r.size();
        vector<int>v(n,-1);
        vector<int>v2;
         vector<int>v3;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(r[i]!=0){
                if(mp[r[i]]==0){
                    mp[r[i]]++;
                    }else if(cnt>0&&mp[r[i]]==1){
                    v2.push_back(r[i]);
                    cnt--;
                }else return v3;
                       }
            else cnt++;
            
        }
        int a=0;
        for(int i=0;i<n;i++){
            if(r[i]==0){
               if(a<v2.size()) {v[i]=v2[a++];
            }else v[i]=1;}
        }
        return v;
    }
};