class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        
        vector<vector<int>> nums(n, vector<int>(m, 0));
        int count = 0;
        
        for(int i = 0; i < indices.size(); i++){
            for(int j = 0; j < m; j++){
                nums[indices[i][0]][j] += 1;
            }
        }
        
        for(int i = 0; i < indices.size(); i++){
            for(int j = 0; j < n; j++){
                nums[j][indices[i][1]] += 1;
            }
        }
    
        for(auto vec : nums){
            for(auto num : vec){
                if(num % 2 != 0) 
                    count++;
            }
        }

        return count;
    }
};
