class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
       int i=nums.size();
        int a=nums[i-1];
        int b=nums[i-2];
        int c=nums[i-3];
        int mul=(a*b)*c;
        
        return max(nums[0]*nums[1]*nums[i-1],mul);
    }
};
