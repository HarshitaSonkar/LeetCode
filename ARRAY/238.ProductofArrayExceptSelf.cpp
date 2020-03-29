class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int>res;
        int mul=1;
        int x;
        int c=0;
        for(int i=0;i<nums.size();i++){
           if(nums[i]==0){
                c++;
           }else{
                mul=mul*nums[i];
               }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                if(c==1){
                    nums[i]=mul;
                }else{
                    nums[i]=0;
                }
            }else{
                if (c>0){
                         nums[i]=0;
               }else{
                     nums[i]=(mul/(nums[i]));
                }
           }
        }
        return nums;
    }
};
