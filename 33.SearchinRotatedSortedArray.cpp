class Solution {
public:
    int search(vector<int>& nums, int target) {
        
    return find(nums.begin(),nums.end(),target)!=nums.end() ?                                        find(nums.begin(),nums.end(),target)-nums.begin() : -1;
        
        
    }
};
        
        
        
        
        
        /*  int s;
        for(int i=0;i<nums.size();i++){
            if(target==nums[i]){
                s=i;
                break;
            }else
                s=-1;
        }
        
        
        return s;
        
    }
};   */
