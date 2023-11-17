// https://leetcode.com/problems/find-peak-element

class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        int ans = 0;
        if(arr.size()==1){
            ans = 0;
        }
        if(arr.size()==2&&arr[0]>arr[1]){
            ans = arr[1];
        }else{ans = arr[0];}
        
       if(arr.size()>2){ for(int i = 1; i< arr.size(); i++){
          if(arr[i]>arr[i-1]&&arr[i]>arr[i+1]){
              ans = i;
          }       
         }
                     }
        return ans;
    }
};