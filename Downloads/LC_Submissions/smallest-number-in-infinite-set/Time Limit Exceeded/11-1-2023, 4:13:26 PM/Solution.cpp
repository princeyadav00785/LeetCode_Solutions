// https://leetcode.com/problems/smallest-number-in-infinite-set

class SmallestInfiniteSet {
public:
    priority_queue<int,vector<int>,greater<int>>q;
  map<int,int>mp;
    SmallestInfiniteSet() {
       
        for(int i=1;i<1e6;i++){
            q.push(i);
        mp[i]++;
                              }
        
    }
    
    int popSmallest() {
        int t=q.top();
        q.pop();
        mp[t]--;
        return t;
    }
    
    void addBack(int num) {
        if(mp[num]==0)
        q.push(num);
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */