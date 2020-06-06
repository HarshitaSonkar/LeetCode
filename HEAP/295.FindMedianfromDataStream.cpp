class MedianFinder {
public:
    /** initialize your data structure here. */
    priority_queue<int>pq_max;
    priority_queue<int, vector<int>, greater<int>>pq_min;  // using one minheap and one maxheap
   
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        
        if (pq_max.empty())
            pq_max.push(num);
        
        else if (pq_max.size() == pq_min.size()) {
            if (pq_min.top() < num) {
                pq_max.push(pq_min.top());
                pq_min.pop();
                pq_min.push(num);
            }else {
                pq_max.push(num);
            }
        }
        else {
            if (pq_max.top() < num) {
                pq_min.push(num);
            }else {
                pq_min.push(pq_max.top());
                pq_max.pop();
                pq_max.push(num);
            }
        }
    }   
    double findMedian() {
        
       if (pq_max.size() == pq_min.size())
           return ((double)pq_max.top() + (double)pq_min.top()) / 2;
       else 
        return pq_max.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
