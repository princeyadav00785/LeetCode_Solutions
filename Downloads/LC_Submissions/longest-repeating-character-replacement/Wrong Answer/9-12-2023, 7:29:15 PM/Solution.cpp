// https://leetcode.com/problems/longest-repeating-character-replacement

class Solution {
public:
    int characterReplacement(string s, int k) {
        int cnt=0,mxm=0;
        for(int i=0;i<s.length();i++){
            int x=k,j=i;
            char c=s[i];
            while(x>=0&&j<s.length()){
                if(s[j++]!=c)x--;
                if(x>-1)
                mxm=max(mxm,j-i);
              
               
                cout<<j<<" "<<i<<endl;
             
            }
        }
        return mxm;
    }
};