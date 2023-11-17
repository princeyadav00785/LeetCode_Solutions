// https://leetcode.com/problems/add-to-array-form-of-integer

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int ans =0;
        // int a=1;
        for(int i=0;i<num.size();i++){
             ans =ans*10;
            ans+=num[i];
           
        }
        ans=ans+k;
        cout<<ans;
      vector<int> v;
      int d=0;
       while(ans>0){
           d=ans%10;
           v.push_back(d);
           ans=ans/10;
       }
       vector v2(v.size(),0);
       for(int i=0;i<v.size();i++){
           v2[i]=v[v.size()-i-1];
       }


    
    return v2;
    }
};