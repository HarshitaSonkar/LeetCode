class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
 // solution 1
        long long int r=A.size(),c=A[0].size(),i,j;
   vector row(r,false); 
   vector col(c,false); 
   for(i=0;i<r;i++)
     {
       for(j=0;j<c;j++)
          {
            if(A[i][j]==0)
              {
                row[i]=true; 
                col[j]=true; 
               }
           }
     }
    for(i=0;i<row.size();i++) // setting all the elements in respective rows with zero…
       {
        if(row[i])
        for(j=0;j<c;j++)
        A[i][j]=0;
    }
    for(i=0;i<col.size();i++) // setting all the elements in respective columns with zero…
     {
         if(col[i])
         for(j=0;j<r;j++)
         A[j][i]=0;
      }
  }
};
        
        

        
 // solution 2
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



// solution 3
        
        int tmp = -1, n = matrix.size(), m = matrix[0].size(); 
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
        }  
        
  
