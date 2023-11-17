// https://leetcode.com/problems/largest-number-after-digit-swaps-by-parity

class Solution {
public:
    int largestInteger(int num) {
        string s= to_string(num);
        vector<int>odd;
        vector<int>even;
        vector<int>odd1;
        vector<int>even1;
        for(int i=0;i<s.length();i++){
            int a= s[i]-'0';
            if(a%2==0){even.push_back(i);
                      even1.push_back(a);}
            else {odd1.push_back(a);
                  odd.push_back(i);}
        }
        sort(odd1.begin(),odd1.end(),greater<int>());
        sort(even1.begin(),even1.end(),greater<int>());
        vector<int>ans(s.length(),0);
        int l=0,m=0;
        for(int i=0;i<odd.size();i++){
            ans[odd[i]]=odd1[l++];
        }
         for(int i=0;i<even.size();i++){
            ans[even[i]]=even1[m++];
        }
        
        string c="";
        for(auto x:ans){
            char o= x+'0';
            c+=o;
        }
        // int answer =0;
        int answer= stoi(c);
    return answer;
    }
};