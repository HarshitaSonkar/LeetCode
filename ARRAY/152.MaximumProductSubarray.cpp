class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
       int x = nums[0];
       int y = nums[0];
       int ans = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            int mx = max(x * nums[i], max(y * nums[i], nums[i]));
            int mn = min(y * nums[i], min(x * nums[i], nums[i]));
            ans = max(mx, ans); 
            x = mx; 
            y = mn;
        } 
        return ans;
    }
};
