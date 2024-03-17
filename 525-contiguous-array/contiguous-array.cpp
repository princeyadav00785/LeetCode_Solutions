class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int z=0,o=0, ans=0;
        map<int,int>mp;
        mp[0]=-1;
        for(int i=0;i<nums.size();i++){
         nums[i]==0 ?++z:++o;
            int df=z-o;
            if(mp.find(df)!=mp.end()){
                ans=max(ans,i-mp[df]);
            } else {
                mp[df] = i;
            }
        
        }
        return ans;

    }
};