// https://leetcode.com/problems/palindrome-number

class Solution {
   
public:
    bool isPalindrome(int x) {
        bool answer = true;
    
        if(x<0){
            answer = false;
        }else if(x==0){
            answer = true;
        }else{
            int count  = 0;
            while(x>0){
                x = x/10;
                count +=1;
            }
            int arr[count];
            for(int i = 0; i <count ; i++){
                int digit = x%10;
                x = x/10;
                arr[i]= digit;
            }
            for(int i = 0; i < count ; i++){
                if(arr[i]!=arr[count -1- i]){
                    answer = false;
                }
            }
            
            
}
        return answer;
    }
};