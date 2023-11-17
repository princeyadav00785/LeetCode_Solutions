// https://leetcode.com/problems/sort-characters-by-frequency

class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        priority_queue <pair<int ,char>>q;
        for(auto x:mp){
            q.push({x.second,x.first});
            
        }
        string ans;
        int n= q.size();
        while(n--){
            for(int i=0;i<q.top().first;i++){
                ans+=q.top().second;
            }
            q.pop();
        }
        return ans;
        
    }
};