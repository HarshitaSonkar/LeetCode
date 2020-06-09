class NumArray {
public:
    vector<int> res = {0};
    
    NumArray(vector<int>& nums) {
        for(int k=0; k < nums.size(); k++) {
            res.push_back(nums[k] + res.back());
        }
    }
    
    int sumRange(int i, int j) {
        return res[j + 1] - res[i];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */
