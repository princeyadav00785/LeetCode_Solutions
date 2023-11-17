// https://leetcode.com/problems/implement-magic-dictionary

class MagicDictionary {
public:
     map<string,int>mp;
    MagicDictionary() {
       
    }
    
    void buildDict(vector<string> d) {
        for(int i=0;i<d.size();i++){
            mp[d[i]]++;
        }
    }
    
    bool search(string W) {
        int mnm=INT_MAX;
        for(auto x:mp){
           if(W.length()==x.first.length()){
               int cnt=0;
               for(int i=0;i<W.length();i++){
                   if(W[i]!=x.first[i])cnt++;
               }
               if(cnt)
               mnm=min(mnm,cnt);
           } 
                      }
        if(mnm==1)return true;
        return false;
    }
};

/**
 * Your MagicDictionary object will be instantiated and called as such:
 * MagicDictionary* obj = new MagicDictionary();
 * obj->buildDict(dictionary);
 * bool param_2 = obj->search(searchWord);
 */