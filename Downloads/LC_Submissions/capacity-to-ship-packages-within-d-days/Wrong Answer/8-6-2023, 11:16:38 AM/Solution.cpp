// https://leetcode.com/problems/capacity-to-ship-packages-within-d-days

class Solution {
public:
    int fxn(int n,vector<int>&w){
        int sum=0,cnt=0;
        for(int i=0;i<w.size();i++){
            if(sum+w[i]>n){
                cnt++;
                sum=0;
                sum+=w[i];
            }else{
                sum+=w[i];
            }
        }
        if(sum!=0)cnt++;
        
        return cnt;
    }
    int shipWithinDays(vector<int>& w, int k) {
        int l=0,h=0;
        for(int i=0;i<w.size();i++){
            if(w[i]>l)l=w[i];
            h+=w[i];
        }
        int ans=0;
        while(l<=h){
            long long mid = (h+l)/2;
            if(fxn(mid,w)<k){
                h=mid-1;
                ans=mid;
            }else  if(fxn(mid,w)>k){
                l=mid+1;
            }else {
                ans=mid;
                break;
            }
        }
        
        return ans;
    }
};