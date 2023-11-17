// https://leetcode.com/problems/number-of-employees-who-met-the-target

class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int ans=0;
        sort(hours.begin(),hours.end());
        int a=  lower_bound(hours.begin(),hours.end(),target)-hours.begin();
        if(a==hours.size())return 0;
        if(hours[a]==target){
            ans=hours.size()-a;
        }else ans= hours.size()-a-1;
        return ans;
    }
};

// [5,1,4,2,2], target = 6