class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        
       std::vector<std::vector<int>> v(n,std::vector<int>(m,0));
        for(int k = 0; k < indices.size(); k++){
            for(int i = 0; i < m; i++){
                v[indices[k][0]][i]++;
            }
            
            for(int j = 0; j < n; j++){
                v[j][indices[k][1]]++;
            }
        }
        
        int count = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(v[i][j]%2 == 1) 
                   count++;
            }
        }
        
        return count;
    }
};
