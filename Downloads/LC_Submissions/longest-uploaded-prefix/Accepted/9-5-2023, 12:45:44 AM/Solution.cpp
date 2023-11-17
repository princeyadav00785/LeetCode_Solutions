// https://leetcode.com/problems/longest-uploaded-prefix

class LUPrefix {
public:
    int x = 1;
    vector<bool> v;
    LUPrefix(int n) {
        v.resize(100002,false);
    }
    
    void upload(int video) {
        v[video] = true;
        while(v[x]==true){
            x++;
        }
    }
    
    int longest() {
        return x-1;
    }
};