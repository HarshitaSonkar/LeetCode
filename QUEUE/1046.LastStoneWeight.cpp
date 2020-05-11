class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        priority_queue<int> pq;
        int n = stones.size();
        
        for(int i=0; i<n; i++)
            pq.push(stones[i]);
        
        while(!pq.empty())
        {
            if(pq.size() == 1)
                return pq.top();
            
            int y = pq.top();
            pq.pop();
            
            int x = pq.top();
            pq.pop();
            
            if(x != y)
                pq.push(y - x);
        }
        
        if(pq.size() == 0)
            return 0;
        return pq.top();
    }
};
