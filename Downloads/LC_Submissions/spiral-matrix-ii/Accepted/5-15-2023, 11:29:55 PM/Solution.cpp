// https://leetcode.com/problems/spiral-matrix-ii

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n,vector<int>(n,0));
        int right=n-1,left=0,top=0,down=n-1,k=1;
        while(top<=down &&left<=right){
            for(int i=left;i<=right;i++){
                ans[top][i]=k++;
            }
            top++;
           
            for(int i=top;i<=down;i++){
                ans[i][right]=k++;
            }
            right--;
            
             if (top <= down) {
            for(int i=right;i>=left;i--){
                ans[down][i]=k++;
            }
            down--;
             }
            
            if(left<=right)
           { for(int i= down;i>=top;i--){
                ans[i][left]=k++;
            }left++;}
            
        }
        
        
        return ans;
    }
};