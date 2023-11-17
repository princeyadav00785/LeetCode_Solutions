// https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length

class Solution {
public:
    int maxVowels(string s, int k) {
      deque<char> dq;
        int cnt=0,ans=0;
        for(int i =0;i<k;i++){
            dq.push_back(s[i]);
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                cnt++;
        }
        ans =  cnt;
        for(int i=k;i<s.length();i++){
        char c= dq.front();
            dq.pop_front();
              if(c=='a'||c=='e'||c=='i'||c=='e'||c=='u')
                cnt--;
            dq.push_back(s[i]);
              if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                cnt++;
            ans = max(ans,cnt);
        }
        
        return ans;
        
        //         unordered_set<char> st;
        // st.insert('a');
        // st.insert('e');
        // st.insert('i');
        // st.insert('o');
        // st.insert('u');
        // queue<int> q;
        // int count = 0;
        // for(int i = 0; i < k; i++){
        //     char cur = s[i];
        //     if(st.find(cur) != st.end()){
        //         count++;
        //     }
        //     q.push(cur);
        // }
        // int ans = count;
        // for(int i = k; i < s.length(); i++){
        //     char top = q.front();
        //     q.pop();
        //     if(st.find(top) != st.end()){
        //         count--;
        //     }
        //     char cur = s[i];
        //     if(st.find(cur) != st.end()){
        //         count++;
        //     }
        //     q.push(cur);
        //     ans = max(ans, count);
        // }
        // return ans;

    }
    
};