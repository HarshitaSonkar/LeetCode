class Solution {
public:
    int rob(vector<int>& nums) {
        
        vector<int> dp;
        if(nums.size()==0)
            return 0;
        else if(nums.size()==1)
            return nums[0];
        for(int i=0; i<nums.size(); i++)
        {
            if(i<2)
            {
                dp.push_back(nums[i]);
            }
            else
            {
                dp.push_back(nums[i] + max(dp[dp.size()-2], dp.back() - nums[i-1]));
            }
        }
        return max(dp.back(), dp[dp.size()-2]);
    }
};
