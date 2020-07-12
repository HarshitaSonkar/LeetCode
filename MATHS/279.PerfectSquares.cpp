class Solution {
public:
    int numSquares(int n) {
        
         /*** first: you must initialize the dp-array ***/
        
        static vector<int> dp({0});
        
        /*** the-array-start-from-1 ***/
        
        if(dp.size() >= n+1)  
            return dp[n];
        
        /*** dp[n] means the dp.size()=n+1 ***/
        
        while(dp.size()<=n+1){
            
            /*** the-j-should-start-from-1 ***/
            
            int temp=INT_MAX;
            for(int j=1; j*j<=dp.size(); j++)
                temp=min(temp, dp[dp.size()-j*j]+1);
            dp.push_back(temp);
        }
        return dp[n];
    }
};
