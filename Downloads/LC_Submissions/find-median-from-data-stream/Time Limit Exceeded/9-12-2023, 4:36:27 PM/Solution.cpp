// https://leetcode.com/problems/find-median-from-data-stream

class MedianFinder {
public:
    vector<double>v;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        double d= (double)num;
        v.push_back(d);
    }
    
    double findMedian() {
        sort(v.begin(),v.end());
        int n=v.size();
        cout<<n<<" ";
        if(n%2!=0)return v[n/2];
        else return (v[n/2]+v[n/2-1])/2.0;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */