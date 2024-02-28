class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
      vector<int>v(nums.size(),0);
        int sum=0;
        
                 for(int i=0;i<nums.size();i++){
                    if(nums[i]%2==0)nums[i]=0;
                    else nums[i]=1;
                }
        for(int i=0;i<nums.size();i++){
          sum+=nums[i];
            v[i]=sum;
        }
        map<int,int>mp;
        mp[0]=1;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            
            if(mp.find(v[i]-k)!=mp.end()){
                cnt+=mp[v[i]-k];
            }
            mp[v[i]]++;
        }
        return cnt;
    }
};
//     int subarraySum(vector<int>& nums, int k) {
//         vector<int> v(nums.size(), 0);
//         int sum = 0;

//         for (int i = 0; i < nums.size(); i++) {
//             sum += nums[i];
//             v[i] = sum;
//         }

//         map<int, int> mp;
//         int ans = 0;

//         mp[0] = 1;

//         for (int i = 0; i < nums.size(); i++) {
//             if (mp.find(v[i] - k) != mp.end()) {
//                 ans += mp[v[i] - k];
//             }
            
//             mp[v[i]]++;
//         }

//         return ans;
//     }
// };