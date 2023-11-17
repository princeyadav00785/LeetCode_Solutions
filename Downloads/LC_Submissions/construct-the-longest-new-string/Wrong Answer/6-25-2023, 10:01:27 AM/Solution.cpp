// https://leetcode.com/problems/construct-the-longest-new-string

class Solution {
public:
    int longestString(int x, int y, int z) {
        long long int ans=z;
        if(y>x){
            ans+= 2*x+1;
        }else ans +=2*y+1;
        return 2*ans;
    }
};














//  X  Y       Z
// AA BB AA BB AA AB
// BB AA BB AA BB AB
