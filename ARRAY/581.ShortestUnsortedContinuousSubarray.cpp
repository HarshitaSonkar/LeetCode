class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        
        int n=nums.size();
        int i=0;
        int j=n-1;
        vector<int>res;
        res=nums;
        sort(res.begin(),res.end());
        while(i<n && nums[i]==res[i])
            i++;
        while(j>i && nums[j]==res[j])
            j--;
       
        return j-i+1;
        
    }
};
