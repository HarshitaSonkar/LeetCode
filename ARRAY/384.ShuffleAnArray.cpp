class Solution {
    vector<int> sol;
    vector<int> res;
public:
    Solution(vector<int>& nums) {
         sol = nums;
         res = nums;
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return sol;
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
       random_shuffle(res.begin(), res.end());         // It is used to randomly rearrange the elements in range [left, right).
        return res;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */
