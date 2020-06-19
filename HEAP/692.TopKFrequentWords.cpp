class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<string> res;
        priority_queue<pair<string,int>, vector<pair<string,int>>, myComp> pq;
        unordered_map<string, int> mp;
        
        for(string s : words)
            mp[s]++;
        
        for(const auto& i : mp)
        {
            if(pq.size() < k)
            {
                pq.push(i);
                continue;
            }
            
            if(pq.top().second > i.second)
                continue;
            if(pq.top().second == i.second && (pq.top().first < i.first)) 
                continue;
            pq.pop();
            pq.push(i);
        }
        
        while(!pq.empty())
        {
            res.push_back(pq.top().first);
            pq.pop();
        }
        
        reverse(res.begin(), res.end());
        return res;
    }
    
    struct myComp
    {
        bool operator()(pair<string, int> a, pair<string, int> b)
        {
            if(a.second == b.second) return (a < b);
            return a.second > b.second;
        }
    };
};
