// https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary

class Solution {
public:
    double average(vector<int>& salary) {
        double sum=0;
        sort(salary.begin(),salary.end());
        for(int i=1;i<salary.size()-1;i++){
         sum+=salary[i];   
        }
        return (double)(1.00000)*sum/(salary.size()-2);
    }
};