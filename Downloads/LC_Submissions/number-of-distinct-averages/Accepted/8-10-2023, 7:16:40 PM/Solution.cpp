// https://leetcode.com/problems/number-of-distinct-averages

class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<double>s;
        int l=0,h=nums.size()-1;
        while(l<h){
            int a=nums[l++];
            int b=nums[h--];
            a=a+b;
            double c= (double)a;
            c=c/2;
            s.insert(c);
        }
        return s.size();
    }
};