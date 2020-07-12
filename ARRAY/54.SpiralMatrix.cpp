class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
  
       vector<int> res;
        int row = matrix.size();
        
        if(row == 0) 
            return {};
        
        int col = matrix[0].size();
        
        int r = 0;
        int c = 0;
        
        while(r < row && c < col)
        {
            for(int i = c; i<col; i++)
                res.push_back(matrix[r][i]);
                r++;
            
            for(int i = r; i < row; i++)
                res.push_back(matrix[i][col-1]);
                col--;
            
            if(r < row)
            {
                for(int i = col-1; i >= c; i--)
                    res.push_back(matrix[row-1][i]);
                row--;
            }
            
            if(c < col)
            {
                for(int i = row-1; i >= r; i--)
                    res.push_back(matrix[i][c]);
                c++;
            }
        }
        return res;
    }
};
