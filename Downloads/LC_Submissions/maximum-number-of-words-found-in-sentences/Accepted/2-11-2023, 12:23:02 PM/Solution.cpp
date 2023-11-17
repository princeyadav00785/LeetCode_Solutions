// https://leetcode.com/problems/maximum-number-of-words-found-in-sentences

class Solution {
    public:
    int cnt(string s ){
        int c=1;
        for(int i=0;i<s.length();i++){
            if(s[i]==' '&&s[i+1]!=' '){
                c++;
            }
        }
        return c;
    }
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans =0;
        for(int i=0;i<sentences.size();i++){
            ans = max(ans , cnt(sentences[i]));
        }
        return ans;
    }
};