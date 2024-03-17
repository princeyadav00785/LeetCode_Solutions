class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        // int z=0,o=0, ans=0;
        // map<int,int>mp;
        // mp[0]=-1;
        // for(int i=0;i<nums.size();i++){
        //  nums[i]==0 ?++z:++o;
        //     int df=z-o;
        //     if(mp.find(df)!=mp.end()){
        //         ans=max(ans,i-mp[df]);
        //     }
        // }
        // return ans;
         unordered_map<int, int> hashmap;
        int zeros = 0, ones = 0, max_len = 0;
        
        hashmap[0] = -1;
        
        for (int i = 0; i < nums.size(); ++i) {
            nums[i] == 0 ? ++zeros : ++ones;
            int diff = zeros - ones;
            
            if (hashmap.count(diff)) {
                max_len = max(max_len, i - hashmap[diff]);
            } else {
                hashmap[diff] = i;
            }
        }
        
        return max_len;
    }
};