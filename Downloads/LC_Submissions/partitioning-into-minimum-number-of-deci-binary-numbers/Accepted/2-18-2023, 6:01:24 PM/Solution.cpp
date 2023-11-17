// https://leetcode.com/problems/partitioning-into-minimum-number-of-deci-binary-numbers

class Solution {
public:
    int minPartitions(string n) {
        int mimimum = -999;
        for(int i=0;i<n.length();i++){
            if((n[i]-'0')>mimimum){
                mimimum = n[i]-'0';
            }
        }
        return mimimum;
    }
};