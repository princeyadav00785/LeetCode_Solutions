// https://leetcode.com/problems/decremental-string-concatenation

class Solution {
//      aa ab
public:
    int minimizeConcatenatedLength(vector<string>& words) {
        int cnt=0, n= words.size();
        string b= words[0];
        cnt+=b.size();
        for(int i=1;i<n;i++){
            string c= words[i];
            if(b[b.size()-1]==c[0]){
                cnt+= c.size()-1;
                b+=c;
            }else {
                if(b[0]==c[c.size()-1]){
                    b= c+b;
                     cnt+= c.size()-1;
                }else {
                     cnt+= c.size();
                    b+=c;
                }
                
            }
        }
        
        return cnt;
        
    }
};