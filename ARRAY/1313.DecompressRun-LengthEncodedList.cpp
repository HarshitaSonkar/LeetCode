class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        
        int i;
       // int j=0;
        int num;
        int freq;
        vector<int>res;
        for(i=0;i<nums.size();i=i+2){
            num=nums[i+1];
            freq=nums[i];
            
            while(freq--){
                res.push_back(num);
            }
        }
      return res;  
    }
};
