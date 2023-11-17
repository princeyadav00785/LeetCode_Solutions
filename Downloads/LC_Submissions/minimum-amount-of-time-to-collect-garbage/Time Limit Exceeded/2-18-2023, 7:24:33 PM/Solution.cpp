// https://leetcode.com/problems/minimum-amount-of-time-to-collect-garbage

class Solution {
    int cnt(string s , char a){
     int ans =0;
     for(int i=0;i<s.length();i++){
         if(s[i]==a){
             ans++;
         }
     }
     return ans;
    }
    int sum(vector<int> v , int a,int b){
        int ans =0;
        for(int i=a;i<=b;i++){
            ans +=v[i];
        }
        return ans;
    }
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int tp=0;
        int tg=0;
        int tm=0;
int index=0;
         for(int i=0;i<garbage.size();i++){
             
             int a= cnt(garbage[i],'P');
             if(a>0&&i!=0){
                 tp+= sum(travel, index,i-1)+a;
                //  cout<<sum(travel, index,i-1);
                 index = i;
             }
             if(a>0&&i==0){
                 tp+=a;
             }
         }

 int index2=0;
           for(int i=0;i<garbage.size();i++){
              
             int a= cnt(garbage[i],'G');
             if(a>0&&i!=0){
                 tg+= sum(travel, index2,i-1)+a;
                 
                 index2 = i;
             }
             if(a>0&&i==0){
                 tg+=a;
             }
             
           
         }


int index3=0;

           for(int i=0;i<garbage.size();i++){
               
             int a= cnt(garbage[i],'M');
             if(a>0&&i!=0){
                  tm+= sum(travel, index3,i-1)+a;
                 
                 index3 = i;
             }
             if(a>0&&i==0){
                 tm+=a;
             }
             cout<<tm<<" ";
         }
         cout<<tg<<" "<<tp<<" "<<tm;
          return tp+tg+tm;

    }
};