// https://leetcode.com/problems/longest-palindromic-substring

// class Solution {
// public: 
//     int dp[1001][1001];
//     int fxn(string s,string t,int n){
//         for(int i=0;i<=n;i++){
//             for(int j=0;j<=n;j++){
//                 if(i==0||j==0){
//                     dp[i][j]=0;
//                 }
//                 else{
//                     if(s[i-1]==t[j-1]){
//                         dp[i][j]=1+dp[i-1][j-1];
//                     }else {
//                         dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
//                         // dp[i][j]=0;
//                     }
//                 }
//             }
//         }
//         return dp[n][n];
//     }
    
//     string fxn2(string s,int n){
//         string a="";
//         int i=n,j=n;
//         while(i>1||j>1){
//             if(dp[i][j]==dp[i-1][j-1]){
//                 a.push_back(s[i]);
//                 i--;
//                 j--;
//             }else if(dp[i][j]==dp[i-1][j]){
//                 i--;
//             }else j--;
//         }
//         return a;
//     }
     
//     string longestPalindrome(string s) {
//      string t=s;
//         int n= s.size();
//         reverse(t.begin(),t.end());
//         int a= fxn(s,t,n);
//     cout<< a<<" ";
       
//        string ans = fxn2(s,n);
//         return ans;
//     }
// };



class Solution {
public:
    string longestPalindrome(string s) {
        string str;
        int res=0;
        string s1=s;
        string s2=s;
        reverse(s2.begin(), s2.end());
        int m=s1.size();
        int n=s2.size();
        int t[m+1][n+1];
		//initialization
        for(int i=0; i<m+1; i++)
            for(int j=0; j<n+1; j++)
            {
                if(i==0 || j==0)
                    t[i][j]=0;
            }
        
        //filing t matrix keep checking when last compared is equal that is the point of doubt and we will do some 
		//calculation or something 
		
        for(int i=1; i<m+1; i++)
            for(int j=1; j<n+1; j++)
            {
                if(s1[i-1]==s2[j-1])
                {
                    t[i][j]=1+t[i-1][j-1];
                    if(res<t[i][j])
                    {
                        string temp=s.substr(i-t[i][j],t[i][j]);
                        string temp2=temp;
                        reverse(temp2.begin(), temp2.end());
                        if(temp==temp2) //we just want to check if matched substring is palindrome or not
                        {
                        res=t[i][j];
                        str=temp;
                        }
                    }
                }
                else
                    t[i][j]=0;
            }
        return str;
        
        
    }
};