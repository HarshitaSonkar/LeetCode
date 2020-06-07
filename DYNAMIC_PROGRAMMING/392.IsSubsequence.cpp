class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int m = s.length();
        int n = t.length();
        int dp[m+1][n+1];
        int res = INT_MIN;
        
        for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
                if(i==0||j==0){
                    dp[i][j]=0;
                    res=max(dp[i][j],res);
                }
                else if(s[i-1]==t[j-1]){
                    dp[i][j]=dp[i-1][j-1]+1;
                    res=max(dp[i][j],res);  
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                    res=max(dp[i][j],res);
                }
            }
        }
        if(res == m)
        {
            return true;
        }
        return false;
    }
};
    
/*     WITHOUT DP
        int n = s.size();
        int m = t.size();
        int i = 0;
        int j = 0;
        
        while(i < s.size() && j < t.size())
        {
            if(s[i] == t[j])
            {
                i++;
                j++;
            }
            else
                j++;
        }
        return (i == n);
    }
    
};             */
