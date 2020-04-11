class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
 
        for (int i=0; i<matrix.size(); i++){
             for (int j=0; j<i; j++){
                  swap(matrix[i][j], matrix[j][i]);  //transpose
             }
        }
   
        for (auto & row: matrix)  {
        reverse(row.begin(), row.end());  //reverse
        }
        
        
        /*    for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                matrix[j][i]=matrix[2-i][j];
            }
        }
       */
    }
};
