// https://leetcode.com/problems/find-the-array-concatenation-value

class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
    long long  int ans=0;
        for(int i=0;i<nums.size()/2;i++){
            string a= to_string(nums[i]);
            string b= to_string(nums[nums.size()-i-1]);
            cout<<a<<" "<<b<<" ";
            a=a+b;
          long long   int t= stoi(a);
            ans+=t;
        }
        cout<<ans;
        if(nums.size()%2!=0)ans+= nums[nums.size()/2];
        
        return ans;
    }
};

// [5,14,13,8,12]
