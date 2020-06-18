class Solution {
public:
    string frequencySort(string s) {
  
      
        unordered_map<char,int> mp;
        for(auto i : s){
            mp[i]++;
        }
        priority_queue<pair<int, char>> pq;
        for(auto i : mp){
            pq.push({i.second, i.first});
        }
        string sol = "";
        int val;
        while(!empty(pq)) {
            val = pq.top().first;
            while(val) {
                sol += pq.top().second;         // sol += pq.top().second  NOT  sol = so; + pq.top().second 
                val--;
            }
            pq.pop();
        }
        return sol;                   
    }
    
};
