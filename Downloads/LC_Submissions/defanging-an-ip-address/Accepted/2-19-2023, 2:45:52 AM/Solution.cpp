// https://leetcode.com/problems/defanging-an-ip-address

class Solution {
public:
    string defangIPaddr(string address) {
       string a;
       
        for(int i=0;i<address.size();i++){
            if(address[i]=='.'){
                a.push_back('[');
                a.push_back('.');
                a.push_back(']');
            }if(address[i]!='.'){
                a.push_back(address[i]);
            }
        }
        return a;
    }
};