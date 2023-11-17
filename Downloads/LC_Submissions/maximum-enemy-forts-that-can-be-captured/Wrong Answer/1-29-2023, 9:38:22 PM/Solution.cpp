// https://leetcode.com/problems/maximum-enemy-forts-that-can-be-captured

class Solution {
public:
    int captureForts(vector<int>& forts) {
        int cnt =0;
        int maxdis=0;
        int pastval=0;
        for(int i=0;i<forts.size();i++){
            
            if(pastval ==0&&forts[i]==1){
              
                pastval=1;
            }  if(pastval ==0&&forts[i]==-1){
                
                pastval=-1;
            }
            
              if(pastval ==1&&forts[i]==0){
                cnt++;
               
            }
              if(pastval ==1&&forts[i]==-1){
                maxdis = max(cnt,maxdis);
                  cnt =0;
                pastval=-1;
            }
              if(pastval ==-1&&forts[i]==0){
                cnt++;
              
            }
              if(pastval ==-1&&forts[i]==1){
                maxdis = max(cnt,maxdis);
                  cnt=0;
                pastval=1;
            }
            
        
        }
        return maxdis;
    }
};