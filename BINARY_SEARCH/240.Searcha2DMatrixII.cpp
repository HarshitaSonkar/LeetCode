class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       
        int x = matrix.size();
        if(x < 1) return false;
        
        int y = matrix[0].size();
        if(y < 1) return false;
        
        int i = 0; 
        int j = y-1;
        
        while(i < x && j >= 0){
            if(matrix[i][j] == target)
                return true;
            
            else if(matrix[i][j] > target){
                j--;
            }
            else
                i++;
        }
        return false;              
    }
};
/* 
    int m = matrix.size();
    if(m<1) return false;
    int n = matrix[0].size();
    if(n<1) return false;
    
    int i=0;
    while(i<m && target >= matrix[i][0])
    {
        int low = 0;
        int high = n;
        while(low < high)
        {
            int mid = (low+high)/2;
            if(matrix[i][mid] > target)
                high = mid;
            else if(matrix[i][mid] < target)
                low = mid+1;
            else
                return true;
        }
        ++i;
    }
    return false;
*/
        
