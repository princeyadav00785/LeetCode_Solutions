// https://leetcode.com/problems/remove-letter-to-equalize-frequency

class Solution {
public:
    bool equalFrequency(string word) {
        map<char,int>mp;
        for(int i=0;i<word.length();i++){
            mp[word[i]]++;
        }
       int cnt=0;
       int a=0,b=0;
       vector<int> v;
       for(auto x:mp){
           v.push_back(x.second);
       }
       if(v[0]==v[v.size()-1]&&v[0]==1){
           return true;
       }
   
       sort(v.begin(),v.end());
       for(int i=0;i<v.size()-1;i++){
          if(v[i]==v[i+1]){cnt++;}
          if(v[i]!=v[i+1]){
              a=v[i];
              b=v[i+1];
          }
       }
       cnt = cnt+1;
       cout<<cnt<<" ";
       cout<<a<<" "<<b;
            if(cnt == v.size()-1&&b-a==1){
                return true;
            }else return false;

    }
};