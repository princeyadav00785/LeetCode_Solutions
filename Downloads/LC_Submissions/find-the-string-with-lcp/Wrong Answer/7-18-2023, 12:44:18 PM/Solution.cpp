// https://leetcode.com/problems/find-the-string-with-lcp

class Solution {
public:
    string findTheString(vector<vector<int>>& v) {
        int n =  v.size();
        vector<int>a(n,0);
        for(int i=0;i<n;i++){
          a[i]=i;}
       
        string ans="";
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j){
                    if(v[i][j]!=n-i)return ans;
                }else{
                    if(v[i][j]==v[j][i]&&v[i][j]!=0){
                        int k= min(i,j);
                        a[i]=a[k];
                        a[j]=a[k];
                    }
                    
                }
            }
        }
        // for(auto x: a){
        //     cout<<x<<" ";
        // }
        map<int,char>mp;
   
        char c= 'a';
        
        for(int i=0;i<n;i++){
           if(mp.find(a[i])==mp.end()){mp[a[i]]=c;c++;}
        }
        for(auto x:mp){
            cout<<x.first<<"->"<<x.second<<endl;
        }
        for(int i=0;i<n;i++){
            ans+= mp[a[i]];
        }
        
        
        return ans;
    }
};