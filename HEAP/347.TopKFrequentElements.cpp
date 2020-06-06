class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        vector<int> res;
        unordered_map<int, int> mp;
        
        for(int i : nums)
            mp[i]++;
        
        priority_queue<pair<int, int>, vector<pair<int,int>>, myComp> pq(mp.begin(), mp.end());
        
        while(!pq.empty() && k--)
        {
            auto& p = pq.top();
            res.push_back(p.first);
            pq.pop();
        }
        return res;
    }
    
    struct myComp {
        bool operator()(pair<int, int> const & a,pair<int, int> const & b) 
        { 
             return a.second < b.second; 
         }
    };
};
        

        
        
        
        
        /*   unordered_map<int,int> mp;
        for(int i : nums) {
            ++mp[i];
        }
        multimap<int,int> mpp;
        for(auto x = mp.begin(); x != mp.end(); ++x) {
            if (mpp.size() < k) {
                mpp.insert({x->second, x->first});
            } else if((mpp.begin())->first < x->second) {
                
                mpp.erase(mpp.begin());
                mpp.insert({x->second, x->first});
            }
        }
        vector<int> res;
        for(auto x = mpp.begin(); x != mpp.end(); ++x) {
            res.push_back(x->second);
        }
        return res;
    }
};             */
         
        
    
      /*  
      vector<int> res(k, 0);
      unordered_map<int, int> mp;
        
      // Get frequencies
        
      for(const int i : nums) 
          mp[i]++;
      
      // Insert into a PQ, but keep size of PQ <= k
        
      priority_queue<pair<int, int>, vector<pair<int,int>>, myComp> pq;
        
      for (const auto& numAndFreq : mp)
      {
        if (pq.size() < k)
        {
          pq.push(numAndFreq);
          continue;
        }
          
        const auto& p = pq.top();
          
        if (p.second >= numAndFreq.second) 
            continue;
          pq.pop();
          pq.push(numAndFreq);
      }
        
      // PQ now has <= k elements, so pop all of them
        
      int i = 0;
      while(!pq.empty())
      {
        const auto& p = pq.top();
        res[i++] = p.first;
        pq.pop();
      }
      return res;
    }
    
    struct myComp
    {
      bool operator()(pair<int, int> const& a, pair<int, int> const& b)
      {
        if (a.second != b.second) 
            return a.second > b.second;
          return a.first < b.first;
      }
    };
};
             */
        
        /*  priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;
        vector<int> v;
        unordered_map<int, int> counters;
        for(int i = 0; i < nums.size(); ++i) counters[nums[i]]++;
        for(auto& pair: counters) 
        {
            minHeap.push({pair.second, pair.first});
            if(minHeap.size() > k) minHeap.pop();
        }
        while(!minHeap.empty())
        {
            v.push_back(minHeap.top().second);
            minHeap.pop();
        }
        return v;
        }                 */
    
