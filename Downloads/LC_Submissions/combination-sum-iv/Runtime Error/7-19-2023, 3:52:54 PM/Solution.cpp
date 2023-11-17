// https://leetcode.com/problems/combination-sum-iv

class Solution {
public:
//         void fxn(vector<int>&c,int k,int ind,int &cnt){
       
//         if(ind==c.size()){
//             if(k==0){cnt++;}
//             return;
//             }
        
//         if(c[ind]<=k){
           
//             fxn(c,k-c[ind],ind,cnt);
           
            
//         }
//              fxn(c,k,ind+1,cnt);
        
        
//     }
      void fxn(vector<int>&c,int k,vector<int>v ,vector<vector<int>>&ans,int ind){
       
        if(ind==c.size()){
            if(k==0){ans.push_back(v);}
            return;
            }
        
        if(c[ind]<=k){
            v.push_back(c[ind]);
            
            fxn(c,k-c[ind],v,ans,ind);
            v.pop_back();
            
        }
             fxn(c,k,v,ans,ind+1);
        
        
    }
    long long  fact(int n){
        long long  ans=1;
        for(int i=1;i<=n;i++){
            ans=ans*i;
        }
        return ans;
    }
    
    long long cnt (vector<int>v){
        long long  n= v.size();
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[v[i]]++;
        }
        long long x= 1;
        for(auto y:mp){
            x=x*fact(y.second);
        }
    long long l = fact(n)/x;
        return l;
    }
    
    
    int combinationSum4(vector<int>& c, int k) {
        // int cnt=0;
        // fxn(c,k,0,cnt);
        // return cnt;
         vector<vector<int>>ans;
        vector<int>v;
        fxn(c,k,v,ans,0);
        long long a=0;
        for(int i=0;i<ans.size();i++){
            a+= cnt(ans[i]);
        }
            return a;
    }
};