// https://leetcode.com/problems/last-visited-integers

class Solution {
public:
    vector<int> lastVisitedIntegers(vector<string>& s) {
        vector<int>ans;
        vector<int>v;
        int c=0;
        for(int i=0;i<s.size();i++){
            if(s[i]!="prev"){
                int x= stoi(s[i]);
                v.push_back(x);
                c=0;
            }else{
                c++;
                int n= v.size();
                // cout<<c<<n<<endl;
                if(c>n)ans.push_back(-1);
                else{
                    
                    ans.push_back(v[n-c]);
                }
            }
            
            
            
            }
        return ans;
    }
    
};