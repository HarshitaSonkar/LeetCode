class Solution {
public:
    int minSetSize(vector<int>& arr) {
        
        int ssize = 0;
        int res = 0;
        int n = arr.size();
        unordered_map<int, int>mp;
        for(auto &i : arr)
               mp[i]++;
        
        priority_queue<int> pq;
    
        for(auto &freq : mp)
            pq.push(freq.second);
        
        while(!pq.empty() && ssize < n/2){
            
            int curr = pq.top();
            pq.pop();
            ssize += curr;
            res++;
        }
        return res;
    }
};
