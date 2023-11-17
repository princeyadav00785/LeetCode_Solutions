// https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length

class Solution {
public:
    int maxVowels(string s, int k) {
      deque<char> dq;
        int cnt=0,ans=0;
        for(int i =0;i<k;i++){
            dq.push_back(s[i]);
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='e'||s[i]=='u')
                cnt++;
        }
        
        for(int i=k;i<s.length();i++){
        char c= dq.front();
            dq.pop_front();
              if(c=='a'||c=='e'||c=='i'||c=='e'||c=='u')
                cnt--;
            dq.push_back(s[i]);
              if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='e'||s[i]=='u')
                cnt++;
            ans = max(ans,cnt);
        }
        
        return ans;
    }
    
};