// https://leetcode.com/problems/capacity-to-ship-packages-within-d-days

class Solution {
public:
    int fxn(int n,vector<int>&w){
        int sum=0,cnt=1;
        for(int i=0;i<w.size();i++){
            if(sum+w[i]>n){
                cnt++;
                sum=0;
                sum+=w[i];
            }else{
                sum+=w[i];
            }
        }
      
        
        return cnt;
    }

    int shipWithinDays(vector<int>& w, int k) {
        int l=0,h=0;
        for(int i=0;i<w.size();i++){
            if(w[i]>l)l=w[i];
            h+=w[i];
        }

        while(l<=h){
            long long mid = (h+l)/2;
            if(fxn(mid,w)<=k){
                h=mid-1;
                
            }else  {
                l=mid+1;
            }
        }
        
        return l;
    }
};
   
 // while (low <= high) {
 //        int mid = (low + high) / 2;
 //        int numberOfDays = findDays(weights, mid);
 //        if (numberOfDays <= d) {
 //            //eliminate right half
 //            high = mid - 1;
 //        }
 //        else {
 //            //eliminate left half
 //            low = mid + 1;
 //        }
 //    }
 //    return low;
