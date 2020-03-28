class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        if(nums.size()==0){
            return 0;
        }
        if(nums.size()==1){
            return nums[0];
        }
        int psum=INT_MIN;
        int csum=0;
        
        for(int i=0;i<nums.size();i++){
            
            csum=csum+nums[i];
            
            if(nums[i]>csum){
                psum=max(psum,nums[i]);
                csum=nums[i];
            }else{
                psum=max(psum,csum);
            }
        }
        
      return max(csum,psum);  
    }
};
