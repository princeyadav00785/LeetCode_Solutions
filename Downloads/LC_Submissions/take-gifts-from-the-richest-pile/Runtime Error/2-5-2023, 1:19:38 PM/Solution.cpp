// https://leetcode.com/problems/take-gifts-from-the-richest-pile

class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        for(int i=0;i<k;i++){
            sort(gifts.begin(),gifts.end());
            gifts[gifts.size()-1]= pow(gifts[gifts.size()-1],0.5);
            
        }
    int sum=0;
    
   for(int i=0;i<gifts.size();i++){
       sum += gifts[i];
       cout<<gifts[i]<<" ";
   }

    return sum;
}
};




// 4 9 25 64 100
// 4  9   5  8   10