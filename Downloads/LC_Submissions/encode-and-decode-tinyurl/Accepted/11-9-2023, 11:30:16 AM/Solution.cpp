// https://leetcode.com/problems/encode-and-decode-tinyurl

class Solution {
public:
   map<int,string>mp;
    int i=1;
    string encode(string longUrl) {
        mp[i]=longUrl;
        string ans= to_string(i++);
        return ans;
    }

    string decode(string shortUrl) {
        int a= stoi(shortUrl);
        string res= mp[a];
        return res;
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));