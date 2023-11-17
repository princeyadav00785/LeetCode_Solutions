// https://leetcode.com/problems/find-resultant-array-after-removing-anagrams

class Solution {
public:
    vector<string> removeAnagrams(vector<string>& v) {
        vector<string>ans;
        string a="";
        for(int i=0;i<v.size();i++){
            // ["abba","baba","bbaa","cd","cd"]
            string s=v[i];
            string t= a;
            sort(s.begin(),s.end());
            sort(t.begin(),t.end());
            if(s!=t){
             ans.push_back(v[i]);   
            }
            a=v[i];
        }
        return ans;
    }
};