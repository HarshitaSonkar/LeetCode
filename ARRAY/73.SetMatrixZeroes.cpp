class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        bool row = false, col = false;
        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix[0].size(); j++){
                if(matrix[i][j] == 0) {
                    if(i == 0) 
                        row = true;
                    if(j == 0) 
                        col = true;
                    matrix[0][j] = matrix[i][0] = 0;
                }
            }
        }
        for(int i = 1; i < matrix.size(); i++){
            for(int j = 1; j < matrix[0].size(); j++){
                if(matrix[i][0] == 0 || matrix[0][j] == 0) matrix[i][j] = 0;
            }
        }
        if(col){
            for(int i = 0; i < matrix.size(); i++)
                matrix[i][0] = 0;
        }
        if(row){
            for(int j = 0; j < matrix[0].size(); j++)
                matrix[0][j] = 0;
        }                          
    }
};




        
   /*     int tmp = -1, n = matrix.size(), m = matrix[0].size(); 
        for(int i = 0 ; i < n; i++)
        {
            if(matrix[i][0] == 0)//when first column of that row is zero
                tmp = 0;
            for(int j = 1; j < m; j++)
                if(matrix[i][j] == 0)
                    matrix[i][0] = matrix[0][j] = 0;//first row and first column = 0
        }
        
        for(int i = n - 1; i >= 0; i--)
        {
            for(int j = m-1; j >= 1; j--)
                if(matrix[i][0] == 0 || matrix[0][j] == 0)
                    matrix[i][j] = 0;
            if(tmp == 0)//first coumn zero
                matrix[i][0] = 0;                       
        }  */
        
  
