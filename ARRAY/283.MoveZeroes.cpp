class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       
        int i = 0;
        for (auto& n : nums)
            if (n != 0) 
            std::swap(nums[i++], n);
 
    }
};
        
   


/*     
        int i;
        int j=0;
        for(i=0;i<nums.size();i++){
            if(nums[i]!=0){
             swap(nums[j++],nums[i]);
            }
        }        
    }
};





  int i=0;
        int j= (int) nums.size()-1;
        while(i<j){
            if(nums[i]==0){
                swap(nums[i],nums[j]);
                i++;
                j--;
            }else{
                i++;
                
            }
        }
        */       
        
        
        
        
        
        
        
        
        
        
 
     
