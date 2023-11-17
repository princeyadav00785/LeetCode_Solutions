// https://leetcode.com/problems/word-search

class Solution {
public:
    // bool fxn(vector<vector<char>>& v, string w,int a,int i, int j ){
    //     if(i<0||j<0||i>=v.size()||j>=v[0].size()||v[i][j]!=w[a]||v[i][j]=='!')return false;
    //     if(a==w.size())return true;
    // char c= v[i][j];
    //     v[i][j]='!';
    //     a++;
    //  bool m=   fxn(v,w,a,i+1,j);
    //         bool b=    fxn(v,w,a,i-1,j);
    //           bool l=  fxn(v,w,a,i,j+1);
    //            bool d= fxn(v,w,a,i,j-1);
    //     v[i][j]=c;
    //     return m||b||l||d;
    // }
    bool fxn(vector<vector<char>>& v, string w, int a, int i, int j) {
    if (i < 0 || j < 0 || i >= v.size() || j >= v[0].size() || v[i][j] != w[a])
        return false;

    if (a == w.size() - 1)
        return true;

    char c = v[i][j];
    v[i][j] = '!'; // Mark the current cell as visited

    bool m = fxn(v, w, a + 1, i + 1, j); // Down
    bool b = fxn(v, w, a + 1, i - 1, j); // Up
    bool l = fxn(v, w, a + 1, i, j + 1); // Right
    bool d = fxn(v, w, a + 1, i, j - 1); // Left

    v[i][j] = c; // Restore the original character

    return m || b || l || d;
}
    bool exist(vector<vector<char>>& v, string w) {
        
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[0].size();j++){
                if(v[i][j]==w[0]){
                    if(fxn(v,w,0,i,j))return true;
                }
            }
        }
        return false;
    }
};