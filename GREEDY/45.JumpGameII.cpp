class Solution {
public:
    int jump(vector<int>& nums) {
        
        int n = nums.size();
        int max_reach = 0, max_end = 0, ans = 0;
        
        for (int i = 0; i < n-1; i++) {
            max_reach = max(max_reach, i + nums[i]);
            if (max_end == i) {
                ans++;
                max_end = max_reach;
            }
        }
        
        return ans;
    }
};
