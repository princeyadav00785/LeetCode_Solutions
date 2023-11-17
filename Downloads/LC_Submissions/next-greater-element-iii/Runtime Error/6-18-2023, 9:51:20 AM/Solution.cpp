// https://leetcode.com/problems/next-greater-element-iii

class Solution {
public:
    void fxn( string s, vector<string>&v,int i,int n){
        if(i==n-1){
            v.push_back(s);
            return;
        }
        for(int j=i;j<n;j++){
            swap(s[i],s[j]);
             fxn(s,v,i+1,n);
            swap(s[i],s[j]);
        }
       
    }
    
    int nextGreaterElement(int n) {
        vector<string>v;
        
        string s=to_string(n);
        fxn(s,v,0,s.size());
        sort(v.begin(),v.end());
        int ind=-1;
        for(int i=v.size()-1;i>-1;i--){
            if(v[i]==s){
                ind =i;
                break;
            }
        }
        
        // for(int i=0;i<v.size();i++){
        //     cout<<v[i]<<" ";
        // }
        // cout<<ind;
        string t="";
        if(ind==v.size()-1)return -1;
        else t= v[ind+1];
        // cout<<t;
        int ans=0;
        for(int i=0;i<t.size();i++){
            
            ans= (t[i]-'0')+ans*10;
            cout<<t[i]-'0';
        }
        return ans;
    }
};

// 3 4 5 6 1 2 3