class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
  
        
        int n = nums.size(), count = 0;
    for (int i = 2; i < n; i++)
        if (nums[i] == nums[i - 2 - count]) count++;
        else nums[i - count] = nums[i];
    return n - count;
    }
};
       
  /*      
        int i = 0;
        int j = 0;
        while(j < nums.size())
        {
            int a = nums[j++];
            nums[i++] = a;
            if(j < nums.size() && nums[j] == a)
                nums[i++] = a;
            while(j < nums.size() && nums[j] == a)
                j++;
        }
        return i;
    }
};
*/
