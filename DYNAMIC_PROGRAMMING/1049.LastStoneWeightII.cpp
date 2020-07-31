class Solution {
public:
    int lastStoneWeightII(vector<int>& stones) {
        
        int n = stones.size();
        
        int sum = accumulate(stones.begin(), stones.end(), 0);
        
        int sum1 = sum / 2;
        
        //int dp[n + 1][sum1 + 1];
        vector<vector<int>> dp(n + 1, vector<int>(sum1 + 1));
        
        for(int i = 0; i <= n; i++){
            for(int j = 1; j <= sum1; j++){
                if(i == 0)
                    dp[i][j] = 0;
                if(j == 0)
                    dp[i][j] = 1;
            }
        }      
        
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= sum1; j++){
                if(stones[i-1] <= j)
                dp[i][j] = max(dp[i - 1][j - stones[i - 1]] + stones[i-1], dp[i - 1][j]);
                else
                    dp[i][j] = dp[i - 1][j];
            }
        }
        return sum - 2 * dp[n][sum1];
        
    }
};
