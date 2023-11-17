// https://leetcode.com/problems/watering-plants

class Solution {
public:
    int wateringPlants(vector<int>& p, int c) {
        long long int ans=0;
        int sum =0,cap=c;
        for(int i=0;i<p.size();i++){
            if(sum+p[i]<=cap){ans++;sum+=p[i];}
            else{
                ans+=2*(i+1)-1;
                sum=p[i];
            }
            // cout<<ans<<"-> ";
            cout<<sum<<"s-> ";
        }
        return ans;
    }
};