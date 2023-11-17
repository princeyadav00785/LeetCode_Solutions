// https://leetcode.com/problems/destroying-asteroids

class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& a) {
      sort(a.begin(),a.end());
        long long  sum =mass;
        for(auto x:a){
            if(x>sum)return false;
            sum+=x;
        }
        return true;
    }
};