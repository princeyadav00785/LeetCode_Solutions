class Solution {
public:
    string customSortString(string order, string s) {
        map<char,int>mp;
        for(int i=0;i<order.length();i++){
            if(mp.find(order[i])==mp.end()){
                mp[order[i]]=i;
            }
        }
        
        vector<pair<int,char>>v;
        int cnt=99;
        for(int i=0;i<s.length();i++){
            if(mp.find(s[i])!=mp.end()){
                v.push_back({mp[s[i]],s[i]});
            }else{
                v.push_back({cnt++,s[i]});
            }
        }
        sort(v.begin(),v.end());
        string ans="";
        for(int i=0;i<v.size();i++){
            ans+=v[i].second;
        }
        return ans;
    }
};