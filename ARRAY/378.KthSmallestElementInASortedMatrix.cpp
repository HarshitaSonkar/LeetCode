class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int x;
        int count=0;
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[i].size(); j++){
                x=matrix[i][j];
                count++;
                if(count==k)
                    return x;
                
            }
        }
       return 0; 
    }
};
