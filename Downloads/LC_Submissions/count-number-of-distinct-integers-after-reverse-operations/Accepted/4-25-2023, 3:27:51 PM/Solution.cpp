// https://leetcode.com/problems/count-number-of-distinct-integers-after-reverse-operations

class Solution {
public:
//     2456
   int reverse(int k){
       int digit=0,ans=0;
       while(k>0){
           digit=k%10;
           ans = digit+ans*10;
           k=k/10;
       }
       return ans;
   }
    int countDistinctIntegers(vector<int>& nums) {
        int cnt=0;
        set<int>s;
        for(int i=0;i<nums.size();i++){
            cout<<reverse(nums[i])<<" ";
            s.insert(nums[i]);
         s.insert(reverse(nums[i]));
        }
        cnt=s.size();
        return cnt;
    }
};