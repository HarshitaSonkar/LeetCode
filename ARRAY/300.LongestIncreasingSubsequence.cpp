class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        if(nums.size() == 0)
            return 0;
        vector <int> res(nums.size(), 1);
        
        int i = 1;
        int j = 0;
        int x;
         
        for(i = 1; i<nums.size(); i++){
            for(j=0; j<i; j++){
            
            if(nums[i] > nums[j] && res[i] < res[j] + 1)
                res[i] = res[j] + 1;
               
            }
        }
        x = *max_element(res.begin(), res.end());
        
        return x; 
    }
};
