// https://leetcode.com/problems/two-out-of-three

class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
    unordered_map<int,pair<bool,pair<bool,bool>>> mp;
        for(auto i:nums1){
            mp[i].first=true;
        }
        for(auto i:nums2){
            mp[i].second.first=true;
        }  
        for(auto i:nums3){
            mp[i].second.second=true;
        }

        vector<int> ans;
        for(auto i: mp){
            int no=0;
            if(i.second.first==true){
                no++;
            }
            if(i.second.second.first==true){
                no++;
            }
            if(i.second.second.second==true){
                no++;
            }
            if(no>1){
                ans.push_back(i.first);
            }
        }          
        return ans;
    }
};