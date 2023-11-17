// https://leetcode.com/problems/find-the-prefix-common-array-of-two-arrays

class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> ans;
        map<int,int>mp1;
        map<int,int> mp2;
        int cnt=0;
        for(int i=0;i<A.size();i++){
            mp1[A[i]]++;
            mp2[B[i]]++;
             cnt=0;
            for(auto x:mp1){
                if(mp2[x.first]!=0){cnt++;}
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};