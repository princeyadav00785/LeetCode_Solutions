// https://leetcode.com/problems/find-maximum-number-of-string-pairs

class Solution {
public:
    bool revere(string s , string t){
        reverse(t.begin(),t.end());
        if(s==t)return true;
        return false;
    }
    int maximumNumberOfStringPairs(vector<string>& words) {
        int cnt=0;
        int n = words.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(revere(words[i],words[j]))cnt++;
            }
        }
                   return cnt;
    }
};