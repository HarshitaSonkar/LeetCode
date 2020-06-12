class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> res;
        vector<int>ans;
        subsets(nums, res, ans, 0);
        return res;
    }
    
private:
    void subsets(vector<int>&nums, vector<vector<int>>&res, vector<int>&ans, int i){
         if(i == nums.size()){
             res.push_back(ans);
             return;                                         // once we reach the end, add it to the result
         }
        // for every element we have two choices : keep it or drop it
        ans.push_back(nums[i]);                             //   choice 1, keep it
        subsets(nums, res, ans, i+1);
        ans.pop_back();                                    // choice 2, drop it
        subsets(nums, res, ans, i+1);
        
     }
};
