class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
        int i,j;
        int n = cost.size();
        int x=0,y=0,x1;
        for(i=0; i<n; i++){
            x1 = cost[i] + min(x,y);
            
            y = x;
            x = x1;
        }
        return min(x,y);
        
        /*
        ******************************************************************************
          for (int i = 2; i < cost.size(); i++) {
            cost[i] += min(cost[i - 1], cost[i - 2]);            
        }
        return min(cost[cost.size() - 1], cost[cost.size() - 2]);
        */
        /*
        *******************************************************************************
        int n=cost.size();
        int dp[n+1];
        dp[0]=cost[0];
        dp[1]=cost[1];
        cost.push_back(0);
        
        for(int i=2;i<=n;i++)
        {
            dp[i]=min(dp[i-1]+cost[i],dp[i-2]+cost[i]);
            
        }
        return dp[n];
        */
    }
};
