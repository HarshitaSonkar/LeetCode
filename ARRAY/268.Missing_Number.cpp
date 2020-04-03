class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int x=nums.size();
        int sum=(x*(x+1))/2;
        
        return sum-accumulate(nums.begin(),nums.end(),0);
        
    }
};
