// https://leetcode.com/problems/minimum-operations-to-make-a-special-number

class Solution {
public:
    int minimumOperations(string num) {
        string s=num;
        int ans=INT_MAX;
        for(int i=num.length()-1;i>0;i--){
            if(s[i]=='5'){
                cout<<i<<" ";
                int b=0,j=i-1;
                while(j>=0){
                    if(s[j]=='2'||s[j]=='7'){
                        cout<<j<<" j"<<endl;
                        
                        int cc= num.length()-i-1+(i-j-1);
                        cout<<cc;
                        ans=min(ans,cc);
                        
                    }
                    j--;
                }
            }
            
        }
          for(int i=num.length()-1;i>0;i--){
        if(s[i]=='0'){
               cout<<i<<" ";
                int b=0,j=i-1;
                  while(j>=0){
                      
                    if(s[j]=='0'||s[j]=='5'){
                            cout<<j<<" j"<<endl;
                        int cc=  num.length()-i-1;
                        cout<<cc<<" ";
                            cc+=(i-j-1);
                         cout<<cc<<" ";
                        ans=min(ans,cc);
                        
                        
                    }
                      j--;
                }
            }
          }
        
        if(ans==INT_MAX){
        for(int i=0;i<s.length();i++){
          if(s[i]=='0')
              ans= s.length()-1;
        }}
        if(ans==INT_MAX)return s.length();
        return ans;
    }
};

