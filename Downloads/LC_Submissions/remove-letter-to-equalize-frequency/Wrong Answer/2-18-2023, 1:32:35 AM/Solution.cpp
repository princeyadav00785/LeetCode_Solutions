// https://leetcode.com/problems/remove-letter-to-equalize-frequency

class Solution {
public:
    bool equalFrequency(string word) {
        map<char,int>mp;
        for(int i=0;i<word.length();i++){
            mp[word[i]]++;
        }
        int ans =0;
        vector<int> v;
        for( auto x: mp){
       v.push_back(x.second);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size()-1;i++){
             cout<<v[i]<<" ";
             ans += abs(v[i]-v[i+1]);
        }
        if(v[v.size()-1]==1&&v[0]==1){return true; cout<<"hhhh";}
        if(v[v.size()-2]!=v[0]){return false; cout<<"hhhh";}
        
        if(ans ==1){return true;cout<<"hhhhhhgg";}else return false;
        // 1 1 2 2 
    }
};