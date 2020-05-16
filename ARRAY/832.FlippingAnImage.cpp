class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        
         for (int j=0;j<A.size();j++){
            for (int i=0;i<A[j].size()/2;i++){
                swap (A[j][i],A[j][A[j].size()-1-i]);
            } 
        }
        // invert each element
        for (int i=0;i<A.size();i++){
            for (int j=0;j<A[0].size();j++){
                A[i][j]==1?A[i][j]=0:A[i][j]=1; 
            }
        }
        return A;
    }
};
