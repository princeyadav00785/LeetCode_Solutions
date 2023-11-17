// https://leetcode.com/problems/number-of-burgers-with-no-waste-of-ingredients

class Solution {
public:
    vector<int> numOfBurgers(int t, int c) {
        vector<int>ans;
        if(t%2!=0)return ans;
        int a=0,b=0;
        a= t/2- c;
        b= c-a;
        if(a<0||b<0)return ans;
        ans.push_back(a);
        ans.push_back(b);
        return ans;
    }
};