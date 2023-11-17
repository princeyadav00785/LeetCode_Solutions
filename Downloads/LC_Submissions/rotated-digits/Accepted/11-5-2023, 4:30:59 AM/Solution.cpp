// https://leetcode.com/problems/rotated-digits

class Solution {
public:
    int ans = 0;
 
    map<int, int> mp;

    void fxn(int n) {

        string s = to_string(n);
        string l = "";
        int m = s.length();
        for (int i = 0; i < m; i++) {
            int a = s[i] - '0';
            int b = mp[a];
            if (b == -1) {
                return; // Break the loop if b is -1
            } else {
                char c = (b + '0');
                l += c;
            }
        }

        if (l.empty()) {
            return; // Handle the case where 'l' is empty
        }

        int x = stoi(l);
        if (s != l) {
            cout<<l<<endl;
              ans++;
        }
    }

    int rotatedDigits(int n) {
  
        mp.insert({0, 0});
        mp.insert({1, 1});
        mp.insert({2, 5});
        mp.insert({3, -1});
        mp.insert({4, -1});
        mp.insert({5, 2});
        mp.insert({6, 9});
        mp.insert({7, -1});
        mp.insert({8, 8});
        mp.insert({9, 6});

        for (int i = 1; i <= n; i++) {
            fxn(i);
        }
        return ans;
    }
};
