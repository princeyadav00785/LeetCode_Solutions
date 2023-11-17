// https://leetcode.com/problems/reverse-words-in-a-string

class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
                int j=i;
                string a="";
                while(s[j]!=' '&&j<s.size()){
                    a+=s[j++];
                }
                v.push_back(a);
                  i=j;
            }
          
        }
         reverse(v.begin(),v.end());
           string ans ="";
        for(int i=0;i<v.size();i++){
           // ans += v[i]+" ";
            if(i!=v.size()-1){
                ans += v[i]+" ";  
            }else {
                ans +=v[i];
            }
        }
       // ans +=v[v.size()-1];
        
     
        return ans;
    }
};