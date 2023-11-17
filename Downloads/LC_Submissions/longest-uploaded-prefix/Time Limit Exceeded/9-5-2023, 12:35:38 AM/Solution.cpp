// https://leetcode.com/problems/longest-uploaded-prefix

class LUPrefix {
public:
   vector<int>arr;
    map<int,int>mp;
    LUPrefix(int n) {
        arr.resize(n);
    }
    
    void upload(int video) {
        mp[video]++;
    }
    
    int longest() {
        int ans=0;
        for(int i=1;i<100000;i++){
            if(mp[i]!=0)ans=i;
            else break;
        }
        return ans;
    }
};

/**
 * Your LUPrefix object will be instantiated and called as such:
 * LUPrefix* obj = new LUPrefix(n);
 * obj->upload(video);
 * int param_2 = obj->longest();
 */