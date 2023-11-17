// https://leetcode.com/problems/prime-palindrome

class Solution {
public:
    bool isPrime(long long x){
        if(x==0||x==1)
            return false;
        if(x==2||x==3)
            return true;
        if(x%2==0||x%3==0)
            return false;
        for(long long i=5;i*i<=x;i=i+6){
            if(x%i==0||x%(i+2)==0)
                return false;
        }
        return true;
    }
    
    bool pal(long long x){
        long long num=0;
        long long n=x;
        while(n){
        num=num*10+(n%10);
            n=n/10;
        }
        if(x==num)
            return true;
        else
            return false;
    }
    
    int primePalindrome(int n) {
        if(n>9989899)
            return 100030001;
        for(long long i=n;;i++){
            if(pal(i)&&isPrime(i)){
                return i;
            }
        }
    }
};
