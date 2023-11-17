// https://leetcode.com/problems/partition-labels

class Solution {
public:
    map<char,int>mp;
    map<char,int>mp2;
    
    vector<int> partitionLabels(string s) {
      vector<int>ans;
        int cnt=0;
        set<char>st;
        for(int i=0;i<s.length();i++){
         mp[s[i]]++;  
        }
         for(int i=0;i<s.length();i++){
          st.insert(s[i]);
             mp2[s[i]]++;
             int f=0;
             cnt++;
             for(auto x:st){

                if(mp2[x]!=mp[x]){
                    f=1;
                } 
             }
             
             if(f==0){
                 st.clear();
                 ans.push_back(cnt);
                 cnt=0;
             }
        }
            
            return ans;
    }
};