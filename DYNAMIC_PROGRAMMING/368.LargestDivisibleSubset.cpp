class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        
        int n = nums.size();
        if (n == 0) 
            return {};
        
        sort(nums.begin(), nums.end());
        
        vector<int>vect(n, 1);
        
        vector<int>parent(n, 0);
        
        int mxlen = 0, mxindex = 0;
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (nums[i] % nums[j] == 0) {
                    if (vect[i] < 1 + vect[j]) {
                       vect[i] = 1 + vect[j];
                        parent[i] = j; 
                    }
                }
            }
            if (vect[i] > mxlen) {
                mxlen = vect[i];
                mxindex = i;
            }
        }
        
        vector<int>res;
        for (int i = 0; i < mxlen; i++) {
            res.push_back(nums[mxindex]);
            mxindex = parent[mxindex];
        }
        
        return res;
        
    }
};
