// https://leetcode.com/problems/maximum-units-on-a-truck

class Solution {
public:
    int maximumUnits(vector<vector<int>>& v, int k) {
        vector<pair<int,int>>a;
        for(int i=0;i<v.size();i++){
          
            pair<int,int> p= {v[i][1],v[i][0]};
            a.push_back(p);
        }
        sort(a.begin(),a.end(),greater<pair<int,int>>());

        long long ans=0;
        for(int i=0;i<a.size();i++){
            if(k>0)
           { int cap= min(k,a[i].second);
            k=k-cap;
            ans+= cap*a[i].first;
           }
            else break;
            
        }
        return ans;
    }
    
};