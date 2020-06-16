class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
       for(int i=1; i<nums.size(); i++)
            nums[i]+=nums[i-1];
        return nums;
    }
 };
        
          /*   int sum=0;
        vector<int> res;
        for(int i=0; i<nums.size(); i++){
            sum = sum + nums[i];
            res.push_back(sum);
        }
       return res;      
     }    */
    
