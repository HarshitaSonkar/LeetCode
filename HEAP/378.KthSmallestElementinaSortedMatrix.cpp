class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int x;
        int count=0;
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[i].size(); j++){
                pq.push(matrix[i][j]);
            }
        }
        int z = k-1;
               while(z--)
               {
                   x = pq.top();
                   pq.pop();
               } 
                return pq.top(); 
    }
};

/*
 int m = matrix.size(), n = matrix[0].size();
        priority_queue<int, vector<int>> pq;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                pq.emplace(matrix[i][j]);
                if (pq.size() > k) {
                    pq.pop();
                }
            }
        }
        int result = pq.top();
        return result;
 */
