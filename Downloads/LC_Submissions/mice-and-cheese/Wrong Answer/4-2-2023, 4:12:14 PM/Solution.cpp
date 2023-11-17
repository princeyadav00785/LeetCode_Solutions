// https://leetcode.com/problems/mice-and-cheese

class Solution {
public:
    int miceAndCheese(vector<int>& v1, vector<int>& v2, int k) {
        map<int,int> mp;
        
        for(int i=0;i<v1.size();i++){
            mp[i]= v1[i];
        }
       for(int i=0;i<v2.size();i++){
           if(mp[i]<v2[i]){
               mp[i]=v2[i];
           }
       }
        vector<int> v;
        for(auto x:mp){
       v.push_back(x.second);
        }
        sort(v.begin(),v.end(),greater<int>());
        int ans=0;
        if(v1.size()>=2*k&&v2.size()>=2*k){
            k=2*k;
        }else if(v1.size()==k&&v2.size()==k){
            k=k;
        }else {
            k= max(v1.size(),v2.size());
        }
        for(int i=0;i<k;i++){
            ans +=v[i];
        }
        return ans;
    }
};