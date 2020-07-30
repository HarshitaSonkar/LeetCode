class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int S) {
        
        int sum = accumulate(nums.begin(), nums.end(), 0);
       
        int n = nums.size();
    
        int s1, s2;
        
        if(sum < S || (S + sum) % 2 != 0) {
            return 0;
        }
        sum = (S + sum)/ 2;
        
    int dp[n + 1][sum + 1];
    
    for(int i=0; i<=n; i++){
        for(int j=0; j<=sum; j++){
            if(i == 0)
                dp[i][j] = 0;
            if(j == 0)
                dp[i][j] = 1;
        }
    }
    
    for(int i=1; i<=n; i++){
        for(int j=0; j<=sum; j++){
            
            if(nums[i-1] <= j){
                dp[i][j] = (dp[i-1][j-nums[i-1]]) +  dp[i-1][j];
            }
            else
                dp[i][j] = dp[i-1][j];
        }
    }
    return dp[n][sum];            
        
       
        
    }
    
};
