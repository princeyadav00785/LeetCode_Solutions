class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int ans=0;
        if(s2.length()<s1.length())return  false;
        vector<int>v1(26,0);
        vector<int>v2(26,0);
        for(int i=0;i<s1.length();i++)v1[s1[i]-'a']+=1;
        for(int i=0;i<s1.length();i++)v2[s2[i]-'a']+=1;
        
        if(v1==v2)ans++;
        int k=0;
        for(int i=s1.length();i<s2.length();i++){
            v2[s2[i]-'a']++;
            v2[s2[k++]-'a']--;
            if(v1==v2)
            ans++;
        }

        return (ans>0)?true:false;
    }
};