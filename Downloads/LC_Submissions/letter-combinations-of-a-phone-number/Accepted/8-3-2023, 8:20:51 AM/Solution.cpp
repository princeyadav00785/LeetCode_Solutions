// https://leetcode.com/problems/letter-combinations-of-a-phone-number

// class Solution {
// public:
//     vector<string> letterCombinations(string digits) {
//      int n = digits.length();
//         n=n-1;
//         vector<string>ans;
//         vector<string>v(10);
//          v[9]= "wxyz";
//         v[2]="abc";
//         v[3]="def";
//         v[4] ="ghi";
//         v[5]="jkl";
//         v[6]="mno";
//         v[7]="pqrs";
//         v[8]="tuv";
//         // cout<<digits[0];
//         // cout<<v[stoi(digits[0])];
//        // char a= digits[0];
//        //  int m = a-'0';
//        //  cout<<m;
//         while(n--){
//             int a=0;
//             for(int i=0;i<v[digits[a]-'0'].size();i++){
//                  string s="";
//                      char m=v[digits[a]-'0'][i];
//                 s+=m;
//                 for(int j=0;j<v[digits[a+1]-'0'].size();j++){
//                     char l=v[digits[a+1]-'0'][j];
//                     string t= s+l;
//                     ans.push_back(t);
//                 }
//             }
//         }
//         return ans;
//     }
// };

class Solution {
public:
    const vector<string> pad = {
        "", "", "abc", "def", "ghi", "jkl",
        "mno", "pqrs", "tuv", "wxyz"
    };
    
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
		vector<string> result;
        result.push_back("");
        
        for(auto digit: digits) {
            vector<string> tmp;
            for(auto candidate: pad[digit - '0']) {
                for(auto s: result) {
                    tmp.push_back(s + candidate);
                }
            }
            result.swap(tmp);
        }
        return result;
    }};
