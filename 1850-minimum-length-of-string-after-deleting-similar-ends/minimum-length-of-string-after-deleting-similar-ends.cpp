class Solution {
public:
    int minimumLength(string s) {
        int i=0,j=s.length()-1;
        while(i<=j){
            char a= s[i],b=s[j];

            if(a==b&&i!=j){            while(s[i]==a&&i<=j){i++;}
            while(s[j]==b&&j>=i)j--;}
            else break;
            
        }
        cout<<i<<" "<<j<<endl;
        if(i>j)return 0;
        else if(i==j)return 1;
        else
        return j-i+1;
    }
};