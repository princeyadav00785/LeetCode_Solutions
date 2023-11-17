// https://leetcode.com/problems/minimum-speed-to-arrive-on-time

class Solution {
    int value(vector<int>&a ){
        int max1 = max(a);
        double sum = 0; 
        for(int i = 0; i<a.size(); i++){
            if(a[i]%max1 != 0){
                sum = a[i]/max1+1;
            }else sum = a[i]/max1;
            // sum += (double)(a[i]/max1);
        }
        return sum;
    }
    
    int max(vector<int>&a){
        int max = a[0];
        for(int i  = 0; i < a.size();i++){
            if(a[i]>max){
                max = a[i];
            }
        }
        return max;
    }
        int min(vector<int>&a){
        int min = a[0];
        for(int i  = 0; i < a.size();i++){
            if(a[i]<min){
                min = a[i];
            }
        }
            return min;
    }
public:
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int answer = -1;
        if(hour>dist.size()){
            
        }
       else  if(hour==dist.size()){
              int b = max(dist);
                 answer= b;
         }
        else if(hour<dist.size()){
             int a = value(dist);
            
            cout<<a;
             if(a<hour){
                 answer -1;
             }else{
                 int c = max(dist);
                 answer= c;
             }
         }
        return answer;
        
    }
};