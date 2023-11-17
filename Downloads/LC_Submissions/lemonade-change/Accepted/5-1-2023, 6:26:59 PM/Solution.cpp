// https://leetcode.com/problems/lemonade-change

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
           if(bills[0]!=5)
        {return false;
        
        }
        int arr[3];
        int n=bills.size();

        for(int i=0;i<n;i++)
        {
             if(bills[i]==5)
             {
                 arr[0]++;
             }
             else if(bills[i]==10)
             {
               arr[1]++;
                 int x=5;
                 if(arr[0]>=1)
                 {
                     arr[0]--;
                 }
             }
             else if(bills[i]==20)
             {
                 arr[2]++;
                 int x=15;
                 if(arr[1]>=1)
                 {
                     if(arr[0]>=1)
                     {
                         arr[1]--;
                         arr[0]--;
                     }
                     else
                    { return false;}
                 }
                 else if(arr[1]<1 and arr[0]>=3)
                 {
                     arr[0]=arr[0]-3;
                 }
                 else
                 {
                     return false;
                 }
             }}
        return true;
    }
};