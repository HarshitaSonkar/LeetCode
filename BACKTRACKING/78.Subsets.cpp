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
             return;
         }
        ans.push_back(nums[i]);
        subsets(nums, res, ans, i+1);
        ans.pop_back();
        subsets(nums, res, ans, i+1);
        
     }
};
