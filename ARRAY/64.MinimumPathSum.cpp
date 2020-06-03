class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        
        if(grid.empty())
            return 0;
        
        int m = (int)grid.size();
        int n = (int)grid[0].size();
        vector<vector<int>> dist(m, vector<int>(n));
        
        for(int i=m-1; i>=0; i--)
            for(int j=n-1; j>=0; j--){
                if(i==m-1 && j==n-1)
                    dist[i][j] = grid[i][j];
                
                else if(i==m-1)
                    dist[i][j] = dist[i][j+1] + grid[i][j];
                
                else if(j==n-1)
                    dist[i][j] = dist[i+1][j] + grid[i][j];
                
                else
                    dist[i][j] = grid[i][j]+ min(dist[i+1][j], dist[i][j+1]);
                
            }
        return dist[0][0];
        
    }
};
