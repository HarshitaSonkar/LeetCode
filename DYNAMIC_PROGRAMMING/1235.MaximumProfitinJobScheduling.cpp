bool mycomp(pair<pair<int, int>, int> a, pair<pair<int, int>, int> b){
    return (a.first.second) < (b.first.second);
}

class Solution {
public:
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
       
       vector<pair<pair<int, int>, int>> vect;
        int n = profit.size();
        
        for(int i = 0; i < n; i++){
            vect.push_back(make_pair(make_pair(startTime[i], endTime[i]), profit[i]));
        }
        
        sort(vect.begin(), vect.end(), mycomp);
        
        int res = INT_MIN;
        
        vector<int> dp(n);
        dp[0] = vect[0].second;
        
        for(int i = 1; i < n; i++){
            
            dp[i] = max(dp[i - 1], vect[i].second);
                 
                for(int j = i - 1; j >= 0; j--){
                    if(vect[i].first.first >= vect[j].first.second){
                        dp[i] = max(dp[i], vect[i].second + dp[j]);
                            break; 
                    }
                }
            res = max(res, dp[i]);
        }
        return res;
    }
};
