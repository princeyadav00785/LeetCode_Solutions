// https://leetcode.com/problems/boats-to-save-people

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        // map<int,int> mp;
        // sort(v.begin(),v.end());
        // int cnt=0,c=2;
        //             int sum=0;
        // for(int i=0;i<v.size();i++){
        //     mp[v[i]]++;
        // }
        // for(int i=0;i<v.size();i++){
        //  if(c==0){
        //      c=2;
        //  }
            // if(2*v[i]<=k){
            //     if(mp[k-v[i]]>0){
            //         cnt++;
            //         mp[k-v[i]]--;
            //     }
            // }else cnt++;
//             sum+=v[i];
//                cout<<sum<<" ";
//             if(sum>k||c>0){
//                 sum=0;
//                  cnt=cnt+2;
             
//             }
//              if(sum=k||c>0){
//                 sum=0;
//                  cnt=cnt++;
               
//             }
//             c--;
//         }
//         return cnt;
                int boats = 0;

        // Sort people in ascending order
        sort(people.begin(), people.end()); // O(n log n)
        
        // Two Pointer from two ends. 
        // lightPtr is the current lightest person
        // heavyPtr is the current heaviest person
        int lightPtr = 0;
        for(int heavyPtr = people.size() - 1; heavyPtr >= 0 && lightPtr <= heavyPtr; heavyPtr--) { // O(n)
            // Put in the current lightest person if possible
            if(people[lightPtr] + people[heavyPtr] <= limit) lightPtr++;
            
            // Increment number of boats
            boats++;
        }

        return boats;
    }
};