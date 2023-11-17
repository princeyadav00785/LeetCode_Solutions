// https://leetcode.com/problems/find-median-from-data-stream

class MedianFinder {
public:
    // vector<double>v;
    priority_queue<double>q;
    int n=0;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        double d= (double)num;
        // v.push_back(d);
        q.push(d);
        n++;
    }
    
    double findMedian() {
        // sort(v.begin(),v.end());
        // int n=v.size();
        // cout<<n<<" ";
        priority_queue<double>p=q;
        if(n%2!=0)
            // return v[n/2];
        {
            int k= n/2;
            while(k--){
               p.pop(); 
            }
            double ans= p.top();
            return ans;
            
        }
        else 
            // return (v[n/2]+v[n/2-1])/2.0;
        {
         int k= n/2-1;
            while(k--){
                p.pop();
            }
            double a=p.top();
            p.pop();
            double b= p.top();
            return (a+b)/2.0;
            
        }
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */