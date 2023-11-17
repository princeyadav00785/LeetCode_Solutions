// https://leetcode.com/problems/find-resultant-array-after-removing-anagrams

class Solution {
public:
    vector<string> removeAnagrams(vector<string>& s) {
     set<string> a;
        for(int i=0;i<s.size();i++){
            string t= s[i];
            sort(t.begin(),t.end());
            a.insert(t);
        }
        vector<string>ans(a.begin(),a.end());
        return ans;
    }
};