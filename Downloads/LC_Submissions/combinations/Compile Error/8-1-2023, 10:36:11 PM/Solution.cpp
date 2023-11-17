// https://leetcode.com/problems/combinations

class Solution {
public:
    vector<vector<int>> ans;
    
    void helper(int idx, int k,vector<int>&current,int n)
    {
        if(current.size()==k)    // base case
        {
            ans.push_back(current);
            return;
        }
        
        for(int i=idx;i<n+1;i++)
        {
            current.push_back(i);  //consider the current element i
            helper(i+1,k,current,n); // generate combinations
            current.pop_back(); //proceed to next element
        }
    }
    
    vector<vector<int>> combine(int n, int k) {
        vector<int>current;
        helper(1,k,current,n);
        return ans; //return answer
    }
    
    
};
        if(ind>n-1){if(v.size()==k){
            ans.push_back(v);
        }
                 return ;}
        if(v.size()==k){
            ans.push_back(v);
            return ;
        }
        v.push_back(a[ind]);
        fxn(ans,n,k,v,ind+1,a);
        v.pop_back();
    }
    
    vector<vector<int>> combine(int n, int k) {
        vector<int>a(n-1,0);
        for(int i=0;i<n-1;i++){
            a[i]=i+1;
        }
        vector<int>v;
       vector< vector<int>>ans;
        fxn(ans,n,k,v,0,a);
        return ans;