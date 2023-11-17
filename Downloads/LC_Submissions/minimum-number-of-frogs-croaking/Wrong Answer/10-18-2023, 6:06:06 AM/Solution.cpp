// https://leetcode.com/problems/minimum-number-of-frogs-croaking

class Solution {
public:
    int minNumberOfFrogs(string s) {
        int cnt=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='c')cnt++;
        }
        map<char,int>mp;
        int a=0;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
            if(i==s.length()-1)a=mp[s[i]];
        }
        for(auto x:mp){
            if(x.second!=a)return -1;
        }
        int k=0;
        string cmp= "croak";
        vector<pair<int,int>>v;
        while(cnt--){
            int x=0,y=0;
            for(int i=0;i<s.length();i++){
                
                if(s[i]=='c'){
                    x=i;
                    int a= cmp.length(),j=0;
                    while(i<s.length()&&j<a){
                        if(s[i]==cmp[j]){
                            s[i]='0';
                            j++;i++;
                        }else i++;
                    }
                    y=i-1;
                }
            }
            v.push_back({x,y});
        }
        sort(v.begin(),v.end());
        int ans=0;
        int st=v[0].first,e=v[0].second;
        vector<pair<int,int>>final;
        for(int i=1;i<v.size();i++){
            // cout<<v[i].first<<" "<<v[i].second<<endl;
//             [1,4][2,6]
            if(v[i].first<e){
                e=max(e,v[i].second);
            }else{
                final.push_back({st,e});
                st=v[i].first;
                e=v[i].second;
            }
        }
         final.push_back({st,e});
        return v.size()-final.size()+1;
    }
};