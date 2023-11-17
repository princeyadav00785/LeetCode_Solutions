// https://leetcode.com/problems/apply-operations-to-make-two-strings-equal

class Solution {
public:
    int minOperations(string s1, string s2, int x) {
        int a=0,b=0;
        for(int i=0;i<s1.length();i++){
            if(s1[i]=='1')a++;
        }
        for(int i=0;i<s2.length();i++){
            if(s2[i]=='1')b++;
        }
        if(a!=b)return -1;
 int n = s1.length();
    int cost = 0;

    for (int i = 0; i < n; ++i) {
        if (s1[i] != s2[i]) {
            if (i + 1 < n && s1[i + 1] != s1[i] && s2[i + 1] != s2[i]) {
                // Option 1: Flip s1[i] and s1[i+1] together.
                cost += x;
                s1[i] = s2[i];
                s1[i + 1] = s2[i + 1];
            } else {
                // Option 2: Flip s1[i] alone.
                cost += 1;
                s1[i] = s2[i];
            }
        }
    }

    if (s1 == s2) {
        return cost;
    } else {
        return -1; // It's impossible to make them equal.
    }
    }
};