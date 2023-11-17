// https://leetcode.com/problems/prime-pairs-with-target-sum

class Solution {
public:
      
vector<int> SieveOfEratosthenes(int n)
{
    vector<int>v;
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
  
    for (int p = 2; p * p <= n; p++) {

        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
 
    for (int p = 2; p <= n; p++)
        if (prime[p])
            v.push_back(p);
    
    return v;
}
    
    vector<vector<int>> findPrimePairs(int n) {
        vector<int> nums= SieveOfEratosthenes(n);
        vector<vector<int>>ans;
        int i=0,j=nums.size()-1;
        while(i<=j){
            if(nums[i]+nums[j]==n){
                vector<int>tmp;
                tmp.push_back(nums[i]);
                tmp.push_back(nums[j]);
                ans.push_back(tmp);
                i++;
                j--;
            }else if(nums[i]+nums[j]<n){
                i++;
            }else j--;
        }
        
        return ans;
    }
};