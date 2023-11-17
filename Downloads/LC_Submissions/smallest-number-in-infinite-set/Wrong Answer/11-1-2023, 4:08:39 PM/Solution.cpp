// https://leetcode.com/problems/smallest-number-in-infinite-set

class SmallestInfiniteSet {
public:
    priority_queue<int,vector<int>,greater<int>>q;
    vector<int>v;
    SmallestInfiniteSet() {
        v.resize(1e6);
        for(int i=1;i<1e6;i++){
            q.push(i);
            v[i]=1;
                              }
        
    }
    
    int popSmallest() {
        int t=q.top();
        q.pop();
        v[t]=0;
        return t;
    }
    
    void addBack(int num) {
        if(!v[num])
        q.push(num);
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */