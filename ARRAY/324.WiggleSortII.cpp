class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        
        int n = nums.size();
        vector<int>res=nums;
        sort(res.begin(),res.end());
        int i=0;
        int j=((n+1)/2);
        for(int k = n-1; k >= 0; k--)
            nums[k] = k % 2 == 0 ? res[i++] : res[j++];
    }
};





        
        /*   sort(nums.begin(),nums.end());
        int n= nums.size();
        
        vector<int> res;
        
        for(int i=1;i<nums.size();i=i+2){
            res
        }
        
    }
};
*/
